#include <iostream>
#include <string>

//city��� �迭 ������ �����, 5���� ���� �̸��� ������ ����
//for�� Ȥ�� for-each���� Ȱ���Ͽ� city���� ��� ���Ҹ� ���
int main() {
	std::string city[] = { "�ѱ�", "�̱�", "�Ϻ�", "�߱�", "����" };
	
	for (auto c : city) { 
		std::cout << c << std::endl;
	}
}