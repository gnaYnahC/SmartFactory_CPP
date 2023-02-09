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

class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person() {}
	void print() {
		cout << "Student print \n";
	}
	using Person::print;//print�� �������̵��� �Ű������� �ٸ� ������ �޼ҵ带 ����ϰڴٴ� �Ҹ�
};


int main() {

	Student s2;
	s2.print(); //�ڽ�Ŭ������ �ִ� �޼ҵ尡 �켱 ����



	return 0;
}

//�������̵� �ϴ� ����: �θ�Ŭ�������� 