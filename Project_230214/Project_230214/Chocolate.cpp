#include "Chocolate.h"

Chocolate::Chocolate(string shape) {
	this->shape = shape;
	this->name = "���ݸ�";
}

void Chocolate::show_info() {
	cout << shape << "��� " << name << endl;
}