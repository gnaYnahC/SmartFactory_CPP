#include <iostream>
#include <vector>

// (1) 사용자가 입력한 숫자들을 배열에 담고, 그 수의 합 구하기.
// (2) 출력형태는 사진과 같음.

int main() {
	std::cout << "벡터 실습2: 사용자 입력 숫자의 합\n";
	int x = 0;
	int y = 1;
	int sum = 0;
	std::vector<int> v;
	
	while (1) {
		std::cout << "숫자를 입력하세요(0입력시 종료): ";
		std::cin >> y;
		sum = sum + y;
		v.insert(v.begin() + x, sum);
		if (y == 0) {
			break;
		}
	}
	std::cout << v.at(x);
}

