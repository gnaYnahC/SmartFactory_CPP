#include <iostream>
#include <string>


//grade라는 배열을 선언하고 , 학생 5인의 성적 입력받기
//for문 혹은 for-each문을 활용하여 학생 5인의 성적 평균 구하기
int main() {

	std::string students[] = { "짱구", "맹구", "철수", "훈이", "유리" };

	double grade[5];
	double sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << students[i] << "의 성적: ";
		std::cin >> grade[i];
		sum = sum + grade[i];
	}

	std::cout << "떡잎유치원 평균 성적" << sum / 5;

}