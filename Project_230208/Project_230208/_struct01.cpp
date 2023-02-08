//구조체

#include <iostream>
using namespace std;

struct Position {
	int x;
	int y;
};

int main() {
	Position p; // 구조체 변수 지정
	p.x = 3; // 할당
	p.y = 4; // 할당

	Position p1; // 여러번 변수 지정 가능
	p1.x = 5; // p의 x와 다름
	p1.y = 7;

	Position p2;

	//구조체 변수 지정과 할당을 한번에 하는 방법
	//Position p = { 3, 4 };




	//cout << p << endl; //안됩니다!
	cout << p.x << " " << p.y << endl;
	cout << p1.x << " " << p1.y << endl;
	cout << p2.x << " " << p2.y << endl;
}