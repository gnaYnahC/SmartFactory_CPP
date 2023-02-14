#include "Person.h" // 헤더파일(외부에서) 불러오기


// 1. 헤더파일에 선언해두었기 때문에 virtual, static등 필요없음
// 2. 모든 함수명 앞에 "클래스명::" 붙이기
// 3. 함수 정의하기

int Person::count = 0;

void Person::static_method() {
	cout << "스태틱 메소드 테스트" << endl;
}
int Person::get_count() {
	return count;
}
Person::Person() {
	this->name = "아무개";
	count++;
}
Person::~Person() {
	cout << "사람의 소멸자입니다." << endl;
	count--;
}
void Person::info() {
	cout << "사람입니다." << endl;
}
void Person::set_name(string name) {
	this->name = name;
}
string Person::get_name() {
	return name;
}