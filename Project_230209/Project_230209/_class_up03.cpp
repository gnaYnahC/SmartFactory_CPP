//���03
#include <iostream>

using namespace std;

//private > protected > public
class Person {
protected:
	string name;
public:
	Person(string name) {
		this->name = name;
	}
	string get_name() {

		return name;
	}
};

class Student : public Person { // �⺻�� private
	string stu_id;
public:
	Student() : Person("aaaa") {
		cout << "Student ������ �����.\n";
		this->name = "ȫ�浿";
	}
	Student(string name, string stu_id) : Person(name) {
		this->stu_id = stu_id;
	}
	Student(string name) : Person("ccccc") {  }
	Student(int a) : Person("bbbb") {  }
};


int main() {	
	Student s("ȫ�浿", "1111111"); // ȫ�浿
	Student s2;
	cout << s2.get_name(); // ȫ�浿
	Student s3(1); // bbbb
	Student s4("������"); // ccccc

	return 0;
}