#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;


namespace seoul {
	int addr = 2580;
	std::string land = "�溹��";

	namespace busan {
		int addr = 3910;
		std::string land = "�Ե�����";
	}
}

using namespace seoul::busan;

int main() {

	cout << "�λ� ������ȣ: " << addr << endl;
	cout << "�λ� ���帶ũ: " << land << endl;

	cout << "���� ������ȣ: " << seoul::addr << endl;
	cout << "���� ���帶ũ: " << seoul::land << endl;
}