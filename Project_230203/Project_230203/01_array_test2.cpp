#include <iostream>
#include <string>


//grade��� �迭�� �����ϰ� , �л� 5���� ���� �Է¹ޱ�
//for�� Ȥ�� for-each���� Ȱ���Ͽ� �л� 5���� ���� ��� ���ϱ�
int main() {

	//double grade[5] = { 0, 0, 0, 0 };


	//std::cout << "¯���� ����: ";
	//std::cin >> grade[0];
	//std::cout << "ö���� ����: ";
	//std::cin >> grade[1];
	//std::cout << "�ͱ��� ����: ";
	//std::cin >> grade[2];
	//std::cout << "������ ����: ";
	//std::cin >> grade[3];
	//std::cout << "������ ����: ";
	//std::cin >> grade[4];

	//std::cout << "������ġ�� ��� ����: " << (grade[0] + grade[1] + grade[2] + grade[3] + grade[4])/5 ;

	double grade[5];
	double sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "�� �л��� ����: ";
		std::cin >> grade[i];
		sum = sum + grade[i];
	}

	std::cout << "��� ����" << sum / 5;

}