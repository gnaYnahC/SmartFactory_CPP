// Ŭ���� ���02
#include <iostream>
using namespace std;

class Person {
protected:
	string name;
	string gender;
	int age;

public:
	Person() {
		cout << "Person �Ϲ� ������ �����. \n";
	}

	Person(string name) {
		this->name = name;
		cout << "Person name ������ �����. \n";
	}

	Person(int age) {

	}
};

class Student : public Person {
	string stu_id;
public:
	Student() : Person("aaa") { //������
		//Person();
		cout << "Student ������ �����. \n";
	}
	Student(string stu_id) { 
		cout << "Student ������ �����. \n";
	}
};


// Person�� Ư¡�� Student�� Ư¡�� ��� ������ ��
class Aaaa :public Student {

	void test() {
		name = "dd";
	}
};



int main() {
	//�ڽ� Ŭ������ ��ü�� ����� �θ� Ŭ������ ��ü�� ���� ����
	//Student s;
	
	Student s;


	return 0;
}