#include <iostream>
using namespace std;
// (1) 사용자로부터 x, y 2개의 자연수를 입력 받기
// (2) 만약 사용자가 x와 y에 0이나 음수를 입력한다면 에러 메세지를 출력 후 다시 입력 받기
// (3) x*y의 크기를 갖는 이차원 동적 배열 arr을 선언
// (4) arr[0][0] 부터 arr[x][y]까지 순서대로 1부터 x*y 저장
// (5) arr[0][0] 부터 arr[x][y]까지 저장된 값 출력

int main() {

	int x,y;
	int num = 0;

	while (1) {
		std::cout << "x를 입력하세요: ";
		std::cin >> x;
		std::cout << "y를 입력하세요: ";
		std::cin >> y;
		if (x < 0 || y < 0) {
			std::cout << "x와 y모두 양수를 입력해주세요." << "\n";
		}
		else {
			break;
		}
	}

	int** arr2 = new int* [y];
	for (int i = 0; i < y; i++) {
		arr2[i] = new int[x];
	}

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			arr2[i][j] = ++num;
			std::cout << arr2[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < x; i++) {
		delete[] arr2[i];
	}
	delete[] arr2;
	

	//int x, y;
	//while (true) {
	//	cout << "Enter two natural numbers x and y: ";
	//	cin >> x >> y;
	//	if (x <= 0 || y <= 0) {
	//		cout << "Error: x and y must be positive numbers." << endl;
	//		continue;
	//	}
	//	break;
	//}

	//int arr[100][100];
	//int num = 1;
	//for (int i = 0; i < x; i++) {
	//	for (int j = 0; j < y; j++) {
	//		arr[i][j] = num;
	//		num++;
	//	}
	//}

	//for (int i = 0; i < x; i++) {
	//	for (int j = 0; j < y; j++) {
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//return 0;

}