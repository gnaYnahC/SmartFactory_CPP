#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name, password;

    // 사용자에게 "이름을 입력하세요: "라는 메세지를 출력한 뒤 이름 입력받기
    cout << "이름을 입력하세요: ";
    cin >> name;

    // 사용자에게 "비밀번호를 입력하세요: "라는 메세지를 출력한 뒤 비번 입력 받기
    cout << "비밀번호를 입력하세요: ";
    cin >> password;

    // member.txt. 에서 한 줄씩 "이름"과 "비밀번호"를 검사하여 로그인 성공시 "로그인 성공" 실패시 "로그인 실패" 출력
    string fileName, filePassword;
    ifstream inputFile("member.txt");
    bool is_login = false; //로그인 성공 여부를 저장하는 변수
    while (inputFile >> fileName >> filePassword) {
        if (name == fileName && password == filePassword) {
            is_login = true;
            break;
        }
    }
    if (is_login) cout << "로그인 성공" ;
    else cout << "로그인 실패";

}

 


/* //다른 방법
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string name;
    string password;
    string line;
    cout << "이름을 입력하세요: ";
    cin >> name;
    cout << "비밀번호를 입력하세요: ";
    cin >> password;
    ifstream file("member.txt");
    string login = name + " " + password;
    while (getline(file, line)) {
        if (line == login) {
            cout << "로그인 성공";
            break;
        }
    }
    if (line != login) {
        cout << "로그인 실패";
    }
}
*/
