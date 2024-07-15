#include <iostream>
#include <fstream>
#include <string>
#include "exceptions.h"
#include "TripTable.h"
#include "Graph.h"
#include "httplib.h"
#include "api.h"
#include <sstream>

using namespace std;

httplib::Client client("localhost", 3000);//"127.0.0.1:3000"
int readFile(const string& path, Menu& m);

vector<Trip> vecs;
vector<City> cvec;

City get_ccity(const vector<City>& cvec, const string& name) {
    for (const auto& it : cvec) {
        if (it.name == name) {
            return it;
        }
    }

    return City();
}

void menu() {
    Trip t;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. GET" << endl;
        cout << "2. POST" << endl;
        cout << "3. PUT" << endl;
        cout << "4. DELETE" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int choice, temp;
        string stf, arv;
        string timeStr;
        int type;
        cin >> choice;
        vector<string> stfs;
        stringstream sstm;

        switch (choice) {
        case 1:
            cout << "Enter starting city (or leave blank): ";
            cin.ignore(); // clear input buffer
            getline(cin, stf);
            sstm = stringstream(stf);
            while (getline(sstm, arv, ',')) {
                //cout << arv << " " << endl;
                stfs.push_back(arv);
            }

            cout << "Enter arriving city (or leave blank): ";
            getline(cin, arv);

            cout << "Enter trip type: ";
            cin >> type;

            vecs = get_trip(stfs, vector<string>{arv}, vector<int>{type});
            if (vecs.empty()) break;
            for (const auto& it : vecs) {
                cout << it.stfCity.name << " -> " << it.arvCity.name << endl;
            }
            break;

        case 2:
            cout << "Enter starting city: ";
            //cin.ignore(); // clear input buffer
            cin >> stf; cout << endl << stf << endl;
            t.stfCity = get_ccity(cvec, stf);

            cout << "Enter arriving city: ";
            //cin.ignore(); // clear input buffer
            cin >> arv;
            t.arvCity = get_ccity(cvec, arv);

            cout << "Enter trip type: ";
            cin >> temp;
            t.type = temp ? RAIL : AIR;

            cout << "Enter distance: ";
            cin >> t.dist;

            cout << "Enter time (hh:mm): ";
            cin >> timeStr;//class Time has severe bugs
            t.time = Time(22, 22);

            cout << "Enter cost: ";
            cin >> t.cost;

            cout << new_trip(t) << endl;
            break;

        case 3:
            cout << "enter Trip id:";
            cin >> temp;

        case 4:

        case 5:
            cout << "Exiting..." << endl;
            return;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    }
}

void menu2() {
    cout << "Menu:" << endl;
    cout << "1. GET - Get all cities" << endl;
    cout << "2. POST - Create a new city" << endl;
    cout << "3. PUT - Update a city" << endl;
    cout << "4. DELETE - Delete a city" << endl;
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    switch (choice) {
    case 1: {
        // GET - Get all cities
        vector<City> cities = get_city();
        cvec = cities;
        cout << "Cities List:" << endl;
        for (const auto& city : cities) {
            cout << "Name: " << city.name << ", Sign: " << city.sign << endl;
        }
        break;
    }
    case 2: {
        // POST - Create a new city
        string name;
        int sign;
        cout << "Enter name of the city: ";
        cin >> name;
        cout << "Enter sign of the city: ";
        cin >> sign;
        City newCity(name, sign);
        string createResult = new_city(newCity);
        cout << "Create Result: " << createResult << endl;
        break;
    }
    case 3: {
        // PUT - Update a city
        string name;
        int sign;
        cout << "Enter name of the city to update: ";
        cin >> name;
        cout << "Enter new sign of the city: ";
        cin >> sign;
        City updatedCity(name, sign);
        string updateResult = update_city(updatedCity);
        cout << "Update Result: " << updateResult << endl;
        break;
    }
    case 4: {
        // DELETE - Delete a city
        string name;
        int sign;
        cout << "Enter name of the city to delete: ";
        cin >> name;
        cout << "Enter sign of the city to delete: ";
        cin >> sign;
        City deleteCity(name, sign);
        string deleteResult = delete_city(deleteCity);
        cout << "Delete Result: " << deleteResult << endl;
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
        break;
    }
}

int main() {
    
    httplib::Headers headers{
        { "Content-Type", "application/json" }
        //,{ "a", "b"}
    };

    while (1) {
        cout << "choose:\n1 -- City\n2 -- Trip\n3 -- Exit\n";
        int cho;
        cin >> cho;
        switch (cho) {
        case 1:
            menu2();
            break;
        case 2:
            menu();
            break;
        case 3:
            break;
        }
    }

    //string body1 = R"({"stf": "Beijing", "arv": "Shanghai", "trip_type": 0, "dist": 10.4, "time": "01:03:03", "cost": 300 })";
    //auto res1 = cli.Post("/", headers, body1, "application/json");

    return 0;
}

/*
INSERT INTO trip_test (stfCity, stf_id, arvCity, arv_id, type, dist, time, cost) VALUES ('Wuhan', 1, 'Beijing', 2, 0, 101.1, '22:33:00', 100);
*/