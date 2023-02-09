#include <iostream>

using namespace std;
// a = ���ǰ���
// b = �غ��� ����
// c = ���� ����
// d = ����
class Shape {
protected:
	int a;
	double b;

public:

	void printlnfo() {
			cout<<"���� ����: " << a << "�� " << b << "cm \n";

	}
};

//�簢�� ����
class Rectangle : public Shape{
	double c;

public:

	Rectangle(double b, double c) {
		this->a = 4;
		this->b = b;
		this->c = c;
	}

	double area() {
		return b * c;
	}
};

//�ﰢ�� ����
class Triangle : public Shape {
	double d;

public:
	Triangle(double b, double d) {
		this->a = 3;
		this->b = b;
		this->d = d;
	}

	double area() {
		return double((b * d)/2);
	}
};

int main() {
	int a;
	double b, c, d;
	// ����ڷκ��� width, height �Է� ����
	cout << "���� ����: ";
	cin >> a;

	if(a==4){
		cout << "�簢���� �غ� ����: ";
		cin >> b;
		cout << "�簢���� ���� ����: ";
		cin >> c;

		// ��ü ����
		Rectangle rect(b, c);

		// �簢���� ���� ���
		cout << "�簢���� ����: " << rect.area() << endl;

		rect.printlnfo();
	}
	else if(a==3){
		cout << "�ﰢ���� �غ� ����: ";
		cin >> b;
		cout << "�ﰢ���� ����: ";
		cin >> d;

		Triangle tri(b, d);

		// �ﰢ���� ���� ���
		cout << "�ﰢ���� ����: " << tri.area() << endl;
		tri.printlnfo();
	}
	else {
		cout << "���� ���� �� �� �Է�";
	}
}