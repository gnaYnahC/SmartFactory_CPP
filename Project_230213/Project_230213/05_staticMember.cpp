#include <iostream>
#include <vector>
using namespace std;

//멤버: 필드 속성 메소드 등 클래스에 속하는 모든 것
//static변수와 함수가 있다.
//모든 static멤버는 모든 객체가 하나의 공간을 공유한다.
//name은 static멤버 X => 객체별로 공간이 따로 할당됨
//static_var는 static멤버 O => 모든 객체가 같은 공간을 공유
class Person {
protected:
	string name;
	static int static_var; // 스태틱변수 선언
	static int count; // 스태틱변수 선언
public:
	static void static_mathod() { //스태틱 메소드 선언, 상속의 개념X, 일반클래스에 대한 개념
		//name = "아무개"; name 객체 사용X
		cout << "스태틱 메소드입니다." << endl;
	}
	static int get_count() { // static 게터
		return count;
	}
	Person() {//생성자: 객체 생성시 실행
		this->name = "아무개";
		count++;
	}
	~Person() {//생성자: 객체 생성시 실행
		this->name = "아무개";
		count--;
	}
};

int Person::count = 0; // static변수는 할당을 처음에 해줘야함

int main() {
//클래스에는 속하지만, 객체 별로 할당되지 않고 클래스의 모든 객체가 공유하는 멤버
//객체와 독립적 => 객체를 생성하지 않아도 접근 가능
//정적 메소드 안에서는 일반 멤버에 접근할 수 없음! (static 멤버에만 접근 가능)
	
	//static은 두가지 방법 다 가능
	Person::static_mathod(); // 클래스를 타고 확인 가능.
	
	Person p;
	p.static_mathod(); // 객체를 타고 확인 가능

	Person p1;

	cout << Person::get_count() << "명 " << endl;
	// 2명

	Person* p3[5];
	for (int i = 0; i < 5; i++) {
		p3[i] = new Person();
	}
	cout << Person::get_count()<< "명 " << endl;
	// 7명

	for (int i = 0; i < 5; i++) {
		delete p3[i];
	}
	cout << Person::get_count() << "명 " << endl;
	// 2명

	//vector 활용
	vector<Person*> people = { new Person(), new Person()};
	cout << Person::get_count() << "명 " << endl;

	people.push_back(new Person()); // 한놈 추가
	cout << Person::get_count() << "명 " << endl;
	
	int size = people.size();
	for (int i = 0; i < size; i++) {
		delete people.at(i);
	}
	for (int i = 0; i < size; i++) {
		people.pop_back();
	}
	cout << Person::get_count() << "명 " << endl;
}