#include"User.h"
#include"Time.h"
#include"Graph.h"
#include"TripTable.h"
using std::string;

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

bool isCost(string cost1) {
	int temp;
	for (int i = 0; i < cost1.length(); i++) {
		if (cost1[i] < '0' || cost1[i]>'9') {
			return 0;
		}
	}
	temp = stoi(cost1);
	if (temp > 0)
		return 1;
	return 0;
}

bool isDist(string dist1) {
	int temp;
	for (int i = 0; i < dist1.length(); i++) {
		if (dist1[i] < '0' || dist1[i]>'9') {
			return 0;
		}
	}
	temp = stoi(dist1);
	if (temp > 0)
		return 1;
	return 0;
}

bool isHour(string hour1) {
	int temp;
	for (int i = 0; i < hour1.length(); i++) {
		if (hour1[i] < '0' || hour1[i]>'9') {
			return 0;
		}
	}
	temp = stoi(hour1);
	if (temp > 0)
		return 1;
	return 0;
}

bool isMinute(string minute1) {
	int temp;
	for (int i = 0; i < minute1.length(); i++) {
		if (minute1[i] < '0' || minute1[i]>'9') {
			return 0;
		}
	}
	temp = stoi(minute1);
	if (temp >= 0 && temp < 60)
		return 1;
	return 0;
}

vector<Trip> User::bestRoute(vector<Trip> trips, const City& src, const City& arv, int tripType, int method) {
	Graph g;
	g.init(trips);
	return g.Dijkstra(trips, src, arv, tripType, method);
}
