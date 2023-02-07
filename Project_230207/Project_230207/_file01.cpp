#include <iostream>
// getline�� ���� ����
#include <string>
// ������ �ٷ�� ���� ��� ����. ifstream, ofstream
#include <fstream>

//using namespace std; �ȿ� �ִ� �͵�
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;


int main() {
	//���� �ؽ�Ʈ���� �о���� ���
	//std::ifstream
	ifstream file;
	file.open("file_test.txt"); //���ϸ� �ش��ϴ� ���� ����

	//������ �� ���ȴ��� Ȯ���ϴ� �Լ�
	//file.fail(); // ���� ���� �Ϳ� �����ϸ� true. �����ϸ� false
	if (file.fail()) {
		cout << "���� ����" << endl;
		return -1; // main�Լ� ����
	}

	cout << "------���� ����------" << endl;

	std::string str ;
	//file >> str ; // ���� ������ str�� ����. ����(����, ���� ��) �������� �о��.

	std::string str2;
	//file >> str2; // ���� ������ ���ڿ��� file�� ����

	//std::string str, str2;
	//file >> str >> str2;   //�̷��Ե� ����

	//cout << str << " " << str2;
	
	/* //���� ������ �о���� ���
	while (file >> str >> str2) {
		cout << str << " " << str2;
		cout << endl;
	}
	*/


	std::string line;
	// file�� ������ �� �پ�("\n") �ҷ��� ������ �״�� �ҷ��� line�� �����ϴ� ���
	// std::getline(file, line);

	while (std::getline(file, line)) {
		cout << line << endl;
	}	


	//���� �ݴ� ���
	file.close();
}
