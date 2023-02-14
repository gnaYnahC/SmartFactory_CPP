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
		cout << "���� �̸�: " << name << "\n";
		cout << "������ ����: " << money << "\n";
		cout << "��: " << taste << "\n";
		cout << "������: " << factory_name << "\n";
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
		cout << "���ݸ� �̸�: " << name << "\n";
		cout << "���ݸ� ����: " << money << "\n";
		cout << "��: " << taste << "\n";
		cout << "������: " << factory_name << "\n";
	}
	string get_design(string design) {
		return design;
	}


};

int main() {
	string name, money, taste, factory_name;
	string snack, design ,smell;

	cout << "���� ����: ";
	cin >> snack;

	//Chocolate choco; // (name, money, taste, factory_name);
	

	if (snack == "���ݸ�") {
		cout << "���ݸ� �̸�: ";
		cin >> name;
		cout << "����: ";
		cin >> money;
		cout << "��: ";
		cin >> taste;
		cout << "���ۻ�: ";
		cin >> factory_name;
		cout << "���: ";
		cin >> design;

		cout << "---���ݸ� ����--- \n \n";
		Chocolate choco(name, money, taste, factory_name);
		cout << "���ݸ� ���: " << choco.get_design(design);
	}
	else if (snack == "����") {
		cout << "���� �̸�: ";
		cin >> name;
		cout << "����: ";
		cin >> money;
		cout << "��: ";
		cin >> taste;
		cout << "���ۻ�: ";
		cin >> factory_name;
		cout << "÷���� ��: ";
		cin >> smell;

		cout << "---���� ����--- \n \n";
		Candy candy(name, money, taste, factory_name);
		cout << "������ ��: " << candy.get_smell(smell);
	}
	else {
		cout << "���� ����!";
	}

}