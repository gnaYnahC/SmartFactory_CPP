#include <iostream>
#include <vector>
//���͸� �̿��Ͽ� �迭 1 �ǽ� �ϱ�
int main() {
	std::cout << "���� �ǽ�1: �迭�ǽ�1�� ���ͷ� �ۼ��ϱ�";
	int x,y;
	int sum = 0;
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

	std::vector<std::vector<int>> v;
	v.assign(x, std::vector<int>(y)); 

	for (int i = 0; i < v.size(); i++) { 
		for (int j = 0; j < v.at(i).size(); j++) { 
			v.at(i).at(j) = sum++;
			std::cout << v.at(i).at(j) << " ";
		}
		std::cout << std::endl;
	}
}