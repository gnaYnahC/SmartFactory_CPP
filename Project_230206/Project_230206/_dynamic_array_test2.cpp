#include <iostream>

//(1) ����� �л� ���� ����� ���� �� �Է� �ޱ�
//(2) �Է¹��� �л� �� ��ŭ ������ �Է¹ޱ�
//(3) �л����� ���� ��� �����ϱ�
//input
//�л��� ���� �Է��ϼ��� : 3
//1��° �л��� ������ �Է��ϼ��� : 10
//2��° �л��� ������ �Է��ϼ��� : 20
//3��° �л��� ������ �Է��ϼ��� : 30
//output
//��� : ? ? ? ?

int main() {
	int stu;
	double sum = 0;

	std::cout << "�л��� ���� �Է��ϼ���: ";
	std::cin >> stu;

	int* students = new int[stu];
	for (int i = 0; i < stu; i++) {
		std::cout << i+1 << "�� ����: ";
		std::cin >> students[i];
		sum = students[i] + sum;
	}

	std::cout << "\n";
}