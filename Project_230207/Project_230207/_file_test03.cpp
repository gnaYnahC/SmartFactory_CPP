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
	string phon_num;

	string login = name + " " + password;

	while (getline(file, line)) {
		if (line == login) {
			cout << "로그인 성공 \n";
			cout << "전화번호를 입력해주세요: ";
			cin >> phon_num;
			ifstream file_n("member_phon_number.txt");
			while (getline(file_n, line)) {
				if (name.size()) {
					ofstream file_r("member_phon_number.txt", ios::out | ios::trunc);
					file_r << name << ": " << phon_num << "\n";
				}
				else {
					ofstream file_r("member_phon_number.txt", ios::out | ios::app);
					file_r << name << ": " << phon_num << "\n";
				}
			}
			break ;
		}
	}

	if (line != login) {
		cout << "로그인 실패";
	}
}


