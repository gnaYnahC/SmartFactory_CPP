#include <iostream>
#include <string>

//int main() {
	/*
	if (5 > 3) {
		std::cout << "얍!\n";
	}

	int a;
	std::cout << "숫자를 입력해 주세영: ";
	std::cin >> a;

	if (a < 10) {
		std::cout << "입력한 수가 10보다 작습니다.\n";
	}
	else if (a == 10) {
		std::cout << "10을 입력하셨군요!\n";
	}
	else {
		std::cout << "입력한 수가 10보다 큽니다.\n";
	} */


	////학점 계산기
	//int a;

	//std::cout << "점수를 입력해 주세영: ";
	//std::cin >> a;

	//if (a > 100 || a < 0) {
	//	std::cout << "점수를 잘 못 입력 하셨어용";
	//}
	//else if (a >= 90) {
	//	std::cout << "A학점 입니다~~";
	//}
	//else if (a >= 80) {
	//	std::cout << "B학점 입니다~";
	//}
	//else if (a >= 70) {
	//	std::cout << "C학점 입니다..";
	//}
	//else if (a >= 60) {
	//	std::cout << "D...";
	//}
	//else
	//	std::cout << "F";

	//std::cout << std::endl;


	////중첩 if문
	//std::string userId, userPw;
	//std::string inputId = "user01", inputPw = "1234";
	//std::cout << "아이디를 입력해주세요: ";
	//std::cin >> userId;
	//std::cout << "비밀번호를 입력해주세요: ";
	//std::cin >> userPw;

	//if (userId == inputId) {
	//	if (userPw == inputPw) {
	//		std::cout << "로그인 성공!!\n";
	//	}
	//	else {
	//		std::cout << "비밀번호가 틀렸습니다.\n로그인 실패\n";
	//	}
	//}
	//else {
	//	std::cout << "아이디가 틀렸습니다.\n로그인 실패\n";
	//}
	
	//switch 문
	//int a;
	//std::cout << "점수를 입력해 주세영: ";
	//std::cin >> a;

	/*
	switch (a) {
	case 3:
		std::cout << "3 입력하셨슴다";
		break;

	case 5:
		std::cout << "5 입력하셨슴다";
		break;

	default:
		std::cout << "예상한 수가 아님다.";
		break; //default에선 break가 없어도 된다.
	}
	*/


	//점수환산 프로그램 -> switch문으로
//	char grade;
//
//	switch (a/10) {
//	case 10:
//		std::cout << 'A';
//		grade = 'A';
//		break;
//	case 9:
//		std::cout << 'A';
//		grade = 'A';
//		break;
//	case 8:
//		std::cout << 'B';
//		grade = 'B';
//		break;
//	case 7:
//		std::cout << 'C';
//		grade = 'C';
//		break;
//	case 6:
//		std::cout << 'D';
//		grade = 'D';
//		break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:
//		std::cout << "F";
//		grade = 'F';
//		break;
//	default:
//		std::cout << "잘 못 입력";
//	}
//	std::cout << std::endl;
//	
//	//조건 ? 조건이 참일 때 : 거짓일 때;
//	grade == 'F'||'D' ? std::cout << "재수강 ㅠ" : std::cout << "참 잘했어영~";
//	std::cout << std::endl;
//
//	if (grade == 'F' || grade == 'D') {
//		std::cout << "재수강 ㅠ";
//	}
//	else {
//		std::cout << "참 잘했어영~";
//	}
//	std::cout << std::endl;
//
//
//
//
//	if ((a % 2) == 1) {
//		std::cout << "홀수입니다.";
//	}
//	else {
//		std::cout << "짝수입니다.";
//	}
//	std::cout << std::endl;
//
//	//삼항 연산자
//	a % 2 == 0 ? std::cout << "짝수입니다." : std::cout << "홀수입니다.";
//	std::cout << std::endl;
//
//}