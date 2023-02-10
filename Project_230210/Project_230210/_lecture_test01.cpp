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

	Snack snackBasket[4] = { Candy("2800",name,"¯�� �ֽ�ȸ��","���ʸ� ����"),Chocolate("3500", "����ô�","�ͱ� �ֽ�ȸ��", "�����̸��"),Candy("2800","������","¯�� �ֽ�ȸ��","������ ����"),Chocolate("3500", "û����","�ͱ� �ֽ�ȸ��", "û�������") };
	for (int i = 0; i < 4; i++) {
		cin >> name;
		cout << snackBasket[i].get_name() << endl;
	}


}