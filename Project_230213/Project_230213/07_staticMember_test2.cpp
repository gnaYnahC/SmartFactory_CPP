#include <iostream>
#include <vector>
using namespace std;
// 1은 사탕 추가, 2는 초콜릿 추가, 0은 종료와 간식의 개수 출력

class Snack {
protected:
	string name; // 일반 변수는 객체를 생성해야만 할당해줄 수 있다.
	static int count; // 객체와 독립적 클래스 자체를 통해 할당할 수 있다.
public:
	Snack() {
		count++;
	}

	static int get_count() {
		return count;
	}
	virtual void showInfo() { //동적 바인딩 가능
		cout << "error" << endl;
	}
};

int Snack::count = 0;

class Candy :public Snack {
	string taste;
public:
	Candy(string taste) {
		this->name = " 사탕";
		this->taste = taste;
	}

	void showInfo() {
		cout << taste << "맛" << name << endl;
	}

};

class Chocolate :public Snack {
	string shape;
public:
	Chocolate(string shape) {
		this->name = " 초콜릿";
		this->shape = shape;
	}

	void showInfo() {
		cout << shape << "모양" << name << endl;
	}

};


int main() {
	vector<Snack*> snackBasket; // 포인터로 생성



	while (1) {
		int number;
		cout << "과자 바구니에 추가할 간식을 고르시오(1: 사탕, 2: 초콜릿, 0: 종료): " ;
		cin >> number;
		if (number == 1) {
			string taste;
			cout << "맛을 입력하세요: ";
			cin >> taste;
			snackBasket.push_back(new Candy(taste)); //객체의 주소값을 담아줘야 함
		}
		else if (number == 2) {
			string shape;
			cout << "모양을 입력하세요: ";
			cin >> shape;
			snackBasket.push_back(new Chocolate(shape));
		}
		else if (number == 0) {
			break;
		}
		else {
			cout << "0 ~ 2 사이의 숫자를 입력하세요!!" << endl;
		}
	}

	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다." << endl;
	cout << endl;


	
	cout << "---------------내가 가진 과자 정보 보기--------------- \n";

	for (Snack* snack : snackBasket) { // for-each문, (배열의 원소, 원하는 변수이름 : 배열)
		snack->showInfo();
		delete snack;
	}
	snackBasket.clear();

	//for (Snack* snack : snackBasket) { 
	//	delete snack;
	//}

}