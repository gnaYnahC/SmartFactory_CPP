//배열

#include <iostream>
#include <string>

int main() {

	// -------------배열-----------------

	std::string friend1 = "홍길동";
	std::string friend2 = "성춘향";
	//std::string friends[2]; //선언만 할 경우 초기화 할 갯수를 써야한다.
	//friends[0] = "홍길동"; //초기화
	//friends[1] = "성춘향"; //초기화
	//friends[1] = "코딩온"; // 변경 가능

	int nums[] = { 1, 2, 3 };
	std::cout << nums[2] << "\n"; // 3출력

	double dnums[] = { 1.5, 2.5, 3.5 };
	std::cout << dnums[2] << "\n"; //3.5 출력

	float fnums[] = { 9, 3.14, 4 };
	std::cout << fnums[1] << "\n"; // 3.14 출력


	std::string friends[] = { "홍길동", "성춘향", "코딩온" }; // 선언과 초기화가 함께 될 땐 몇개의 원소(인덱스)를 쓸 지 적지 않아도 된다.
	std::cout << friends[0] << "\n";
	std::cout << friends[1] << "\n";

	for (int i = 0; i < 3; i++) {
		std::cout << friends[i] << std::endl;
	}

	// sizeof(); : sizeof안에 변수 or 타입을 인자로 넘겨줌. 크기를 byte단위로 구해줌
	for (int i = 0; i < sizeof(friends)/sizeof(std::string); i++) { //sizeof[0]으로 나눠도 된다.
		std::cout << friends[i] << std::endl;
	}


	for (auto f : friends) { //for-each문은 배열을 안쓰고 각각의 값에 갈 수 있음, 배열의 크기 만큼 돔
		//f = "홍길동"
		//f = "성춘향" 로 바뀜
		//f = "코딩온" 로 바뀜
		std::cout << f << std::endl;
	}




	// --------------2차원 배열 ----------------

	//std::string fruits[2][2] = { {,} , {,} };
	std::string fruit[2][3] = { 
		{"apple","grape","strawberry"},
		{"orange","banana","melon"} 
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << fruit[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (auto &f : fruit) {
		for (std::string f2 : f) {
			std::cout << f2 << "2 ";
		}
		std::cout << std::endl;
	}



	// ----------------3차원 배열------------------
	std::string fruits[2][3][2] = {
	{{ "1" , "2" } , { "주인공" , "www" } , { "3" , "4" }},
	{{ "0" , "9" } , { "8" , "7" } , { "6" , "5" }}
	};

	std::cout << fruits[0][1][0] << "\n"; // aaa

 }