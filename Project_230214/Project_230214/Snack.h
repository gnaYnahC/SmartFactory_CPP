#pragma once
#include <iostream>
#include <string>
//��� ���Ͽ� ����θ� ����
using namespace std;
//using std::string;

// ���� �������� �ذ�
#ifndef __SNACK_H__ // if not define:__PERSON_H__�� ���ǵǾ� ���� �ʴٸ�,
#define __SNACK_H__ // define: __PERSON_H__�� �����Ѵ�. endif�� ������ �� ������ ������

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