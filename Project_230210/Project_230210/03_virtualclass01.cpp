#include <iostream>

using namespace std;

class Elec { //추상 클래스
public:
	virtual void on() = 0; // 추상메소드
	virtual void off() = 0;
};

class TV : public Elec{
	//부모클래스에서 상속받은 순수가상함수(추상)를 구현하지 않을 경우,
	//자식 클래스 또한 추상클래스가 된다.
	//모든 순수가상함수를 구현 해줘야 한다.

public:
	void on() {
		cout << "TV On" << endl;
	}
	void off() {
		cout << "TV Off" << endl;
	}
	// 일만 메소드가 있어도 추상메소드가 있으면 추상클래스이다.
	void test() {
		cout << "test" << endl;
	}
};

class Radio :public Elec {

public:
	void on() {
		cout << "라디오 On" << endl;
	}
	void off() {
		cout << "라디오 Off" << endl;
	}
};


int main() {
	//추상클래스로는 인스턴스(객체) 생성 불가
	//Elec e;

	//부모클래스에서 상속받은 순수가상함수(추상)를 구현하지 않을 경우,
	//자식 클래스 또한 추상클래스가 된다.
	//TV tv;
	TV tv;
	tv.on();
	tv.off();
	tv.test();

	Radio rd;
	rd.on();
	rd.off();


}