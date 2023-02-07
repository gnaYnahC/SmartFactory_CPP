#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream file_r;
	ofstream file("member.txt");

	if (file.fail()) {
		cout << "파일 없음" << endl;
		return -1;
	}

	string name, password;

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 회원 이름 : ";
		cin >> name;
		cout << i + 1 << "번째 회원 비밀번호: ";
		cin >> password;
		file << name << " " << password << "\n";
	}

	cout << endl;
	cout << "----------회원 명부 파일 읽기----------\n";
	cout << endl;

	file_r.open("member2.txt");

	string line, file_content = "";

	if (file_r.fail()) {
		cout << "파일 없음" << endl;
		return -1;
	}

	while (getline(file_r, line)) {
		file_content += line + "\n";
	}

	cout << file_content;


}