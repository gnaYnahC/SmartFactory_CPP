//클래스 상속01
#include <iostream>

using namespace std;

class Person {
protected:
	string name;
private:
	string gender;
public:
	int age;
	void talk() {
		cout << "말하기\n";
	}
	void eat() {
		cout << "먹기\n";
	}
	void sleep() {
		cout << "잠자기\n";
	}
};

class Student: public Person { // 보안 단계를 지정해줌 아무것도 쓰지 않을 경우 private이 default값이다
	string stu_id;
public:
	void study() {
		cout << "공부하기\n";
	}
	void test() {
		name = "학생1";
		age = 20;
		// gender = "여자";
	}
	void set_name(string name) {
		this->name = name;
	}
	string get_name() {
		return name;
	}
};


int main() {
	Student s;
	//s.name = "홍길동"; // Person 내에서 protected 접근제어자로 지정. 
	// Person과 Person을 상속 받은 Student 클래스 내에서만 접근이 가능함
	s.set_name("성춘향");
	s.age = 21;
	cout << s.get_name();
	return 0;
}