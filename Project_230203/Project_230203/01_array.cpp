//�迭

#include <iostream>
#include <string>

int main() {
	std::string friend1 = "ȫ�浿";
	std::string friend2 = "������";


	// -------------�迭-----------------

	//std::string friends[2]; //����	�� �� ��� �ʱ�ȭ �� ������ ����Ѵ�.
	//friends[0] = "ȫ�浿"; //�ʱ�ȭ
	//friends[1] = "������"; //�ʱ�ȭ
	//friends[1] = "�ڵ���"; // ���� ����

	std::string friends[] = { "ȫ�浿", "������" }; // ����� �ʱ�ȭ []��� �ʱ�ȭ �� �� ���� �ʾƵ� �ȴ�.

	std::cout << friends[0] + "\n" + friends[1] << "\n";

	int nums[] = { 1, 2, 3 };
	std::cout << nums[2] << "\n"; // 3���

	double dnums[] = { 1.5, 2.5, 3.5 };
	std::cout << dnums[2] << "\n"; //3.5 ���

	float fnums[] = { 9, 3.14, 4 };
	std::cout << fnums[1] << "\n"; // 3.14 ���


	// --------------������ �迭 ----------------

	//std::string fruits[2][2] = { {,} , {,} };
	std::string fruits[2][3] = { 
		{"apple","grape","strawberry"},
		{"orange","banana","melon"} 
	};

	// ----------------3���� �迭------------------
	//std::string fruits[2][3][2] = {
	//{{ "" , "" } , { "" , "" } , { "" , "" }},
	//{{ "" , "" } , { "" , "" } , { "" , "" }}
	//};
 }