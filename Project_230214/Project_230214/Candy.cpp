#include "Candy.h"


Candy::Candy(string taste) {
	this->taste = taste;
	this->name = "����";
}

void Candy::show_info() {
	cout << taste << "�� " << name << endl;
}
