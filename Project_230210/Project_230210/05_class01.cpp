#include <iostream>

using namespace std;

//필드(변수), 메소드(함수), 생성자(메소드의 일종), 소멸자(메소드의 일종)

//소멸자
class Person {
	int age;
	string name;
	int* p = new int[3];

public:
	Person() { //생성자
		cout << "생성자 실행 \n";
	}
	Person(string name) { //생성자
		cout << "생성자 name 실행 \n";
	}
	void test() { // 메소드
		cout << "test 실행 \n";
	}
	~Person() {// 소멸자: 객체가 생성된 만큼 실행
		delete[] p;
		cout << "소멸자 실행 \n";
	}
};

class Student : public Person {
public:
	~Student() {// 소멸자: 객체가 생성된 만큼 실행
		cout << "스튜던트 소멸자 실행 \n";
	}
 };

int main() {
	Person p("짱구");
	p.test();

	Person p1;
	p1.test();
	//p.~Person();//명시적으로 호출
	//p1.~Person();//명시적으로 호출


	//포인터 문법의 경우엔 명시적으로 호출을 해줘야 한다.
	Person* p2 = new Person();
	delete p2;

	//Student소멸자 실행 후 Student에 상속받은 소멸자도 실행
	Student s;
}