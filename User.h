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

const char* KEY = "pvViCH5F";//管理员密钥

/*普通用户类*/
class User {
public:
	/*
	*最优路线算法
	* 功能：根据用户选择的城市，旅行方式，决策依据得到最优路线
	* 输入：始发站(City),终到站(City),旅行方式(int)，决策依据(int)
	* 返回值：最优路线信息
	*/
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

	/*
	*列表初始化（辅助函数）
	* 功能：如果管理员未查询而直接修改或删除，调用此函数将空list初始化成原Menu链表信息
	*/
	void listInit(Menu menu, vector<TripNode*>& list);
	
	/*
	*管理员登录
	* 功能：比较输入的密钥和管理员密钥，如果相同则登录成功，返回true，否则失败，返回false
	*/
	bool logIn(string key1);

	//管理员登出（无需测试）
	void logOut();

	/*
	*添加城市
	* 功能：输入城市名称，自动分配sign（编号），加入Menu
	*/
	void AddCity(Menu& menu, string name1) throw (cinErr);

	/*
	*添加行程
	* 功能：管理员输入行程信息，判断是否合法，如果不合法会抛出cinErr类错误（带有提示信息），如果合法则加入Menu
	*/
	void AddTrip(Menu& menu, City stfCity1, City arvCity1, string cost1, string dist1, string hour1,
		string minute1, Triptype type1) throw(cinErr);

	/*
	*修改城市
	* 功能：管理员选定城市，输入城市名称，如果合法则修改，不合法抛出cinErr类错误（带有提示信息）
	*/
	void UpdateCity(Menu& menu, City tarCity, string name1) throw(cinErr);
	
	/*
	*修改行程
	* 功能：管理员在原Menu的行程信息表或查找得到的行程信息表中，选择行程（index为对应数组下标），
	* 输入信息，如果合法则修改，不合法抛出cinErr类错误（带有提示信息）
	* 注意：index参数由前端传入，如果用户未查询，tripList就是原链表的所有元素（调用listInit函数），
	* 否则就是查询函数的返回值。
	*/
	void UpdateTrip(Menu& menu, vector<TripNode*>tripList, int index, City stfCity1, City arvCity1,
		string cost1, string dist1, string hour1, string minute1, Triptype type1) throw(cinErr);

	/*
	*删除城市
	* 功能：管理员选定城市，从Menu删除
	*/
	void DeleteCity(Menu& menu, City tarCity);

	/*
	*删除行程
	* 功能：管理员在原Menu的行程信息表或查找得到的行程信息表中，选择行程（index为对应数组下标），从Menu删除
	* 注意：index参数由前端传入，如果用户未查询，tripList就是原链表的所有元素（调用listInit函数），
	* 否则就是查询函数的返回值。
	*/
	void DeleteTrip(Menu& menu,vector<TripNode*>tripList, int index);
};
