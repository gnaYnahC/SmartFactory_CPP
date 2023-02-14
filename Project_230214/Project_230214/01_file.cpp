#include <vector>
//#include "Person.h" 없어도 있어도 상관 없음 Student헤더가 펄슨헤더를 호출했기 때문에
#include "Student.h"

class Instructor : public Person {
public:
	~Instructor() {
		cout << "강사의 소멸자입니다." << endl;
	}
	void info() {
		cout << "강사입니다." << endl;
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
	p1.set_name("홍길동");

	Person p2;

	cout << Person::get_count() << "명" << endl;

	Person* p3[5];
	for (int i = 0; i < 5; i++) {
		p3[i] = new Person();
	}

	cout << Person::get_count() << "명" << endl;

	for (int i = 0; i < 5; i++) {
		delete p3[i];
	}

	cout << Person::get_count() << "명" << endl;

	std::vector<Person*> persons = { new Person(), new Person() };

	cout << Person::get_count() << "명" << endl;

	persons.push_back(new Person());

	cout << Person::get_count() << "명" << endl;

	cout << persons.size() << "사이즈" << endl;

	int size = persons.size();

	for (int i = 0; i < size; i++) {
		delete persons.at(i);
		// delete persons[i];
	}

	persons.clear();

	cout << Person::get_count() << "명" << endl;

	return 0;
}