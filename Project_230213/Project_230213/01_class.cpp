#include <iostream>
using namespace std;

class Person {
protected:
	string name;
public:
	virtual void info() { //가상 함수
		cout << "사람입니다~\n";
	}
	virtual void test() {
		cout << "사람의 test 메소드! \n";
	}
	virtual ~Person() { //소멸자도 가상함수의 개념을 따라 Student에서 재정의 해줬다고 생각하면 이해하기 편하당
		cout << "사람의 소멸자 입니다.\n";
	}
};

class Student : public Person {
private:
	string stu_id;
public:
	void info() {
		cout << "학생입니다~\n";
	}
	void test() {
		cout << "학생의 test 메소드! \n";
	}
	~Student() {
		cout << "학생의 소멸자 입니다.\n";
	}
};

int main() {

	//Person s = Student(); //자식클래스가 부모클래스의 자료형으로 선언 가능
	//s.test(); //정적 바인드

	Person s = Student();
	s.info(); // 부모클래스 info실행

	//포인터로 객체 선언시 동적 바인딩 사용 가능해짐
	// 스택영역
	Person* s1 = new Student();//동적 메모리 선언
	s1->info(); // 동적 바인딩, 자식클래스(Student) info실행
	s1->test(); // Person에 test메소드가 없었다면, Person에 없는 멤버에는 접근할 수 없음
	//또 다른 호출법
	(*s1).info(); // ss = 주소값, *ss = ss에 담긴 값
	delete s1;

	//또다른 방법(동적메모리로 만든게 아님)
	// 힙 영역
	Student stu;//객체 생성
	Person* s2 = &stu; //주소에 값을 담아주기만 함
	s2->info(); // 동적 바인딩
	//delete s2 사용안함. 사용시 실행중 오류 발생(RunTime error)
	

	//Person pers[2] = { Student(), Student() };
	return 0;
}