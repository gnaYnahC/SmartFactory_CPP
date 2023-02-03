//배열

#include <iostream>
#include <string>

int main() {
	std::string friend1 = "홍길동";
	std::string friend2 = "성춘향";


	// -------------배열-----------------

	//std::string friends[2]; //선언	만 할 경우 초기화 할 갯수를 써야한다.
	//friends[0] = "홍길동"; //초기화
	//friends[1] = "성춘향"; //초기화
	//friends[1] = "코딩온"; // 변경 가능

	std::string friends[] = { "홍길동", "성춘향" }; // 선언과 초기화 []몇개를 초기화 할 지 쓰지 않아도 된다.

	std::cout << friends[0] + "\n" + friends[1] << "\n";

	int nums[] = { 1, 2, 3 };
	std::cout << nums[2] << "\n"; // 3출력

	double dnums[] = { 1.5, 2.5, 3.5 };
	std::cout << dnums[2] << "\n"; //3.5 출력

	float fnums[] = { 9, 3.14, 4 };
	std::cout << fnums[1] << "\n"; // 3.14 출력


	// --------------다차원 배열 ----------------

	//std::string fruits[2][2] = { {,} , {,} };
	std::string fruits[2][3] = { 
		{"apple","grape","strawberry"},
		{"orange","banana","melon"} 
	};

	// ----------------3차원 배열------------------
	//std::string fruits[2][3][2] = {
	//{{ "" , "" } , { "" , "" } , { "" , "" }},
	//{{ "" , "" } , { "" , "" } , { "" , "" }}
	//};
 }