#include <iostream>
#include <string>
using namespace std;

class Rectangle{

	double width;
	double height;

public:
	Rectangle(double width, double height) {
		this->width = width;
		this->height = height;
	}
	double area(double width, double height){
		return width * height;
	}
};

int main() {
	double width = 0;
	double height = 0;

	Rectangle r(width,height);

	cout << "������ ���� �Է�: ";
	cin >> width;
	cout << "������ ���� �Է�: ";
	cin >> height;

	cout << "�簢���� ����: " << r.area(width,height);
}