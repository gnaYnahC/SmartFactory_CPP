#include <iostream>
using namespace std;

class Person {
protected:
	string name;
public:
	Person(){//생성자
		this->name = "아무개";
	}
	virtual ~Person() {
		cout << "사람의 소멸자입니다." << endl;
	}
	virtual void info() {
		cout << "사람입니다." << endl;
	}
	void set_name(string name) {
		this->name = name;
	}
	string get_name() {
		return name;
	}
};

class Student : public Person {
	string stu_id;
public:
	~Student() {
		cout << "학생의 소멸자입니다." << endl;
	}
	void info() {
		cout << "학생입니다." << endl;
	}
	void test() {
		cout << "학생의 test 함수" << endl;
	}
};

class Instructor : public Person {
public:
	~Instructor() {
		cout << "강사의 소멸자입니다." << endl;
	}
	void info() {
		cout << "강사입니다." << endl;
	}
};

int main() {
	//업캐스팅
	Person* p = new Student();
	cout << p->get_name() << endl;
	//p->test(); 불가능

	//다운캐스팅
	Student* s = (Student*)p;
	s->test(); //가능해짐
	p->set_name("길동이"); 
	cout << p->get_name() << " " << s->get_name() << endl;
	s->set_name("춘향이"); 
	cout << p->get_name() << " " << s->get_name() << endl;

	Student& s1 = *(Student*)p; // 다운캐스팅: Student*이라는 주소로 p를 형변환
	s1.set_name("코디"); 
	cout << p->get_name() << " " << s1.get_name() << endl;

	Student s2 = *(Student*)p; // 참조X , p의 값을 대입
	s2.set_name("코양"); 
	cout << p->get_name() << " " << s2.get_name() << endl;

	//s사용까지 하고 나서 반납
	delete p;



	//포인터변수, 참조변수 예시
	int a = 1;
	int k = 2;
	int& b = a; // 참조변수를 선언할 때는 값 (b가 a의 주소값을 참조, a의 별명은 b이다.)
	int* c = &a; // 포인터!!(참조하는 주소를 바꿀 수 있음)

	cout << a << " " << b << " " << *c << endl; // 1 1 1
	b = k;

	cout << a << " " << b << " " << *c << endl; // 2 2 2
	a = 3;
	cout << a << " " << b << " " << *c << endl; // 3 3 3

	c = &k; // c에는 k의 주소값을 넣음, c는 더이상 a를 참조하지 않음
	k = 4;
	cout << a << " " << b << " " << *c << endl; // 3 3 4
}