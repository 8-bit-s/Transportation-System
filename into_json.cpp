#include "json.hpp"
#include "into_json.h"
#include "TripTable.h"
#include <string>
#include <iostream>
#include <vector>

//{"stf": "Beijing", "arv": "Shanghai", "type": 0, "dist": 10.4, "time": "01:03:03", "cost": 300 }

using json = nlohmann::json;
using std::to_string;

struct Trip_ {
    std::string stfCity;
    int stf_id;
    std::string arvCity;
    int arv_id;
    int type;
    double dist;
    std::string time;//03:04:00
    int cost;

    Trip_() = default;
    Trip_(const Trip& t) {
        stfCity = t.stfCity.name;
        arvCity = t.arvCity.name;
        type = t.type;
        dist = t.dist;
        time = t.time.timeStr() + ":00";
        cost = t.cost;
        stf_id = t.stfCity.sign;
        arv_id = t.arvCity.sign;
    }
    operator Trip() {
        Trip t;
        t.stfCity = stfCity;
        t.arvCity = arvCity;
        if (type == 1) t.type = RAIL;
        else t.type = AIR;
        t.dist = dist;
        t.time = Time(std::stoi(time.substr(0, 2)), std::stoi(time.substr(3, 2)));
        t.cost = cost;
        t.stfCity.sign = stf_id;
        t.arvCity.sign = arv_id;

        return t;
    }
};

json tripsToJson(const std::vector<Trip>& ts) {
    std::vector<Trip_> trips(ts.begin(), ts.end());
    json j;

    for (const auto& trip : trips) {
        json tripJson;
        tripJson["stf"] = trip.stfCity;
        tripJson["arv"] = trip.arvCity;
        tripJson["cost"] = trip.cost;
        tripJson["dist"] = trip.dist;
        tripJson["time"] = trip.time;
        tripJson["trip_type"] = trip.type;
        tripJson["stf_id"] = trip.stf_id;
        tripJson["arv_id"] = trip.arv_id;

        j.push_back(tripJson);
    }

    return j;
}

json tripsToJson(const Trip& t_) {
    Trip_ t(t_);
    json tripJson;
    tripJson["stf"] = t.stfCity;
    tripJson["arv"] = t.arvCity;
    tripJson["cost"] = t.cost;
    tripJson["dist"] = t.dist;
    tripJson["time"] = t.time;
    tripJson["trip_type"] = t.type;
    tripJson["stf_id"] = t.stf_id;
    tripJson["arv_id"] = t.arv_id;

    return tripJson;
}

std::vector<Trip> jsonToTrips(const json& j) {
    std::vector<Trip> trips;

    // ���� JSON ����
    for (const auto& tripJson : j) {
        Trip_ trip;
        trip.stfCity = tripJson.at("stf").get<std::string>();
        trip.arvCity = tripJson.at("arv").get<std::string>();
        trip.cost = tripJson.at("cost").get<int>();
        trip.dist = tripJson.at("dist").get<double>();
        trip.time = tripJson.at("time").get<std::string>();
        trip.type = tripJson.at("trip_type").get<int>();
        trip.stf_id = tripJson.at("stf_id").get<int>();
        trip.arv_id = tripJson.at("arv_id").get<int>();

        trips.push_back(trip);
    }

    return trips;
}

// 将单个 City 对象转换为 JSON
json cityToJson(const City& c) {
    json j;
    j["name"] = c.name;
    j["id"] = c.sign;
    return j;
}

// 将 JSON 转换为 City 对象
City jsonToCity(const json& j) {
    City c;
    c.name = j.at("name").get<string>();
    c.sign = j.at("id").get<int>();
    return c;
}

// 将 vector<City> 转换为 JSON 数组
json citiesToJson(const vector<City>& cities) {
    json j;
    for (const auto& city : cities) {
        j.push_back(cityToJson(city));
    }
    return j;
}

// 将 JSON 数组转换为 vector<City>
vector<City> jsonToCities(const json& j) {
    vector<City> cities;
    for (const auto& element : j) {
        cities.push_back(jsonToCity(element));
    }
    return cities;
}

/*
int main() {
    Trip t1 = {string("CityA"), string("CityB"), RAIL, 500.5, Time(1,2), 1100};
    Trip t2 = {string("CityC"), string("CityD"), AIR, 700.2, Time(12, 45), 2400};
    Trip t3 = {string("CityE"), string("CityF"), RAIL, 600.8, Time(23, 55), 1200};

    std::vector<Trip> trips = {t1, t2, t3};

    json j = tripsToJson(trips);

    std::string str = j.dump();
    str.pop_back();
    std::cout << str.substr(1) << std::endl;

    return 0;
}

int main() {
    // ʾ���÷������������� JSON ����
    json j = R"([
        {"stfCity": "CityA", "arvCity": "CityB", "cost": 100, "dist": 500.5, "time": "12:00", "type": 1},
        {"stfCity": "CityC", "arvCity": "CityD", "cost": 150, "dist": 700.2, "time": "15:30", "type": 2},
        {"stfCity": "CityE", "arvCity": "CityF", "cost": 120, "dist": 600.8, "time": "11:45", "type": 1}
    ])"_json;

    // �� JSON ת��Ϊ vector<Trip>
    std::vector<Trip> trips = jsonToTrips(j);

    // ��� vector<Trip> ������
    for (const auto& trip : trips) {
        std::cout << "stfCity: " << trip.stfCity << ", arvCity: " << trip.arvCity << ", cost: " << trip.cost
                  << ", dist: " << trip.dist << ", time: " << trip.time.timeStr() << ", type: " << trip.type << std::endl;
    }

    return 0;
}
*/