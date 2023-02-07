#include <iostream>
#include <fstream>
#include <string>

// file_test ������ file_test2�� �ű��

using namespace std;

bool checkFileOpen(ifstream &file) {
	if (file.fail()) {
		cout << "���� ����" << endl;
		return false;
	}
	else {
		return true;
	}
}

int main() {
	//���� ��������
	ifstream file_r("file_test.txt");
	//�Լ�ȣ��
	if (!checkFileOpen(file_r)) return -1;

	string line, file_content = "";
	while (getline(file_r, line)) {
		file_content += line + "\n";
	}

	cout << file_content;

	ofstream file("file_test2.txt"); 
	if (file.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}

	file << file_content ;

	file.close();
}