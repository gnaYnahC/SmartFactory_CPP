#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream file_r;
	ofstream file("member.txt");

	if (file.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}

	string name, password;

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "��° ȸ�� �̸� : ";
		cin >> name;
		cout << i + 1 << "��° ȸ�� ��й�ȣ: ";
		cin >> password;
		file << name << " " << password << "\n";
	}

	cout << endl;
	cout << "----------ȸ�� ��� ���� �б�----------\n";
	cout << endl;

	file_r.open("member2.txt");

	string line, file_content = "";

	if (file_r.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}

	while (getline(file_r, line)) {
		file_content += line + "\n";
	}

	cout << file_content;


}