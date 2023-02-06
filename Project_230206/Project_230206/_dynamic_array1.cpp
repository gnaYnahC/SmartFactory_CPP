#include <iostream>

int main() {
	//-----------배열에 사용자가 숫자를 입력하고 싶은 경우 = 동적 배열--------------
	//int num;
	//std::cin >> num;
	//int num_array[num]; -> 이걸 하고 싶다면!

	int num;
	std::cin >> num;
	// 동적 메모리를 가리키는 포인터 선언 후
	// new라는 키워드를 사용하여, 동적 배열 할당
	int* num_array = new int[num];

	int arr[5] = { 1, 2, 3, 4, 5 };
	std::cout << arr << "\n"; // 주소값
	std::cout << arr[0] << "\n"; // 1

	for (int i = 0; i < num; i++) {
		//*(arr + i) = 1;
		num_array[i] = 1;
	} // 배열의 원소를 전부 1로 초기화

	for (int i = 0; i < num; i++) {
		//std::cout << arr[i] << " ";
		std::cout << num_array[i] << " ";
	}

	
	// -----실행중 할당받은 값을 실행중 반납------
	delete[] num_array; // 배열이 아니라면 []생략
}