#pragma once
#include "Person.h"

// 파일 무한참조 해결
#ifndef __STUDENT_H__ // if not define:__PERSON_H__가 정의되어 있지 않다면,
#define __STUDENT_H__ // define: __PERSON_H__를 정의한다. endif가 나오기 전 까지의 내용을

class Student : public Person {
	string stu_id;
public:
	~Student();
	void info();
	void test();
};

#endif // !__STUDENT_H__