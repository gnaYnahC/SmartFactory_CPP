#include <iostream>

using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
};

class Circle :public Shape {
public:
	void draw() {
		cout << "�� ���� �� ���� ��~" << endl;
	}
};

class Rect :public Shape {
public:
	void draw() {
		cout << "�׸��� ��" << endl;
	}
};

class Tria :public Shape {
public:
	void draw() {
		cout << "���Ӷ�̵�" << endl;
	}
};

int main() {
	string a;
	cout << "���ϴ� ������ ����� �Է��غ����� : ";
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
			cout << "���� �����Դϴ� �ٽ� �Է����ּ���: ";
			cin >> a;
		}
	}
}