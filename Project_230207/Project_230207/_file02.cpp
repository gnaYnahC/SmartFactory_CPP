#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//input file stream -> ifstream
//output file steam -> ifstream

int main() {
	//ifstream: 파일 -> 프로그램
	//ofstream: 프로그램 -> 파일
	//ofstream file();
	//file.open("file_test2.txt");
	ofstream file("file_test2.txt", ios::out | ios::trunc); //파일이 없다면 파일 생성!, ios::trunc = 덮어쓰기, ios::app 추가하기 
	if (file.fail()) {
		cout << "파일 없음" << endl;
		return -1;
	}

	file << "hello world!!" << "\n" << "hello C++"; 
	

	file.close();
}