#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//input file stream -> ifstream
//output file steam -> ifstream

int main() {
	//ifstream: ���� -> ���α׷�
	//ofstream: ���α׷� -> ����
	//ofstream file();
	//file.open("file_test2.txt");
	ofstream file("file_test2.txt", ios::out | ios::trunc); //������ ���ٸ� ���� ����!, ios::trunc = �����, ios::app �߰��ϱ� 
	if (file.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}

	file << "hello world!!" << "\n" << "hello C++"; 
	

	file.close();
}