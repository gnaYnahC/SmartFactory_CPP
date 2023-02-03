#include <iostream>
#include <string>


//grade라는 배열을 선언하고 , 학생 5인의 성적 입력받기
//for문 혹은 for-each문을 활용하여 학생 5인의 성적 평균 구하기
int main() {

	//double grade[5] = { 0, 0, 0, 0 };


	//std::cout << "짱구의 성적: ";
	//std::cin >> grade[0];
	//std::cout << "철수의 성적: ";
	//std::cin >> grade[1];
	//std::cout << "맹구의 성적: ";
	//std::cin >> grade[2];
	//std::cout << "유리의 성적: ";
	//std::cin >> grade[3];
	//std::cout << "훈이의 성적: ";
	//std::cin >> grade[4];

	//std::cout << "떡잎유치원 평균 성적: " << (grade[0] + grade[1] + grade[2] + grade[3] + grade[4])/5 ;

	double grade[5];
	double sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "번 학생의 성적: ";
		std::cin >> grade[i];
		sum = sum + grade[i];
	}

	std::cout << "평균 성적" << sum / 5;

}