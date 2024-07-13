#pragma once
#include "TripTable.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

string new_trip(const Trip& new_t);//构造一个Trip对象并传入

string delete_trip(const Trip& target_t);//在通过get_trip获得一些Trip后选取要删除的那一个并传入

vector<Trip> get_trip(vector<string> stfs, vector<string> arvs, vector<int> types);//tags

string update_trip(const Trip& new_t);//在通过get_trip获得一些Trip后选取要更新的那一个，更改之并把更改后的Trip对象传入

string new_city(const City& new_t);//构造一个city对象并传入

string delete_city(const City& target_t);//在通过get_city获得一些city后选取要删除的那一个并传入

vector<City> get_city(vector<string> stfs, vector<string> arvs, vector<int> types);//tags

string update_city(const City& new_t);//在通过get_city获得一些city后选取要更新的那一个，更改之并把更改后的city对象传入