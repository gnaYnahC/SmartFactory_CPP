# include <iostream>
using namespace std;

class Student {
protected:
	string name;
	string school;
	string stu_id;
	int age;

public:
	void lunch() {
		cout << "������ �н�~~ \n";
	}
};


class Sin : public Student {
public:
	Sin() {
		this->school = "������ġ��";
		this->stu_id = "190119";
		this->age = 5;
	}

	void lunch(string name) {
		cout << "�̸�: " << name << endl << "�б�: " << school << endl
			<< "�й�: " << stu_id << endl << "����: " << age << endl << "������ ���ڽ���!! \n";
	}
};


class Kim : public Student {
public:
	Kim() {
		this->school = "������ġ��";
		this->stu_id = "191019";
		this->age = 5;
	}

	void lunch(string name) {
		cout << "�̸�: " << name << endl << "�б�: " << school << endl 
			<< "�й�: "<< stu_id <<endl << "����: " << age << endl << "������ ���ö�!! \n";
	}
};


int main() {
	string name;

	Sin a;
	Kim k;

	cout << "�̸� �Է�: ";
	cin >> name;

	if (name == "��ö��") {
		k.lunch(name);
	}
	else if (name == "��¯��") {
		a.lunch(name);
	}
}