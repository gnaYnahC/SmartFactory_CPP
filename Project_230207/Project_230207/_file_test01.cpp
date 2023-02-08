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

    // 사용자에게 3명의 회원에 대한 이름 비밀번호 입력받기
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 회원의 아이디와 비밀번호를 입력하세요" << ": ";
        cin >> members[i].name >> members[i].password;
    }

    // 사용자로부터 입력된 정보를 member.txt에 기록
    ofstream memberFile("member.txt");
    for (int i = 0; i < 3; i++) {
        memberFile << members[i].name << " " << members[i].password << endl;
    }
    memberFile.close();

    // member.txt에 저장된 회원명부 출력
    cout << "회원 명부:" << endl;
    ifstream inputFile("member.txt");
    while (inputFile >> members[0].name >> members[0].password) {
        cout << members[0].name << " " << members[0].password << endl;
    }
    inputFile.close();

    return 0;
}