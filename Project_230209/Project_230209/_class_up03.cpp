//»ó¼Ó03
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

class Student : public Person { // ±âº»°ª private
	string stu_id;
public:
	Student() : Person("aaaa") {
		cout << "Student »ý¼ºÀÚ ½ÇÇàµÊ.\n";
		this->name = "È«±æµ¿";
	}
	Student(string name, string stu_id) : Person(name) {
		this->stu_id = stu_id;
	}
	Student(string name) : Person("ccccc") {  }
	Student(int a) : Person("bbbb") {  }
};


int main() {	
	Student s("È«±æµ¿", "1111111"); // È«±æµ¿
	Student s2;
	cout << s2.get_name(); // È«±æµ¿
	Student s3(1); // bbbb
	Student s4("¼ºÃáÇâ"); // ccccc

	return 0;
}