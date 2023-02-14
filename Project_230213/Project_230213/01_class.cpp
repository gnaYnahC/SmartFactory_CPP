#include <iostream>
using namespace std;

class Person {
protected:
	string name;
public:
	virtual void info() { //���� �Լ�
		cout << "����Դϴ�~\n";
	}
	virtual void test() {
		cout << "����� test �޼ҵ�! \n";
	}
	virtual ~Person() { //�Ҹ��ڵ� �����Լ��� ������ ���� Student���� ������ ����ٰ� �����ϸ� �����ϱ� ���ϴ�
		cout << "����� �Ҹ��� �Դϴ�.\n";
	}
};

class Student : public Person {
private:
	string stu_id;
public:
	void info() {
		cout << "�л��Դϴ�~\n";
	}
	void test() {
		cout << "�л��� test �޼ҵ�! \n";
	}
	~Student() {
		cout << "�л��� �Ҹ��� �Դϴ�.\n";
	}
};

int main() {

	//Person s = Student(); //�ڽ�Ŭ������ �θ�Ŭ������ �ڷ������� ���� ����
	//s.test(); //���� ���ε�

	Person s = Student();
	s.info(); // �θ�Ŭ���� info����

	//�����ͷ� ��ü ����� ���� ���ε� ��� ��������
	// ���ÿ���
	Person* s1 = new Student();//���� �޸� ����
	s1->info(); // ���� ���ε�, �ڽ�Ŭ����(Student) info����
	s1->test(); // Person�� test�޼ҵ尡 �����ٸ�, Person�� ���� ������� ������ �� ����
	//�� �ٸ� ȣ���
	(*s1).info(); // ss = �ּҰ�, *ss = ss�� ��� ��
	delete s1;

	//�Ǵٸ� ���(�����޸𸮷� ����� �ƴ�)
	// �� ����
	Student stu;//��ü ����
	Person* s2 = &stu; //�ּҿ� ���� ����ֱ⸸ ��
	s2->info(); // ���� ���ε�
	//delete s2 ������. ���� ������ ���� �߻�(RunTime error)
	

	//Person pers[2] = { Student(), Student() };
	return 0;
}