#include <iostream>
#include <vector>
using namespace std;
// 1�� ���� �߰�, 2�� ���ݸ� �߰�, 0�� ����� ������ ���� ���

class Snack {
protected:
	string name; // �Ϲ� ������ ��ü�� �����ؾ߸� �Ҵ����� �� �ִ�.
	static int count; // ��ü�� ������ Ŭ���� ��ü�� ���� �Ҵ��� �� �ִ�.
public:
	Snack() {
		count++;
	}

	static int get_count() {
		return count;
	}
	virtual void showInfo() { //���� ���ε� ����
		cout << "error" << endl;
	}
};

int Snack::count = 0;

class Candy :public Snack {
	string taste;
public:
	Candy(string taste) {
		this->name = " ����";
		this->taste = taste;
	}

	void showInfo() {
		cout << taste << "��" << name << endl;
	}

};

class Chocolate :public Snack {
	string shape;
public:
	Chocolate(string shape) {
		this->name = " ���ݸ�";
		this->shape = shape;
	}

	void showInfo() {
		cout << shape << "���" << name << endl;
	}

};


int main() {
	vector<Snack*> snackBasket; // �����ͷ� ����



	while (1) {
		int number;
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�(1: ����, 2: ���ݸ�, 0: ����): " ;
		cin >> number;
		if (number == 1) {
			string taste;
			cout << "���� �Է��ϼ���: ";
			cin >> taste;
			snackBasket.push_back(new Candy(taste)); //��ü�� �ּҰ��� ������ ��
		}
		else if (number == 2) {
			string shape;
			cout << "����� �Է��ϼ���: ";
			cin >> shape;
			snackBasket.push_back(new Chocolate(shape));
		}
		else if (number == 0) {
			break;
		}
		else {
			cout << "0 ~ 2 ������ ���ڸ� �Է��ϼ���!!" << endl;
		}
	}

	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�." << endl;
	cout << endl;


	
	cout << "---------------���� ���� ���� ���� ����--------------- \n";

	for (Snack* snack : snackBasket) { // for-each��, (�迭�� ����, ���ϴ� �����̸� : �迭)
		snack->showInfo();
		delete snack;
	}
	snackBasket.clear();

	//for (Snack* snack : snackBasket) { 
	//	delete snack;
	//}

}