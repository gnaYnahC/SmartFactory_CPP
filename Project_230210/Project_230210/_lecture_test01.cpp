#include <iostream>
using namespace std;



class Snack {
protected:
	string money;
	string name;
	string factory_name;
public:

	//getter
	string get_name() {
		return name;
	}
};

class Candy:public Snack {
	string taste;
public:
	Candy(string money, string name, string factory_name, string taste) {
		this->money = money;
		this->name = name;
		this->factory_name = factory_name;
		this->taste = taste;
	}
	string get_taste() {
		return taste;
	}

};

class Chocolate :public Snack {
	string design;
public:
	Chocolate(string money, string name, string factory_name, string design) {
		this->money = money;
		this->name = name;
		this->factory_name = factory_name;
		this->design = design;
	}
	string get_design() {
		return design;
	}

};


int main() {
	string name;

	Snack snackBasket[4] = { Candy("2800",name,"짱구 주식회사","민초맛 사탕"),Chocolate("3500", "석기시대","맹구 주식회사", "돌멩이모양"),Candy("2800","돌사탕","짱구 주식회사","설탕맛 사탕"),Chocolate("3500", "청포도","맹구 주식회사", "청포도모양") };
	for (int i = 0; i < 4; i++) {
		cin >> name;
		cout << snackBasket[i].get_name() << endl;
	}


}