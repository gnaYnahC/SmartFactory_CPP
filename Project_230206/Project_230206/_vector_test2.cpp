#include <iostream>
#include <vector>

// (1) ����ڰ� �Է��� ���ڵ��� �迭�� ���, �� ���� �� ���ϱ�.
// (2) ������´� ������ ����.

int main() {
	std::cout << "���� �ǽ�2: ����� �Է� ������ ��\n";
	int x = 0;
	int y = 1;
	int sum = 0;
	std::vector<int> v;
	
	while (1) {
		std::cout << "���ڸ� �Է��ϼ���(0�Է½� ����): ";
		std::cin >> y;
		sum = sum + y;
		if (y == 0) {
			break;
		}
	}
	std::cout << v.at(x);
}

