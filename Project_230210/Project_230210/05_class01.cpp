#include <iostream>

using namespace std;

//�ʵ�(����), �޼ҵ�(�Լ�), ������(�޼ҵ��� ����), �Ҹ���(�޼ҵ��� ����)

//�Ҹ���
class Person {
	int age;
	string name;
	int* p = new int[3];

public:
	Person() { //������
		cout << "������ ���� \n";
	}
	Person(string name) { //������
		cout << "������ name ���� \n";
	}
	void test() { // �޼ҵ�
		cout << "test ���� \n";
	}
	~Person() {// �Ҹ���: ��ü�� ������ ��ŭ ����
		delete[] p;
		cout << "�Ҹ��� ���� \n";
	}
};

class Student : public Person {
public:
	~Student() {// �Ҹ���: ��ü�� ������ ��ŭ ����
		cout << "��Ʃ��Ʈ �Ҹ��� ���� \n";
	}
 };

int main() {
	Person p("¯��");
	p.test();

	Person p1;
	p1.test();
	//p.~Person();//��������� ȣ��
	//p1.~Person();//��������� ȣ��


	//������ ������ ��쿣 ��������� ȣ���� ����� �Ѵ�.
	Person* p2 = new Person();
	delete p2;

	//Student�Ҹ��� ���� �� Student�� ��ӹ��� �Ҹ��ڵ� ����
	Student s;
}