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
	string phon_num;

	string login = name + " " + password;

	while (getline(file, line)) {
		if (line == login) {
			cout << "�α��� ���� \n";
			cout << "��ȭ��ȣ�� �Է����ּ���: ";
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
		cout << "�α��� ����";
	}
}


