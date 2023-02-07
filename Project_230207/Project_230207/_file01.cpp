#include <iostream>
// getline을 쓰기 위해
#include <string>
// 파일을 다루기 위한 기능 제공. ifstream, ofstream
#include <fstream>

//using namespace std; 안에 있는 것들
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;


int main() {
	//기존 텍스트파일 읽어오는 방법
	//std::ifstream
	ifstream file;
	file.open("file_test.txt"); //파일명에 해당하는 파일 열기

	//파일이 잘 열렸는지 확인하는 함수
	//file.fail(); // 파일 여는 것에 실패하면 true. 성공하면 false
	if (file.fail()) {
		cout << "파일 없음" << endl;
		return -1; // main함수 종료
	}

	cout << "------파일 있음------" << endl;

	std::string str ;
	//file >> str ; // 파일 내용을 str에 저장. 공백(띄어쓰기, 엔터 등) 전까지만 읽어옴.

	std::string str2;
	//file >> str2; // 공백 이후의 문자열을 file에 저장

	//std::string str, str2;
	//file >> str >> str2;   //이렇게도 가능

	//cout << str << " " << str2;
	
	/* //파일 끝까지 읽어오는 방법
	while (file >> str >> str2) {
		cout << str << " " << str2;
		cout << endl;
	}
	*/


	std::string line;
	// file의 내용을 한 줄씩("\n") 불러와 원형을 그대로 불러와 line에 저장하는 방법
	// std::getline(file, line);

	while (std::getline(file, line)) {
		cout << line << endl;
	}	


	//파일 닫는 기능
	file.close();
}
