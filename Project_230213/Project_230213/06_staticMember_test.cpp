#include <iostream>
#include <vector>
using namespace std;
// 1�� ���� �߰�, 2�� ���ݸ� �߰�, 0�� ����� ������ ���� ���

class Snack {
protected:
	static int count;
	string money;
	string name;
	string factory_name;
public:
	virtual void snack_status() {

	}
	static int get_count() { // static ����
		cout << "���� �ٱ��Ͽ� ��� ������ ������ " << count << "�� �Դϴ�. \n";
		return count;
	}

};

int Snack::count = 0;

class Candy :public Snack {
	string taste;
public:
	Candy(string taste) {
		this->taste = taste;
		count++;
	}
	void snack_status() {
		cout << "��: " << taste << " ����: ����" << endl;
	}
};

class Chocolate :public Snack {
	string design;
public:
	Chocolate(string design) {
		this->design = design;
		count++;
	}
	void snack_status() {
		cout << "���: " << design << " ����: ���ڸ�" << endl;
	}
};


int main() {
	string taste;
	string design;
	int cnt = 0;

	vector<Snack*> snackBasket;


	while (1) {
		cout << "���� �ٱ��Ͽ� �߰��� ���� ���� (1: ����, 2: ���ݸ�, 0: ����): ";
		cin >> cnt;
		if (cnt == 0) {
			Snack::get_count();
			break;
		}
		else if (cnt == 1) {
			cout << "���� �Է��ϼ���: ";
			cin >> taste;
			snackBasket.push_back(new Candy(taste));
		}
		else if (cnt == 2) {
			cout << "����� �Է��ϼ���: ";
			cin >> design;
			snackBasket.push_back(new Chocolate(design));
		}
		else {
			cout << " 0~2 ������ ���ڸ� �Է����ּ���~\n";
		}
	}

	int size = snackBasket.size();

	for (int i = 0; i < size; i++) {
		snackBasket[i]->snack_status();
		delete snackBasket.at(i);
		cout << "--------------------\n";
	}
	snackBasket.clear();
}