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
    bool is_login = false; //�α��� ���� ���θ� �����ϴ� ����
    while (inputFile >> fileName >> filePassword) {
        if (name == fileName && password == filePassword) {
            is_login = true;
            break;
        }
    }
    if (is_login) cout << "�α��� ����" ;
    else cout << "�α��� ����";

}

 


/* //�ٸ� ���
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
    string login = name + " " + password;
    while (getline(file, line)) {
        if (line == login) {
            cout << "�α��� ����";
            break;
        }
    }
    if (line != login) {
        cout << "�α��� ����";
    }
}
*/
