#pragma once
#include "Snack.h"

#ifndef __CHOCOLATE_H__ // if not define:__PERSON_H__�� ���ǵǾ� ���� �ʴٸ�,
#define __CHOCOLATE_H__ // define: __PERSON_H__�� �����Ѵ�. endif�� ������ �� ������ ������

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape);
	void show_info();
};

#endif
