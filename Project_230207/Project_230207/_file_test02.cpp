#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name, password;

    // ����ڿ��� "�̸��� �Է��ϼ���: "��� �޼����� ����� �� �̸� �Է¹ޱ�
    cout << "�̸��� �Է��ϼ���: ";
    cin >> name;

    // ����ڿ��� "��й�ȣ�� �Է��ϼ���: "��� �޼����� ����� �� ��� �Է� �ޱ�
    cout << "��й�ȣ�� �Է��ϼ���: ";
    cin >> password;

    // member.txt. ���� �� �پ� "�̸�"�� "��й�ȣ"�� �˻��Ͽ� �α��� ������ "�α��� ����" ���н� "�α��� ����" ���
    string fileName, filePassword;
    ifstream inputFile("member.txt");
    while (inputFile >> fileName >> filePassword) {
        if (name == fileName && password == filePassword) {
            cout << "�α��� ����" << endl;
            return -1;
        }
    }
    if (name != fileName || password != filePassword) {
        cout << "�α��� ����" << endl;
        return -2;
    }

    inputFile.close();

    return 0;
}