#include <iostream>
#include <string>


//grade��� �迭�� �����ϰ� , �л� 5���� ���� �Է¹ޱ�
//for�� Ȥ�� for-each���� Ȱ���Ͽ� �л� 5���� ���� ��� ���ϱ�
int main() {

	std::string students[] = { "¯��", "�ͱ�", "ö��", "����", "����" };

	double grade[5];
	double sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << students[i] << "�� ����: ";
		std::cin >> grade[i];
		sum = sum + grade[i];
	}

	std::cout << "������ġ�� ��� ����" << sum / 5;

}