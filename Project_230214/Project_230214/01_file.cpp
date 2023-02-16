#include <vector>
//#include "Person.h" ��� �־ ��� ���� Student����� �޽������ ȣ���߱� ������
#include "Student.h"

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
	Student s;

	Person::static_method();
	cout << Person::get_count() << endl;

	Person p;
	p.info();
	p.static_method();

	Person p1;
	p1.set_name("ȫ�浿");

	Person p2;

	cout << Person::get_count() << "��" << endl;

	Person* p3[5];
	for (int i = 0; i < 5; i++) {
		p3[i] = new Person();
	}

	cout << Person::get_count() << "��" << endl;

	for (int i = 0; i < 5; i++) {
		delete p3[i];
	}

	cout << Person::get_count() << "��" << endl;

	std::vector<Person*> persons = { new Person(), new Person() };

	cout << Person::get_count() << "��" << endl;

	persons.push_back(new Person());

	cout << Person::get_count() << "��" << endl;

	cout << persons.size() << "������" << endl;

	int size = persons.size();

	for (int i = 0; i < size; i++) {
		delete persons.at(i);
		// delete persons[i];
	}

	persons.clear();

	cout << Person::get_count() << "��" << endl;

	return 0;
}