
//-----------���� �ǽ�(�ڵ� ���� ��)--------------
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string name, password, tel;

	// ����ڿ��� "�̸��� �Է��ϼ���: "��� �޼����� ����� �� �̸� �Է¹ޱ�
	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;

	// ����ڿ��� "��й�ȣ�� �Է��ϼ���: "��� �޼����� ����� �� ��� �Է� �ޱ�
	cout << "��й�ȣ�� �Է��ϼ���: ";
	cin >> password;

	ifstream inputFile("member.txt");
	// ������ ���������� ���ȴ��� Ȯ��
	if (inputFile.fail()) {
		cout << "���� ����" << endl;
		return -1; // main�Լ� ����
	}

	// member.txt. ���� �� �پ� "�̸�"�� "��й�ȣ"�� �˻��Ͽ� �α��� ������ "�α��� ����" ���н� "�α��� ����" ���
	string login = name + " " + password;
	string line, file_content = "";
	while (getline(inputFile, line)) {
		if (login == line) {
			cout << "�α��� ����" << endl;
			break;
		}
	}
	if (login != line) {
		cout << "�α��� ����" << endl;
		return -2;
	}

	cout << "��ȭ��ȣ�� �Է��ϼ���: ";
	cin >> tel;

	// member_tel.txt ���Ͽ��� ��ȭ��ȣ�� �̹� ����Ǿ� �ִ��� Ȯ��
	//bool found = false;
	int found = 1;
	ifstream telInputFile("member_tel.txt");
	// ������ ���������� ���ȴ��� Ȯ��
	if (telInputFile.fail()) {
		cout << "���� ����" << endl;
		return -1; // main�Լ� ����
	}


	//string fileName, filePassword, fileTel;
	//while (telInputFile >> fileName >> fileTel) {
	//	if (name == fileName) {
	//		found = true;
	//		break;
	//	}
	//}

	// ��ȭ��ȣ�� �̹� ����Ǿ� ������ ���� ��ȭ��ȣ ����
	// �ƴϸ�, ���ο� ��ȭ��ȣ ����
	string number = name + " " + tel;
	ifstream telInputFile2("member_tel.txt");
	while (getline(telInputFile2, line)) {
		if (line.substr(0, name.size()) == name) {
			line = number;
			found = false;
		}
		file_content += line + "\n";
	}
	if (found) {
		ofstream telOutputFile("member_tel.txt", ios::app); // ios::app �̾��
		if (telOutputFile.fail()) {
			cout << "���� ����" << endl;
			return -1;
		}
		telOutputFile << number << "\n";
	}
	else {
		ofstream telOutputFile("member_tel.txt", ios::app); // ios::app �̾��
		if (telOutputFile.fail()) {
			cout << "���� ����" << endl;
			return -1;
		}
		telOutputFile << file_content;
	}

	return 0;
}