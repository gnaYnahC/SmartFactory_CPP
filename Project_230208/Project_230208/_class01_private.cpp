// -----접근 제어자----- getter(가져옴) & setter(세팅)
#include <iostream>
#include <string>
using namespace std;

class Cat { 
	string name;
	string breed;
	int age = 0;

public:

	//getter
	string get_name() {
		return name;
	}
	string get_breed() {
		return breed;
	}
	int get_age() {
		return age;
	}

	//setter 
	//세팅만 하고 끝내면 되기 때문에 반환 필요없어서 void
	void set_name(string name) {
		this->name = name;
	}
	void set_breed(string breed) {
		this->breed = breed;
	}
	void set_age(int age) {
		this->age = age;
	}
};

//getter: 변수를 반환해주는 메소드
//setter: 변수를 변경시켜주는 메소드

int main() {

	Cat c; 
	//c.age = 3;
	c.set_age(3);
	c.set_name("안진평");
	c.set_breed("먼치킨");

	//string name = c.name;
	string name = c.get_name();

	//cout << c.name << " " << c.breed << endl;
	cout<< c.get_age()<< " " << c.get_name() << " " << c.get_breed() << "\n";
}