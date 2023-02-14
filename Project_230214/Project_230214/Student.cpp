#include "Student.h" // 헤더파일(외부에서) 불러오기


Student::~Student() {
	cout << "학생의 소멸자입니다." << endl;
}
void Student::info() {
	cout << "학생입니다." << endl;
}
void Student::test() {
	cout << "학생의 test 함수" << endl;
}

