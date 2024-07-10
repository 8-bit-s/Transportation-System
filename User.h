/*
*User.h
*包含管理员的登录功能，以及增删改查；包含普通用户的最优路线查询
*
*/

#pragma once
using namespace std;
#include<vector>
#include<string>
#include"Graph.h"
#include"oldTripTable.h"
const char* KEY = "pvViCH5F";//管理员密钥

/*普通用户类*/
class User {
public:
	string bestRoute(Menu& menu, const City& src, const City& arv, int tripType, int method);
};

/*管理员类*/
class Admin {
private:
	bool isOnline;
public:
	Admin() :isOnline(0){}

	bool getOnline() {
		return isOnline;
	}

	bool logIn(string key1);

	void logOut();

	void AddCity(Menu& menu, string name1);

	void AddTrip(Menu& menu, City stfCity1, City arvCity1, string cost1, string dist1, string hour1,
		string minute1, Triptype type1) throw(cinErr);

	void UpdateCity(Menu& menu, City tarCity, string name1);
	
	void UpdateTrip(Menu& menu, vector<TripNode*>tripList, int index, City stfCity1, City arvCity1,
		string cost1, string dist1, string hour1, string minute1, Triptype type1) throw(cinErr);

	void DeleteCity(Menu& menu, City tarCity);

	void DeleteTrip(Menu& menu,vector<TripNode*>tripList, int index);
};