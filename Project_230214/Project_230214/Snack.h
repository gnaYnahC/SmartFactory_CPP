#pragma once
#include <iostream>
#include <string>
//헤더 파일엔 선언부만 남김
using namespace std;
//using std::string;

// 파일 무한참조 해결
#ifndef __SNACK_H__ // if not define:__PERSON_H__가 정의되어 있지 않다면,
#define __SNACK_H__ // define: __PERSON_H__를 정의한다. endif가 나오기 전 까지의 내용을

class Snack {
protected:
	string name;
	static int count;
public:
	Snack();
	static int get_count();
	virtual void show_info();
};

#endif