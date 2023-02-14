#include <iostream>
using namespace std;

class Snack {
protected:
	string name;
	string money;
	string taste;
	string factory_name;
};

class Candy :public Snack {
	string smell;
public:
	Candy(string money, string name, string factory_name, string taste) {
		this->money = money;
		this->name = name;
		this->factory_name = factory_name;
		this->taste = taste;
	}

	void candy() {
		cout << "사탕 이름: " << name << "\n";
		cout << "사탕의 가격: " << money << "\n";
		cout << "맛: " << taste << "\n";
		cout << "제조사: " << factory_name << "\n";
	}
	string get_smell(string smell) {
		return smell;
	}
};

class Chocolate :public Snack {
	string design;
public:
	Chocolate(string money, string name, string factory_name, string taste) {
		this->money = money;
		this->name = name;
		this->factory_name = factory_name;
		this->taste = taste;
	}
	void chocolate() {
		cout << "초콜릿 이름: " << name << "\n";
		cout << "초콜릿 가격: " << money << "\n";
		cout << "맛: " << taste << "\n";
		cout << "제조사: " << factory_name << "\n";
	}
	string get_design(string design) {
		return design;
	}


};

int main() {
	string name, money, taste, factory_name;
	string snack, design ,smell;

	cout << "간식 종류: ";
	cin >> snack;

	//Chocolate choco; // (name, money, taste, factory_name);
	

	if (snack == "초콜릿") {
		cout << "초콜릿 이름: ";
		cin >> name;
		cout << "가격: ";
		cin >> money;
		cout << "맛: ";
		cin >> taste;
		cout << "제작사: ";
		cin >> factory_name;
		cout << "모양: ";
		cin >> design;

		cout << "---초콜릿 정보--- \n \n";
		Chocolate choco(name, money, taste, factory_name);
		cout << "초콜릿 모양: " << choco.get_design(design);
	}
	else if (snack == "사탕") {
		cout << "사탕 이름: ";
		cin >> name;
		cout << "가격: ";
		cin >> money;
		cout << "맛: ";
		cin >> taste;
		cout << "제작사: ";
		cin >> factory_name;
		cout << "첨가된 향: ";
		cin >> smell;

		cout << "---사탕 정보--- \n \n";
		Candy candy(name, money, taste, factory_name);
		cout << "사탕의 향: " << candy.get_smell(smell);
	}
	else {
		cout << "없는 정보!";
	}

}