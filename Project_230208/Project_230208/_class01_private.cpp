// -----���� ������----- getter(������) & setter(����)
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
	//���ø� �ϰ� ������ �Ǳ� ������ ��ȯ �ʿ��� void
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

//getter: ������ ��ȯ���ִ� �޼ҵ�
//setter: ������ ��������ִ� �޼ҵ�

int main() {

	Cat c; 
	//c.age = 3;
	c.set_age(3);
	c.set_name("������");
	c.set_breed("��ġŲ");

	//string name = c.name;
	string name = c.get_name();

	//cout << c.name << " " << c.breed << endl;
	cout<< c.get_age()<< " " << c.get_name() << " " << c.get_breed() << "\n";
}