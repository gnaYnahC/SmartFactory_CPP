//�迭

#include <iostream>
#include <string>

int main() {

	// -------------�迭-----------------

	std::string friend1 = "ȫ�浿";
	std::string friend2 = "������";
	//std::string friends[2]; //���� �� ��� �ʱ�ȭ �� ������ ����Ѵ�.
	//friends[0] = "ȫ�浿"; //�ʱ�ȭ
	//friends[1] = "������"; //�ʱ�ȭ
	//friends[1] = "�ڵ���"; // ���� ����

	int nums[] = { 1, 2, 3 };
	std::cout << nums[2] << "\n"; // 3���

	double dnums[] = { 1.5, 2.5, 3.5 };
	std::cout << dnums[2] << "\n"; //3.5 ���

	float fnums[] = { 9, 3.14, 4 };
	std::cout << fnums[1] << "\n"; // 3.14 ���


	std::string friends[] = { "ȫ�浿", "������", "�ڵ���" }; // ����� �ʱ�ȭ�� �Բ� �� �� ��� ����(�ε���)�� �� �� ���� �ʾƵ� �ȴ�.
	std::cout << friends[0] << "\n";
	std::cout << friends[1] << "\n";

	for (int i = 0; i < 3; i++) {
		std::cout << friends[i] << std::endl;
	}

	// sizeof(); : sizeof�ȿ� ���� or Ÿ���� ���ڷ� �Ѱ���. ũ�⸦ byte������ ������
	for (int i = 0; i < sizeof(friends)/sizeof(std::string); i++) { //sizeof[0]���� ������ �ȴ�.
		std::cout << friends[i] << std::endl;
	}


	for (auto f : friends) { //for-each���� �迭�� �Ⱦ��� ������ ���� �� �� ����, �迭�� ũ�� ��ŭ ��
		//f = "ȫ�浿"
		//f = "������" �� �ٲ�
		//f = "�ڵ���" �� �ٲ�
		std::cout << f << std::endl;
	}




	// --------------2���� �迭 ----------------

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



	// ----------------3���� �迭------------------
	std::string fruits[2][3][2] = {
	{{ "1" , "2" } , { "���ΰ�" , "www" } , { "3" , "4" }},
	{{ "0" , "9" } , { "8" , "7" } , { "6" , "5" }}
	};

	std::cout << fruits[0][1][0] << "\n"; // aaa

 }