#pragma once
#include "Snack.h"

#ifndef __CANDY_H__ // if not define:__PERSON_H__가 정의되어 있지 않다면,
#define __CANDY_H__ // define: __PERSON_H__를 정의한다. endif가 나오기 전 까지의 내용을

class Candy : public Snack {
	string taste;
public:
	Candy(string taste);
	void show_info();
};

#endif