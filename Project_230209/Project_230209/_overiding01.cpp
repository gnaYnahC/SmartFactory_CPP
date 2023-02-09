#include <iostream>

using namespace std;

//private > protected > public
class Person {
protected:
	string name;
public:
	Person() {}
	string get_name() {
		return name;
	}
	void print() {
		cout << "Person print \n";
	}
};

class Student : public Person { // 기본값 private
	string stu_id;
public:
	Student() : Person() {}
	void print() {
		cout << "Student print \n";
	}
	using Person::print;//print를 오버라이딩시 매개변수가 다른 나머지 메소드를 사용하겠다는 소리
};


int main() {

	Student s2;
	s2.print(); //자식클래스에 있는 메소드가 우선 실행



	return 0;
}

//오버라이딩 하는 이유: 부모클래스에서 