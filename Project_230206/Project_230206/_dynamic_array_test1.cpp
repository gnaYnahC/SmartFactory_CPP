#include <iostream>

// (1) ����ڷκ��� x, y 2���� �ڿ����� �Է� �ޱ�
// (2) ���� ����ڰ� x�� y�� 0�̳� ������ �Է��Ѵٸ� ���� �޼����� ��� �� �ٽ� �Է� �ޱ�
// (3) x*y�� ũ�⸦ ���� ������ ���� �迭 arr�� ����
// (4) arr[0][0] ���� arr[x][y]���� ������� 1���� x*y ����
// (5) arr[0][0] ���� arr[x][y]���� ����� �� ���

int main() {

	int x,y;
	int num = 0;

	while (1) {
		std::cout << "x�� �Է��ϼ���: ";
		std::cin >> x;
		std::cout << "y�� �Է��ϼ���: ";
		std::cin >> y;
		if (x < 0 || y < 0) {
			std::cout << "x�� y��� ����� �Է����ּ���." << "\n";
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
			arr2[i][j] = num++;
			std::cout << arr2[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < x; i++) {
		delete[] arr2[i];
	}
	delete arr2;

}