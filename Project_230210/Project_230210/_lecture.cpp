#include <iostream>

using namespace std;


class Person {
protected:
	string name;
	string position;

public:
	 void test() {
		cout << "Person Ŭ������ �׽�Ʈ �Լ��Դϴ�. \n";
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
		cout << "Student Ŭ������ �׽�Ʈ �Լ��Դϴ�. \n";
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
	Person p = Person(); //������ ȣ��
	//p.test();

	//�տ� �ִ� Ŭ������ �����ڸ� �ҷ��� �� �ִ�.
	//Person p2 = Student(); //�θ�Ŭ������ �ڽ�Ŭ������ �ν��Ͻ��� ȣ��(Person �� ����鸸 ������ �� ����)
	//p2.test();
	//p2.aaa(); student�� �ִ� �޼ҵ带 �ҷ����� ����

	Person p3[4] = { Instructor("���̸� ��"), Student("¯��"),Student("ö��") ,Student("�ͱ�") };
	for (int i = 0; i < 4; i++) {
		cout << p3[i].get_position() << endl;
	}
}