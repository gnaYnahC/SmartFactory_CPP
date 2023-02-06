#include <iostream>
#include <string>

//int main() {
//
//
//	// 실습1 (if문 이용)
//	std::cout << "-------------------실습 1--------------------";
//	std::cout << std::endl;
//	int age;
//	std::cout << "나이를 입력하세요: ";
//	std::cin >> age;
//
//	if (0 <= age && age <= 7) {
//		std::cout << "유아";
//	}
//
//	else if (age <= 13) {
//		std::cout << "딩초";
//	}
//
//	else if (age <= 16) {
//		std::cout << "중학생";
//	}
//
//	else if (age <= 19) {
//		std::cout << "고등학생";
//	}
//
//	else if (age <= 199) {
//		std::cout << "성인";
//	}
//
//	else if (200 <= age) {
//		std::cout << "나이가 너무 많습니다..!";
//	}
//
//	else {
//		std::cout << "잘 못 입력";
//	}
//	std::cout << std::endl;
//
//
//
//	//실습 2
//	std::cout << "-------------------실습 2--------------------";
//	std::cout << std::endl;
//	std::string name;
//	std::cout << "이름을 입력하세요: ";
//	std::cin >> name;
//
//	if (name == "홍길동") {
//		std::cout << "남자";
//	}
//	else if (name == "성춘향") {
//		std::cout << "여자";
//	}
//	else {
//		std::cout << "모르겠어용";
//	}
//	std::cout << std::endl;
//
//
//
//	//실습3
//	std::cout << "-------------------실습 3--------------------";
//	std::cout << std::endl;
//	int a;
//	std::cout << "숫자를 입력하세요: ";
//	std::cin >> a;
//
//	a % 5 == 0 ? std::cout << "5의 배수입니다." : std::cout << "5의 배수가 아닙니다.";
//	std::cout << std::endl;
//
//
//
//	//실습4
//	std::cout << "-------------------실습 4--------------------";
//	std::cout << std::endl;
//	int int1, int2;
//	std::string w;
//	
//	std::cout << "숫자1을 입력하세요: ";
//	std::cin >> int1;
//	std::cout << "숫자2를 입력하세요: ";
//	std::cin >> int2;
//	std::cout << "원하는 계산을 입력하세요 (+, -, *, /): ";
//	std::cin >> w;
//
//	if (w == "+") {
//		std::cout << "값: " << int1 + int2;
//	}
//	else if (w == "-") {
//		std::cout << "값: " << int1 - int2;
//	}
//	else if (w == "*") {
//		std::cout << "값: " << int1 * int2;
//	}
//	else if (w == "/") {
//		std::cout << "몫: " << int1 / int2 << ", 나머지" << int1 % int2;
//	}
//
//
//}