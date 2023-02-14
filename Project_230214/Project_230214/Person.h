#pragma once
#include <iostream>
//헤더 파일엔 선언부만 남김
using namespace std;

// 파일 무한참조 해결
#ifndef __PERSON_H__ // if not define:__PERSON_H__가 정의되어 있지 않다면,
#define __PERSON_H__ // define: __PERSON_H__를 정의한다. endif가 나오기 전 까지의 내용을

class Person { // Person클래스 정의
protected:
	string name; //선언부
	static int count; //선언부
public:
	//함수의 원형만 남김
	static void static_method();
	static int get_count();
	Person();
	virtual ~Person();
	virtual void info();
	void set_name(string name);
	string get_name();
};

#endif // !__PERSON_H__