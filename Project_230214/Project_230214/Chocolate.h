#pragma once
#include "Snack.h"

#ifndef __CHOCOLATE_H__ // if not define:__PERSON_H__가 정의되어 있지 않다면,
#define __CHOCOLATE_H__ // define: __PERSON_H__를 정의한다. endif가 나오기 전 까지의 내용을

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape);
	void show_info();
};

#endif
