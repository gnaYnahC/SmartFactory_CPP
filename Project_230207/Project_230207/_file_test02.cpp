#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string name;
	string password;
	string line;

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "��й�ȣ�� �Է��ϼ���: ";
	cin >> password;

	ifstream file("member.txt");

	string login = name + " " + password;
	while (getline(file, line)) {
		if (line == login) {
			cout << "�α��� ����";
			break;
		}
	}

	if (line != login) {
		cout << "�α��� ����";
	}
}
