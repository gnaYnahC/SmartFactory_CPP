#include <iostream>
#include <fstream>
#include <string>

// file_test 내용을 file_test2로 옮기기

using namespace std;

bool checkFileOpen(ifstream &file) {
	if (file.fail()) {
		cout << "파일 없음" << endl;
		return false;
	}
	else {
		return true;
	}
}

int main() {
	//파일 변수설정
	ifstream file_r("file_test.txt");
	//함수호출
	if (!checkFileOpen(file_r)) return -1;

	string line, file_content = "";
	while (getline(file_r, line)) {
		file_content += line + "\n";
	}

	cout << file_content;

	ofstream file("file_test2.txt"); 
	if (file.fail()) {
		cout << "파일 없음" << endl;
		return -1;
	}

	file << file_content ;

	file.close();
}