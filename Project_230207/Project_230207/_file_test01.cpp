#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Member {
    string name;
    string password;
};

int main() {
    Member members[3];

    // ����ڿ��� 3���� ȸ���� ���� �̸� ��й�ȣ �Է¹ޱ�
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "��° ȸ���� ���̵�� ��й�ȣ�� �Է��ϼ���" << ": ";
        cin >> members[i].name >> members[i].password;
    }

    // ����ڷκ��� �Էµ� ������ member.txt�� ���
    ofstream memberFile("member.txt");
    for (int i = 0; i < 3; i++) {
        memberFile << members[i].name << " " << members[i].password << endl;
    }
    memberFile.close();

    // member.txt�� ����� ȸ����� ���
    cout << "ȸ�� ���:" << endl;
    ifstream inputFile("member.txt");
    while (inputFile >> members[0].name >> members[0].password) {
        cout << members[0].name << " " << members[0].password << endl;
    }
    inputFile.close();

    return 0;
}