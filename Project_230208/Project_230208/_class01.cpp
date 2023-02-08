#include <iostream>
#include <string>
using namespace std;

// 절차지향 프로그래밍: 기계 자체가 절차지향적으로 처리하려 하기 때문에 기계와 가깝고 그로인해 기계가 빠르게 처리함, 컴퓨터 속도가 빨라지면서 개발자가 이해하기 쉬운 객체지향 프로그램이 나오기 시작
// 객체지향 프로그래밍: 속도보다 유지보수가 쉬운게 중요해지면서 객체지향 프로그램 언어들이 나타나기 시작

// 지금까진 클래스를 배우지 않아 절차지향 프로그래밍에 가깝게 코드를 작성해왔다.
// C++에선 클래스와 구조체의 차이는 정보은닉이 되냐 안되냐의 차이뿐이라고 생각하는게 편하다.
struct Pos {
	int x;
	int y;

	void eat() {
		cout << "츄르 냠냠!" << endl;
	}

};


class Cat { //Class 사물과 사물이 행동하는 모든 것을 정의한 틀
// 클래스는 기본적으로 정보 은닉(보안)
// 정보은닉을 풀어주는 public
public:
	string name;
	string breed;
	int age = 0;


	//생성자: class로 객체(변수)를 만들 때 바로 실행
	//퍼블릭이 없고 생성자를 변경하지 않았을 때는 defualt값으로 실행
	//생성자를 수정하고 싶을 땐 퍼블릭 안에 있어야 함
	Cat(string name, string breed) {
		this->name = name;
		this->breed = breed;
	}

	//class안에 있는 함수 = 메소드
	void mew() {
		cout << "우는 소리: 야옹" << endl;
	}
	void eat() {
		cout << "좋아하는 음식: 츄르 냠냠!" << endl;
	}
};



int main() {
	// Cat이라는 클래스의 인스턴스를 만듦
	// c는 객체
	// c는 Cat의 인스턴스다.
	//Cat c;
	Cat c("진평이", "먼치킨"); //생성자는 이 순간에 바로 실행이 된다.
	//Cat c = Cat("진평이");

	// public을 사용하여 정보은닉을 품, 이후 구조체와 같은 방법으로 변수 설정
	c.age = 3;

	cout << c.age<<"살 " << c.name << " " << c.breed;
	cout << endl;

	c.mew();
	c.eat();
}