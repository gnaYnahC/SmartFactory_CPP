#include <iostream>
#include <string>

//int main() {
//
//
//	// �ǽ�1 (if�� �̿�)
//	std::cout << "-------------------�ǽ� 1--------------------";
//	std::cout << std::endl;
//	int age;
//	std::cout << "���̸� �Է��ϼ���: ";
//	std::cin >> age;
//
//	if (0 <= age && age <= 7) {
//		std::cout << "����";
//	}
//
//	else if (age <= 13) {
//		std::cout << "����";
//	}
//
//	else if (age <= 16) {
//		std::cout << "���л�";
//	}
//
//	else if (age <= 19) {
//		std::cout << "����л�";
//	}
//
//	else if (age <= 199) {
//		std::cout << "����";
//	}
//
//	else if (200 <= age) {
//		std::cout << "���̰� �ʹ� �����ϴ�..!";
//	}
//
//	else {
//		std::cout << "�� �� �Է�";
//	}
//	std::cout << std::endl;
//
//
//
//	//�ǽ� 2
//	std::cout << "-------------------�ǽ� 2--------------------";
//	std::cout << std::endl;
//	std::string name;
//	std::cout << "�̸��� �Է��ϼ���: ";
//	std::cin >> name;
//
//	if (name == "ȫ�浿") {
//		std::cout << "����";
//	}
//	else if (name == "������") {
//		std::cout << "����";
//	}
//	else {
//		std::cout << "�𸣰ھ��";
//	}
//	std::cout << std::endl;
//
//
//
//	//�ǽ�3
//	std::cout << "-------------------�ǽ� 3--------------------";
//	std::cout << std::endl;
//	int a;
//	std::cout << "���ڸ� �Է��ϼ���: ";
//	std::cin >> a;
//
//	a % 5 == 0 ? std::cout << "5�� ����Դϴ�." : std::cout << "5�� ����� �ƴմϴ�.";
//	std::cout << std::endl;
//
//
//
//	//�ǽ�4
//	std::cout << "-------------------�ǽ� 4--------------------";
//	std::cout << std::endl;
//	int int1, int2;
//	std::string w;
//	
//	std::cout << "����1�� �Է��ϼ���: ";
//	std::cin >> int1;
//	std::cout << "����2�� �Է��ϼ���: ";
//	std::cin >> int2;
//	std::cout << "���ϴ� ����� �Է��ϼ��� (+, -, *, /): ";
//	std::cin >> w;
//
//	if (w == "+") {
//		std::cout << "��: " << int1 + int2;
//	}
//	else if (w == "-") {
//		std::cout << "��: " << int1 - int2;
//	}
//	else if (w == "*") {
//		std::cout << "��: " << int1 * int2;
//	}
//	else if (w == "/") {
//		std::cout << "��: " << int1 / int2 << ", ������" << int1 % int2;
//	}
//
//
//}