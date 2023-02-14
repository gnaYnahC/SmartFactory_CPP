#include <iostream>
using namespace std;

class Person {
protected:
	string name;
public:
	virtual void info() { //가상 함수
		cout << "사람입니다~\n";
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
	~Student() {
		cout << "학생의 소멸자 입니다.\n";
	}
};

class Instructor : public Person {
private:
	string stu_id;
public:
	void info() {
		cout << "강사입니다~\n";
	}
	~Instructor() {
		cout << "강사의 소멸자 입니다.\n";
	}
};

int main() {
	//자식클래스를 부모클래스에 담은걸 "업캐스팅"이라고 한다.
	//Person s = Student();
	
	//포인터 배열
	Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
	for (int i = 0; i < 3; i++) {
		per_arr[i]->info();
	}

	//배열에 대한 동적메모리 해제
	for (int j = 0; j < 3; j++) {
		delete per_arr[j];
	}

	//배열 자체를 포인터로 담고있는 경우 해제방법
	//int* po = new int[3];
	//delete[] po;

	return 0;
}