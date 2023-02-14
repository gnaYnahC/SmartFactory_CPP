#pragma once
#include <iostream>
//��� ���Ͽ� ����θ� ����
using namespace std;

// ���� �������� �ذ�
#ifndef __PERSON_H__ // if not define:__PERSON_H__�� ���ǵǾ� ���� �ʴٸ�,
#define __PERSON_H__ // define: __PERSON_H__�� �����Ѵ�. endif�� ������ �� ������ ������

class Person { // PersonŬ���� ����
protected:
	string name; //�����
	static int count; //�����
public:
	//�Լ��� ������ ����
	static void static_method();
	static int get_count();
	Person();
	virtual ~Person();
	virtual void info();
	void set_name(string name);
	string get_name();
};

#endif // !__PERSON_H__