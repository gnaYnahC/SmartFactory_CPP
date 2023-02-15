#include <iostream>
#include <vector>

using namespace std;

class Snack {
protected:
	string name;
	static int count;
public:
	Snack() {
		count++;
	}
	static int get_count() {
		return count;
	}
	virtual void showInfo() { // 가상 함수로 만듦
		cout << "error" << endl;
	}
};

int Snack::count = 0;

class Candy : public Snack {
	string taste;
public:
	Candy(string taste) {
		this->name = "사탕";
		this->taste = taste;
	}
	void showInfo() { // 오버라이딩
		cout << taste << " 맛 " << name << endl;
	}
};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape) {
		this->name = "초콜릿";
		this->shape = shape;
	}
	void showInfo() {
		cout << shape << " 모양 " << name << endl;
	}
};
int main() {
	vector<unique_ptr<Snack>> snackBasket;

	while (true) {
		int number;
		cout << "과자 바구니에 추가할 간식을 고르시오(1: 사탕, 2: 초콜릿, 0: 종료): ";
		cin >> number;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "잘못된 입력입니다. 숫자 0, 1, 2 중에서 선택해주세요." << endl;
			continue;
		}

		if (number == 0) {
			break;
		}
		else if (number == 1) {
			string taste;
			cout << "맛을 입력하세요: ";
			cin >> taste;

			if (cin.fail()) {
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "잘못된 입력입니다. 문자열을 다시 입력해주세요." << endl;
				continue;
			}

			snackBasket.push_back(make_unique<Candy>(taste));
		}
		else if (number == 2) {
			string shape;
			cout << "모양을 입력하세요: ";
			cin >> shape;

			if (cin.fail()) {
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "잘못된 입력입니다. 문자열을 다시 입력해주세요." << endl;
				continue;
			}

			snackBasket.push_back(make_unique<Chocolate>(shape));
		}
		else
		{
			cout << "잘못된 입력입니다. 숫자 0, 1, 2 중에서 선택해주세요." << endl;
			continue;
		}
	}

	for (const auto& snack : snackBasket) {
		snack->showInfo();
	}
	snackBasket.clear();

	return 0;
}

//int main() {
//	vector<Snack*> snackBasket; // 포인터로 생성
//
//	while (true) {
//		int number;
//		cout << "과자 바구니에 추가할 간식을 고르시오(1: 사탕, 2: 초콜릿, 0: 종료): ";
//		cin >> number;
//
//		if (cin.fail()) { // 입력이 잘못되었을 때
//			cin.clear(); // 입력 스트림의 에러 플래그를 제거
//			cin.ignore(10000, '\n'); // 입력 버퍼를 비움
//			cout << "잘못된 입력입니다. 숫자 0, 1, 2 중에서 선택해주세요." << endl;
//			continue; // 다시 입력 받음
//		}
//
//		if (number == 0) { // 0을 입력했을 때
//			break; // 반복문을 종료하고 종료 처리를 진행
//		}
//		else if (number == 1) { // 1을 입력했을 때
//			string taste;
//			cout << "맛을 입력하세요: ";
//			cin >> taste;
//
//			if (cin.fail()) { // 입력이 잘못되었을 때
//				cin.clear(); // 입력 스트림의 에러 플래그를 제거
//				cin.ignore(10000, '\n'); // 입력 버퍼를 비움
//				cout << "잘못된 입력입니다. 문자열을 다시 입력해주세요." << endl;
//				continue; // 다시 입력 받음
//			}
//
//			snackBasket.push_back(new Candy(taste)); // Candy 객체를 생성하고 벡터에 저장
//		}
//		else if (number == 2) { // 2를 입력했을 때
//			string shape;
//			cout << "모양을 입력하세요: ";
//			cin >> shape;
//
//			if (cin.fail()) { // 입력이 잘못되었을 때
//				cin.clear(); // 입력 스트림의 에러 플래그를 제거
//				cin.ignore(10000, '\n'); // 입력 버퍼를 비움
//				cout << "잘못된 입력입니다. 문자열을 다시 입력해주세요." << endl;
//				continue; // 다시 입력 받음
//			}
//
//			snackBasket.push_back(new Chocolate(shape)); // Chocolate 객체를 생성하고 벡터에 저장
//		}
//		else
//		{
//			cout << "잘못된 입력입니다. 숫자 0, 1, 2 중에서 선택해주세요." << endl;
//			continue; // 다시 입력 받음
//		}
//	}// snackBasket에 저장된 객체의 정보 출력
//	for (Snack* snack : snackBasket) { // 벡터의 모든 요소에 대해 반복
//		snack->showInfo(); // Snack의showInfo()를 가상 함수로 구현하여 상속받은 Candy와 Chocolate의 showInfo()가 호출됨
//		delete snack; // 동적으로 할당한 메모리를 해제
//	}
//	snackBasket.clear(); // 벡터를 비움
//
//	return 0;
//}