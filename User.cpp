#include"User.h"
#include"Time.h"
#include"Graph.h"
#include"exceptions.h"
using namespace std;

bool Admin::logIn(string key1) {
	if (key1 == KEY) {
		isOnline = 1;
		return true;
	}
		
	else
		return false;
}
void Admin::logOut() {
	isOnline = 0;
}

void Admin::AddCity(Menu& menu, string name1) {
	City city(name1);
	menu.addCity(city);
}

void Admin::UpdateCity(Menu& menu, City tarCity, string name1) {
	tarCity.name = name1;
}

void Admin::DeleteCity(Menu& menu, City tarCity) {
	menu.delCity(tarCity);
}

int isCost(string cost1) {
	int len = cost1.length();
	int res = 0;
	for (int i = 0; i < len; i++) {
		if (cost1[i] < '0' || cost1[i]>'9') {
			cinErr e("The cost you entered is not a number!");
			throw e;
		}
		else if (cost1[i] == '-') {
			cinErr e("The cost you entered is less than zero!");
			throw e;
		}
		res = res * 10 + (cost1[i] - '0');
	}
	return res;
}

int isDist(string dist1) {
	int len = dist1.length();
	int res = 0;
	for (int i = 0; i < len; i++) {
		if (dist1[i] < '0' || dist1[i]>'9') {
			cinErr e("The distance you entered is not a number!");
			throw e;
		}
		else if (dist1[i] == '-') {
			cinErr e("The distance you entered is less than zero!");
			throw e;
		}
		res = res * 10 + (dist1[i] - '0');
	}
	return res;
}

int isHour(string hour1) {
	int len = hour1.length();
	int res = 0;
	for (int i = 0; i < len; i++) {
		if (hour1[i] < '0' || hour1[i]>'9') {
			cinErr e("The hour you entered is not a number!");
			throw e;
		}
		else if (hour1[i] == '-') {
			cinErr e("The hour you entered is less than zero!");
			throw e;
		}
		res = res * 10 + (hour1[i] - '0');
	}
	return res;
}

int isMinute(string minute1) {
	int len = minute1.length();
	int res = 0;
	for (int i = 0; i < len; i++) {
		if (minute1[i] < '0' || minute1[i]>'9') {
			cinErr e("The minute you entered is not a number!");
			throw e;
		}
		else if (minute1[i] == '-') {
			cinErr e("The minute you entered is less than zero!");
			throw e;
		}
		res = res * 10 + (minute1[i] - '0');
	}
	return res;
}

void Admin::AddTrip(Menu& menu, City stfCity1, City arvCity1, string cost1, string dist1, string hour1,string minute1, Triptype type1) {
	Trip trip;
	trip.arvCity = stfCity1;
	trip.stfCity = arvCity1;
	trip.cost = isCost(cost1);
	trip.dist = isDist(dist1);
	int hour = isHour(hour1);
	int minute = isMinute(minute1);
	trip.time = Time(hour, minute);
	trip.type = type1;
	menu.addTrip(trip);
}

void Admin::UpdateTrip(Menu& menu,vector<TripNode*>tripList, int index, City stfCity1, City arvCity1, string cost1, string dist1, string hour1, string minute1, Triptype type1) {
	int cost = isCost(cost1);
	int dist = isDist(dist1);
	int hour = isHour(hour1);
	int minute = isMinute(minute1);
	TripNode* tarTrip = tripList[index];
	menu.updTrip(tarTrip, stfCity1, arvCity1, cost, dist, hour, minute, type1);
}


void Admin::DeleteTrip(Menu& menu,vector<TripNode*>tripList, int index) {
	TripNode* tarTrip = tripList[index];
	menu.delTrip(tarTrip);
}

string User::bestRoute(Menu& menu, const City& src, const City& arv, int tripType, int method) {
	Graph g;
	g.init(menu);
	int stfSign = src.sign;
	int arvSign = arv.sign;
	g.Dijkstra(g.matrix,stfSign, arvSign, tripType, method);
}