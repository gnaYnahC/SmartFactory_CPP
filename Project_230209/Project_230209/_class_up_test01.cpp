#include <iostream>

using namespace std;
// a = 변의개수
// b = 밑변의 길이
// c = 세로 길이
// d = 높이
class Shape {
protected:
	int a;
	double b;

public:

	void printlnfo() {
			cout<<"변의 개수: " << a << "개 " << b << "cm \n";

	}
};

//사각형 넓이
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

//삼각형 넓이
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
	// 사용자로부터 width, height 입력 받음
	cout << "변의 개수: ";
	cin >> a;

	if(a==4){
		cout << "사각형의 밑변 길이: ";
		cin >> b;
		cout << "사각형의 세로 길이: ";
		cin >> c;

		// 객체 생성
		Rectangle rect(b, c);

		// 사각형의 넓이 출력
		cout << "사각형의 넓이: " << rect.area() << endl;

		rect.printlnfo();
	}
	else if(a==3){
		cout << "삼각형의 밑변 길이: ";
		cin >> b;
		cout << "삼각형의 높이: ";
		cin >> d;

		Triangle tri(b, d);

		// 삼각형의 넓이 출력
		cout << "삼각형의 넓이: " << tri.area() << endl;
		tri.printlnfo();
	}
	else {
		cout << "변의 개수 잘 못 입력";
	}
}