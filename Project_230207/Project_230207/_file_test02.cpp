#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string name;
	string password;
	string line;

	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "비밀번호를 입력하세요: ";
	cin >> password;

	ifstream file("member.txt");

	string login = name + " " + password;
	while (getline(file, line)) {
		if (line == login) {
			cout << "로그인 성공";
			break;
		}
	}

	if (line != login) {
		cout << "로그인 실패";
	}
}
