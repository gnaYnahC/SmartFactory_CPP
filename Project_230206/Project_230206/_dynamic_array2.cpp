#include <iostream>

int main() {
	//---------2���� ���� �迭---------
	// num�� �޾Ƽ� num X num �迭
	int num;
	std::cin >> num;
	int** num_arr = new int* [num];
	for (int i = 0; i < num; i++) { //�迭�� ũ�� ���
		num_arr[i] = new int[num];
	}

	for (int i = 0; i < num; i++) { //�迭�� �� ����
		for (int j = 0; j < num; j++) {
			num_arr[i][j] = num + i;
			std::cout << num_arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	//-------2���� �迭 �ݳ�-----------
	for (int i = 0; i < num; i++) {
		delete[] num_arr[i];
	}
	delete[] num_arr;
}