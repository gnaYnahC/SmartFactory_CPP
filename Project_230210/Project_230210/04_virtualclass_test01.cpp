#include <iostream>

using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
};

class Circle :public Shape {
public:
	void draw() {
		cout << "동 투더 그 투더 라뮈~" << endl;
	}
};

class Rect :public Shape {
public:
	void draw() {
		cout << "네모의 꿈" << endl;
	}
};

class Tria :public Shape {
public:
	void draw() {
		cout << "ㅍㅣ라미드" << endl;
	}
};

int main() {
	string a;
	cout << "원하는 도형의 모양을 입력해보세요 : ";
	cin >> a;
	while (1) {
		if (a == "c") {
			Circle c;
			c.draw();
			break;
		}
		else if (a == "r") {
			Rect r;
			r.draw();
			break;
		}
		else if (a == "t") {
			Tria t;
			t.draw();
			break;
		}
		else {
			cout << "없는 도형입니다 다시 입력해주세영: ";
			cin >> a;
		}
	}
}