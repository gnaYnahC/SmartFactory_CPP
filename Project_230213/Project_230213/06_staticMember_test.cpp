#include <iostream>
#include <vector>
using namespace std;
// 1은 사탕 추가, 2는 초콜릿 추가, 0은 종료와 간식의 개수 출력

class Snack {
protected:
	static int count;
	string money;
	string name;
	string factory_name;
public:
	virtual void snack_status() {

	}
	static int get_count() { // static 게터
		cout << "과자 바구니에 담긴 간식의 개수는 " << count << "개 입니다. \n";
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
		cout << "맛: " << taste << " 종류: 사탕" << endl;
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
		cout << "모양: " << design << " 종류: 쪼코릿" << endl;
	}
};


int main() {
	string taste;
	string design;
	int cnt = 0;

	vector<Snack*> snackBasket;


	while (1) {
		cout << "과자 바구니에 추가할 간식 고르기 (1: 사탕, 2: 쫘콜릿, 0: 종료): ";
		cin >> cnt;
		if (cnt == 0) {
			Snack::get_count();
			break;
		}
		else if (cnt == 1) {
			cout << "맛을 입력하세용: ";
			cin >> taste;
			snackBasket.push_back(new Candy(taste));
		}
		else if (cnt == 2) {
			cout << "모양을 입력하세용: ";
			cin >> design;
			snackBasket.push_back(new Chocolate(design));
		}
		else {
			cout << " 0~2 사이의 숫자를 입력해주세용~\n";
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