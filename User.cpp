#include"User.h"
#include"Time.h"
#include"Graph.h"
#include"exceptions.h"
#include"TripTable.h"
using namespace std;

bool isCity(string name1) {
	int len = name1.length();
	for (int i = 0; i < len; i++) {
		if (name1[i] > 'z' || name1[i] < 'a') {
			return 0;
		}
	}
	return 1;
}

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
	if (temp = stoi(cost1)) {
		if (temp > 0)
			return 1;
	}
	return 0;
}

bool isDist(string dist1) {
	int temp;
	if (temp = stoi(dist1)) {
		if (temp > 0)
			return 1;
	}
	return 0;
}

bool isHour(string hour1) {
	int temp;
	if (temp = stoi(hour1)) {
		if (temp >= 0)
			return 1;
	}
	return 0;
}

bool isMinute(string minute1) {
	int temp;
	if (temp = stoi(minute1)) {
		if (temp >= 0 && temp < 60)
			return 1;
	}
	return 0;
}


