#include <iostream>
using namespace std;

class Person {
protected:
	string name;
public:
	Person(){//������
		this->name = "�ƹ���";
	}
	virtual ~Person() {
		cout << "����� �Ҹ����Դϴ�." << endl;
	}
	virtual void info() {
		cout << "����Դϴ�." << endl;
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
		cout << "�л��� �Ҹ����Դϴ�." << endl;
	}
	void info() {
		cout << "�л��Դϴ�." << endl;
	}
	void test() {
		cout << "�л��� test �Լ�" << endl;
	}
};

class Instructor : public Person {
public:
	~Instructor() {
		cout << "������ �Ҹ����Դϴ�." << endl;
	}
	void info() {
		cout << "�����Դϴ�." << endl;
	}
};

int main() {
	//��ĳ����
	Person* p = new Student();
	cout << p->get_name() << endl;
	//p->test(); �Ұ���

	//�ٿ�ĳ����
	Student* s = (Student*)p;
	s->test(); //��������
	p->set_name("�浿��"); 
	cout << p->get_name() << " " << s->get_name() << endl;
	s->set_name("������"); 
	cout << p->get_name() << " " << s->get_name() << endl;

	Student& s1 = *(Student*)p; // �ٿ�ĳ����: Student*�̶�� �ּҷ� p�� ����ȯ
	s1.set_name("�ڵ�"); 
	cout << p->get_name() << " " << s1.get_name() << endl;

	Student s2 = *(Student*)p; // ����X , p�� ���� ����
	s2.set_name("�ھ�"); 
	cout << p->get_name() << " " << s2.get_name() << endl;

	//s������ �ϰ� ���� �ݳ�
	delete p;



	//�����ͺ���, �������� ����
	int a = 1;
	int k = 2;
	int& b = a; // ���������� ������ ���� �� (b�� a�� �ּҰ��� ����, a�� ������ b�̴�.)
	int* c = &a; // ������!!(�����ϴ� �ּҸ� �ٲ� �� ����)

	cout << a << " " << b << " " << *c << endl; // 1 1 1
	b = k;

	cout << a << " " << b << " " << *c << endl; // 2 2 2
	a = 3;
	cout << a << " " << b << " " << *c << endl; // 3 3 3

	c = &k; // c���� k�� �ּҰ��� ����, c�� ���̻� a�� �������� ����
	k = 4;
	cout << a << " " << b << " " << *c << endl; // 3 3 4
}