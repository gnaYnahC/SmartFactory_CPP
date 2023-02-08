
//-----------번외 실습(코딩 실패 ㅠ)--------------
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string name, password, tel;

	// 사용자에게 "이름을 입력하세요: "라는 메세지를 출력한 뒤 이름 입력받기
	cout << "이름을 입력하세요: ";
	cin >> name;

	// 사용자에게 "비밀번호를 입력하세요: "라는 메세지를 출력한 뒤 비번 입력 받기
	cout << "비밀번호를 입력하세요: ";
	cin >> password;

	ifstream inputFile("member.txt");
	// 파일이 정상적으로 열렸는지 확인
	if (inputFile.fail()) {
		cout << "파일 없음" << endl;
		return -1; // main함수 종료
	}

	// member.txt. 에서 한 줄씩 "이름"과 "비밀번호"를 검사하여 로그인 성공시 "로그인 성공" 실패시 "로그인 실패" 출력
	string login = name + " " + password;
	string line, file_content = "";
	while (getline(inputFile, line)) {
		if (login == line) {
			cout << "로그인 성공" << endl;
			break;
		}
	}
	if (login != line) {
		cout << "로그인 실패" << endl;
		return -2;
	}

	cout << "전화번호를 입력하세요: ";
	cin >> tel;

	// member_tel.txt 파일에서 전화번호가 이미 저장되어 있는지 확인
	//bool found = false;
	int found = 1;
	ifstream telInputFile("member_tel.txt");
	// 파일이 정상적으로 열렸는지 확인
	if (telInputFile.fail()) {
		cout << "파일 없음" << endl;
		return -1; // main함수 종료
	}


	//string fileName, filePassword, fileTel;
	//while (telInputFile >> fileName >> fileTel) {
	//	if (name == fileName) {
	//		found = true;
	//		break;
	//	}
	//}

	// 전화번호가 이미 저장되어 있으면 기존 전화번호 수정
	// 아니면, 새로운 전화번호 저장
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
		ofstream telOutputFile("member_tel.txt", ios::app); // ios::app 이어쓰기
		if (telOutputFile.fail()) {
			cout << "파일 없음" << endl;
			return -1;
		}
		telOutputFile << number << "\n";
	}
	else {
		ofstream telOutputFile("member_tel.txt", ios::app); // ios::app 이어쓰기
		if (telOutputFile.fail()) {
			cout << "파일 없음" << endl;
			return -1;
		}
		telOutputFile << file_content;
	}

	return 0;
}