#include <iostream>

//(1) 몇명의 학생 성적 평균을 구할 지 입력 받기
//(2) 입력받은 학생 수 만큼 성적을 입력받기
//(3) 학생들의 성적 평균 산출하기
//input
//학생의 수를 입력하세요 : 3
//1번째 학생의 성적을 입력하세요 : 10
//2번째 학생의 성적을 입력하세요 : 20
//3번째 학생의 성적을 입력하세요 : 30
//output
//평균 : ? ? ? ?

int main() {
	int stu;
	double sum = 0;

	std::cout << "학생의 수를 입력하세요: ";
	std::cin >> stu;

	int* students = new int[stu];
	for (int i = 0; i < stu; i++) {
		std::cout << i+1 << "의 성적: ";
		std::cin >> students[i];
		sum = students[i] + sum;
	}

	std::cout << "\n";
}