// 클래스 상속02
#include <iostream>
using namespace std;

class Person {
protected:
	string name;
	string gender;
	int age;

public:
	Person() {
		cout << "Person 일반 생성자 실행됨. \n";
	}

	Person(string name) {
		this->name = name;
		cout << "Person name 생성자 실행됨. \n";
	}

	Person(int age) {

	}
};

class Student : public Person {
	string stu_id;
public:
	Student() : Person("aaa") { //생성자
		//Person();
		cout << "Student 생성자 실행됨. \n";
	}
	Student(string stu_id) { 
		cout << "Student 생성자 실행됨. \n";
	}
};


// Person의 특징과 Student의 특징을 모두 가지게 됨
class Aaaa :public Student {

	void test() {
		name = "dd";
	}
};



int main() {
	//자식 클래스로 객체를 만들면 부모 클래스의 객체를 먼저 실행
	//Student s;
	
	Student s;


	return 0;
}