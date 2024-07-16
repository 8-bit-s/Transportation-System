/*
*User.h
*包含管理员的登录功能，以及增删改查；包含普通用户的最优路线查询
*/

#pragma once
using namespace std;
#include<vector>
#include<string>
#include"Graph.h"
#include"TripTable.h"
static const char* KEY = "pvViCH5F";//管理员密钥

/*普通用户类*/
class User {
public:
	/*
	*最优路线算法
	* 功能：根据用户选择的城市，旅行方式，决策依据得到最优路线
	* 输入：始发站(City),终到站(City),旅行方式(int)，决策依据(int)
	* 返回值：最优路线信息
	*/
	string bestRoute(const City& src, const City& arv, int tripType, int method);
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
};

/*
*输入检测函数（辅助函数）
*/
bool isCity(string name1);

bool isCost(string cost1);

bool isDist(string dist1);

bool isHour(string hour1);

bool isMinute(string minute1);