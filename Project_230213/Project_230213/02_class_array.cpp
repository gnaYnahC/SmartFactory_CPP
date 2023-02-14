#include <iostream>
using namespace std;

class Person {
protected:
	string name;
public:
	virtual void info() { //���� �Լ�
		cout << "����Դϴ�~\n";
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
	~Student() {
		cout << "�л��� �Ҹ��� �Դϴ�.\n";
	}
};

class Instructor : public Person {
private:
	string stu_id;
public:
	void info() {
		cout << "�����Դϴ�~\n";
	}
	~Instructor() {
		cout << "������ �Ҹ��� �Դϴ�.\n";
	}
};

int main() {
	//�ڽ�Ŭ������ �θ�Ŭ������ ������ "��ĳ����"�̶�� �Ѵ�.
	//Person s = Student();
	
	//������ �迭
	Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
	for (int i = 0; i < 3; i++) {
		per_arr[i]->info();
	}

	//�迭�� ���� �����޸� ����
	for (int j = 0; j < 3; j++) {
		delete per_arr[j];
	}

	//�迭 ��ü�� �����ͷ� ����ִ� ��� �������
	//int* po = new int[3];
	//delete[] po;

	return 0;
}