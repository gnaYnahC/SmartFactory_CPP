#pragma once
#include "Snack.h"

#ifndef __CANDY_H__ // if not define:__PERSON_H__�� ���ǵǾ� ���� �ʴٸ�,
#define __CANDY_H__ // define: __PERSON_H__�� �����Ѵ�. endif�� ������ �� ������ ������

class Candy : public Snack {
	string taste;
public:
	Candy(string taste);
	void show_info();
};

#endif