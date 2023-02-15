#include <iostream>
//rand()사용
#include <cstdlib>

using namespace std;

int main() {
    int num = 0;
    int count = 0;

    while (count < 31) { 
        //사용자 입력 부분
        cout << "1에서 3까지의 숫자를 입력하세요: ";
        cin >> num;

        while (num < 1 || num > 3) {
            cout << "잘못된 입력입니다!!\n1에서 3까지의 숫자를 입력하세요: ";
            cin >> num;
        }

        for (int i = 0; i < num; i++) {
            count += 1;
            cout << "사용자의 외침!! " << count << endl;
        }
        
        cout << endl;

        if (count >= 31) {
            cout << "사용자가 31을 말해버렸습니다!! \n컴퓨터의 승리!" << endl;
            break;
        }

        //컴퓨터 입력 부분
        int comp_num = rand() % 3 + 1;
        cout << "컴퓨터의 차례입니다: ";
        cout << comp_num << "이라고 합니다!!!!!" << endl;

        for (int i = 0; i < comp_num; i++) {
            count += 1;
            cout << "신난 컴퓨터의 외침!! " << count << endl;
            if (count == 31) {
                break;
            }
        }

        cout << endl;

        if (count >= 31) {
            cout << "컴퓨터가 31을 말해버렸습니다!! \n사용자의 승리!" << endl;
            break;
        }
    }
    return 0;
}



