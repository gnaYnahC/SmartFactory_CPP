//Ŭ���� ���01
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
		cout << "���ϱ�\n";
	}
	void eat() {
		cout << "�Ա�\n";
	}
	void sleep() {
		cout << "���ڱ�\n";
	}
};

class Student: public Person { // ���� �ܰ踦 �������� �ƹ��͵� ���� ���� ��� private�� default���̴�
	string stu_id;
public:
	void study() {
		cout << "�����ϱ�\n";
	}
	void test() {
		name = "�л�1";
		age = 20;
		// gender = "����";
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
	//s.name = "ȫ�浿"; // Person ������ protected ���������ڷ� ����. 
	// Person�� Person�� ��� ���� Student Ŭ���� �������� ������ ������
	s.set_name("������");
	s.age = 21;
	cout << s.get_name();
	return 0;
}