#include <iostream>
using namespace std;

class Snack {
protected:
	string money;
	string name;
	string factory_name;
public:
	virtual void snack_status() {

	}
};

class Candy :public Snack {
	string taste;
public:
	Candy(string money, string name, string factory_name, string taste) {
		this->money = money;
		this->name = name;
		this->factory_name = factory_name;
		this->taste = taste;
	}
	void snack_status() {
		cout << "����: ����" << endl;
		cout << "����: " << money << endl;
		cout << "���ڸ�: " << name << endl;
		cout << "��: " << taste << endl;
		cout << "������: " << factory_name << endl;
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
	void snack_status() {
		cout << "����: ���ݸ�" << endl;
		cout << "����: " << money << endl;
		cout << "���ڸ�: " << name << endl;
		cout << "���: " << design << endl;
		cout << "������: " << factory_name << endl;
	}

};


int main() {
	Snack* snackBasket[4] = { new Candy("900", "û����","¯�� �ֽ�ȸ��", "û���� ���"),
		new Candy("800","������","�ͱ� �ֽ�ȸ��","������"),
		new Chocolate("3500", "����ô�","�ͱ� �ֽ�ȸ��", "������ ���"), 
		new Chocolate("2800","���ں�","¯�� �ֽ�ȸ��","���ʸ�")
	};

	for (int i = 0; i < 4; i++) {
		snackBasket[i]->snack_status();
		cout << "--------------------\n";
	}

	for (int j = 0; j < 4; j++) {
		delete snackBasket[j];
	}
}