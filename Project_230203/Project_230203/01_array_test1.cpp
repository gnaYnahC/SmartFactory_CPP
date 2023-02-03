#include <iostream>
#include <string>

//city라는 배열 변수를 만들고, 5개의 나라 이름을 값으로 지정
//for문 혹은 for-each문을 활용하여 city안의 모든 원소를 출력
int main() {
	std::string city[] = { "한국", "미국", "일본", "중국", "북한" };
	
	for (auto c : city) { 
		std::cout << c << std::endl;
	}
}