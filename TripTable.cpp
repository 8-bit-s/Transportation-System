#include "TripTable.h"
#include <iostream>

//每个城市对应一个编号，方便邻接表使用

City::City() = default;
City::City(const string& name):name(name) {sign = -1;}
City::operator int() const{
    return sign;
}
City::City(const string& name, int sign): name(name), sign(sign) {}

std::ostream& City::operator<<(std::ostream& os) const{
    os << name;

    return os;
}

TripNode::TripNode() = default;

TripNode::TripNode(const Trip& t, TripNode* next): t(t), next(next) { }
TripNode::operator Trip() {
    return t;
}

Trip& TripNode::operator*() {
    return t;
}

Menu::Menu(): div(NULL), end(NULL), table(NULL) {
    cities = new City[MAXCITY];
    pool = NULL;
}
Menu::~Menu() {
	TripNode* pre = table;
	TripNode* head = pre->next;
	while (head != NULL) {
		delete pre;
		pre = head;
		head = head->next;
	}
	delete pre;
}

int Menu::addTrip(const Trip& t) noexcept{//添加行程，不会抛出异常
    TripNode* n = new TripNode(Trip(t), NULL);
    if (table == NULL) {
        table = n;
        end = n;
        if (n->t.type == RAIL)
            div = n;
        return 0;
    }
    if (t.type == AIR) {
        end->next = n;
        n->next = NULL;
        end = n;
    }
    else if (t.type == RAIL) {
        if (div != NULL) {
            n->next = div->next;
            div->next = n;
            div = n;
        }
        else {
            n->next = table;
            table = n;
            div = n;
        }
    }

    return 0;
}

int Menu::addCity(const City& c) {
    if (pool == NULL) {//未通过文件初始化，此时添加城市导致错误。如出现此异常，属于代码逻辑错误
        menuErr e("Add city before initing menu");
        throw e;
    }

    City cc(c);
    cc.sign = getSign();
    cities[cc.sign] = cc;
        
    return 0;
}

int Menu::delCity(const City& c) {
    int id = c.sign;
    pool[id] = 1;
    return 0;
}

int Menu::initPool() {//初始化编号池
    pool = new int[MAXCITY];

    if (pool == NULL) {//异常处理
        memErr e("error newing the pool");
        throw e;
    }

    for (int i = 0; i < MAXCITY; i++) {
        pool[i] = 1;
    }
}

int Menu::clearPool() {
    if (pool == NULL) return 1;
    delete []pool;
    pool = NULL;
    return 0;
}

int Menu::getSign() {
    for (int i = 0; i < MAXCITY; i++) {
        if(pool[i]) {
            pool[i] = 0;
            return i;
        }
    }

    return -1;//control never reaches here
}

void Menu::disp() {//测试用函数
    TripNode* it = table;
    int i = 1;
    while(it != NULL) {
        auto tmp = it->t;
        std::cout << tmp.stfCity.name << " -> " << tmp.arvCity.name << " with " << tmp.cost << "yuan\n";
        it = it->next;
    }
}

TripNode* Menu::getTable() {
    return table;
}

int Menu::updCity(City& city, string name1) {
	city.name = name1;
	return 0;
}

int Menu::updTrip(TripNode* trip, City stfCity1, City arvCity1, int cost1, int dist1, int hour1, int minute1, Triptype type1) {
	trip->t.arvCity = arvCity1;
	trip->t.stfCity = stfCity1;
	trip->t.cost = cost1;
	trip->t.dist = dist1;
	trip->t.time = Time(hour1, minute1);
	trip->t.type = type1;
	return 0;
}

int Menu::delTrip(TripNode* trip) {
	if (trip == table) {
		table = trip->next;
		delete trip;
	}
	else if (trip == div) {
		TripNode* head = table;
		while (head->next != div)
			head = head->next;
		div = head;
		div->next = trip->next;
		delete trip;
	}
	else if (trip == end) {
		TripNode* head = table;
		while (head->next != end)
			head = head->next;
		end = head;
		delete trip;
	}
	else {
		TripNode* head = table;
		while (head->next != trip)
			head = head->next;
		head->next = trip->next;
		delete trip;
	}
	return 0;
}

void get_next(string s, int* next) {
	next[0] = -1;
	int j = -1, k = 0;
	while (k < s.length() - 1) {
		if (j == -1 || s[j] == s[k]) {
			j++;
			k++;
			next[k] = j;
		}
		else {
			j = next[j];
		}
	}
}

bool KMP(string s, string t) {
	int next[10];
	int m = s.length();
	int n = t.length();
	get_next(t, next);
	int j = 0, k = 0;
	while (j < m && k < n) {
		if (k == -1 || s[j] == t[k]) {
			j++;
			k++;
		}
		else {
			k = next[k];
		}
	}
	if (k == n) {
		return 1;
	}
	else
		return 0;
}

vector<TripNode*> Menu::searchTrip(const Menu menu, string stfCity, string arvCity, Triptype type) {
	vector<TripNode*>res;
	TripNode* head = menu.table;
	while (head != NULL) {
		res.push_back(head);
		head = head->next;
	}
	if (stfCity[0] != NULL) {
		res = searchTripByStf(res, stfCity);
	}
	if (arvCity[0] != NULL) {
		res = searchTripByArv(res, arvCity);
	}
	res = searchTripByType(res, type);
	return res;
}

vector<TripNode*> Menu::searchTripByStf(vector<TripNode*>list, string stf) {
	vector<TripNode*> tripList;
	vector<TripNode*>::iterator head = list.begin();
	while (head != list.end()) {
		if (KMP((*head)->t.stfCity.name, stf)) {
			tripList.push_back(*head);
		}
		head++;
	}
	return tripList;
}

vector<TripNode*> Menu::searchTripByArv(vector<TripNode*>list, string arv) {
	vector<TripNode*> tripList;
	vector<TripNode*>::iterator head = list.begin();
	while (head != list.end()) {
		if (KMP((*head)->t.stfCity.name, arv)) {
			tripList.push_back(*head);
		}
		head++;
	}
	return tripList;
}

vector<TripNode*> Menu::searchTripByType(vector<TripNode*>list, Triptype type1) {
	vector<TripNode*> tripList;
	vector<TripNode*>::iterator head = list.begin();
	while (head != list.end()) {
		if ((*head)->t.type == type1) {
			tripList.push_back(*head);
		}
		head++;
	}
	return tripList;
}

vector<TripNode*> Menu::page(vector<TripNode*>tripList,int& count) {
	vector<TripNode*> onePage;
	if(count>0) {
		int i = 0;
		for (; i < 5 && count>0; i++) {
			onePage.push_back(tripList[i]);;
			count--;
		}
		while (i < 5) {
		onePage.push_back(NULL);
		i++;
	}
	}
	return onePage;
}
