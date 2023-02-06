#include <iostream>

int main() {
	//---------2차원 동적 배열---------
	// num을 받아서 num X num 배열
	int num;
	std::cin >> num;
	int** num_arr = new int* [num];
	for (int i = 0; i < num; i++) { //배열의 크기 잡기
		num_arr[i] = new int[num];
	}

	for (int i = 0; i < num; i++) { //배열의 값 설정
		for (int j = 0; j < num; j++) {
			num_arr[i][j] = num + i;
			std::cout << num_arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	//-------2차원 배열 반납-----------
	for (int i = 0; i < num; i++) {
		delete[] num_arr[i];
	}
	delete[] num_arr;
}