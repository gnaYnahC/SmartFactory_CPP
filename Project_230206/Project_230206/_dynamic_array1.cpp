#include <iostream>

int main() {
	//-----------�迭�� ����ڰ� ���ڸ� �Է��ϰ� ���� ��� = ���� �迭--------------
	//int num;
	//std::cin >> num;
	//int num_array[num]; -> �̰� �ϰ� �ʹٸ�!

	int num;
	std::cin >> num;
	// ���� �޸𸮸� ����Ű�� ������ ���� ��
	// new��� Ű���带 ����Ͽ�, ���� �迭 �Ҵ�
	int* num_array = new int[num];

	int arr[5] = { 1, 2, 3, 4, 5 };
	std::cout << arr << "\n"; // �ּҰ�
	std::cout << arr[0] << "\n"; // 1

	for (int i = 0; i < num; i++) {
		//*(arr + i) = 1;
		num_array[i] = 1;
	} // �迭�� ���Ҹ� ���� 1�� �ʱ�ȭ

	for (int i = 0; i < num; i++) {
		//std::cout << arr[i] << " ";
		std::cout << num_array[i] << " ";
	}

	
	// -----������ �Ҵ���� ���� ������ �ݳ�------
	delete[] num_array; // �迭�� �ƴ϶�� []����
}