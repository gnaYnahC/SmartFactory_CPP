#include <iostream>


//int main() {

	//// -----------------1~9단---------------------

	//for (int i = 1; i <= 9; i++) {
	//	std::cout << "----- " << i << "단 -----";
	//	std::cout << std::endl;
	//	for (int j = 1; j <= 9; j++) {
	//		std::cout << i << " * " << j << " = " << i * j;
	//		std::cout << std::endl;
	//	}
	//}


	//// -------------1부터 n까지의 합 for문 -------------------

	//int i, j;
	//std::cout << "숫자 양의 정수를 입력하세요: ";
	//std::cin >> j;
	//std::cout << std::endl;
	//std::cout << "1부터" << j << "까지의 핪은";
	//for (i = j; j > 0; --j) {
	//	i = (j - 1) + i ;
	//}
	//std::cout << i << "이다.";


	// //--------------------while문 1~9단------------------

	//int i = 1;
	//int j = 0;

	//while (i != 10) {
	//	std::cout << "----- " << i << "단 -----" << "\n";
	//	while (j != 9) {
	//		std::cout << i << "*" << j << "=" << i * ++j << "\n";
	//	}
	//	i++;
	//	j = 0;
	//}



	//// -----------------while문 1부터 n까지의 합---------------
	//int i;
	//std::cout << "숫자 양의 정수를 입력하세요: ";
	//std::cin >> i;
	//int sum = 0;

	//std::cout << "1부터" << i << "까지의 합은";

	//while (i != 0) {
	//	sum = sum + i;
	//	i--;
	//}

	//std::cout << sum;

	//// ------------------실습 4--사용자가 입력한 숫자 더하기---------------------
	//int num1, num2;
	//num2 = 0;
	//num1 = 1;

	//while (num1 != 0) {
	//	std::cout << "더하고 싶은 숫자 입력 (0입력시 종료): ";
	//	std::cin >> num1;

	//	num2 = num1 + num2;
	//}

	//std::cout << num2;




	//// 별로 피라미드 쌓기

	//int star;
	//int i,j ;

	//std::cout << "숫자를 입력하세요 : ";
	//std::cin >> star;
	//for (i = 0; i < star; i++) {
	//	for (j = 0; j <= i; j++) {
	//		std::cout << "*";
	//	}
	//	std::cout << "\n";
	//	j = 0;
	//}

//}