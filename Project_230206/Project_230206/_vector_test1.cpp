#include <iostream>
#include <vector>
//벡터를 이용하여 배열 1 실습 하기
int main() {
	std::cout << "벡터 실습1: 배열실습1을 벡터로 작성하기";
	int x,y;
	int sum = 0;
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