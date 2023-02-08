#include <iostream>
using namespace std;

struct Rectangle {
	double width;
	double height;
};

int main() {
	Rectangle R;
	R.width;
	R.height;

	cout << "가로의 길이를 입력하세요: ";
	cin >> R.width;
	cout << "세로의 길이를 입력하세요: ";
	cin >> R.height;

	cout << "사각형의 넓이는: "<< R.width*R.height ;
}