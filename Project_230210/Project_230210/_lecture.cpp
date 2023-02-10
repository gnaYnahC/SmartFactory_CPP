#include <iostream>

using namespace std;


class Person {
protected:
	string name;
	string position;

public:
	 void test() {
		cout << "Person 클래스의 테스트 함수입니다. \n";
	}

	 //getter
	 string get_position() {
		 return position;
	 }

	 //void get_position2() {
		// cout << position;
	 //}
};

class Student: public Person {
	string stu_id;
	
public:
	Student(string position) {
		this->position = position;
	}
	void aaa() {}
	void test() {
		cout << "Student 클래스의 테스트 함수입니다. \n";
	}
};

class Instructor : public Person {
public:
	Instructor(string position) {
		this->position = position;
	}
};



int main() {
	//Person p;
	Person p = Person(); //생성자 호출
	//p.test();

	//앞에 있는 클래스의 생성자만 불러올 수 있다.
	//Person p2 = Student(); //부모클래스로 자식클래스의 인스턴스를 호출(Person 의 멤버들만 가져올 수 있음)
	//p2.test();
	//p2.aaa(); student의 있는 메소드를 불러오지 못함

	Person p3[4] = { Instructor("나미리 쌤"), Student("짱구"),Student("철수") ,Student("맹구") };
	for (int i = 0; i < 4; i++) {
		cout << p3[i].get_position() << endl;
	}
}