#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int comp_num[6] = {};
    int user_num[6] = {};

    // 컴퓨터가 1~25 중 중복 없이 6개의 수를 무작위로 선택
    for (int i = 0; i < 6; i++) {
        comp_num[i] = rand() % 25 + 1;
        // 중복된 숫자가 선택되었을 경우 i를 감소시켜서 다시 무작위 수를 선택하도록 함
        for (int j = 0; j < i; j++) {
            if (comp_num[i] == comp_num[j]) {
                i--;
                break;
            }
        }
    }

    // 플레이어로부터 1~25 중 중복 없이 6개의 수를 입력받아 user_num 배열에 저장
    cout << "6가지의 1~25까지의 숫자를 입력해주세요" << endl;

    for (int i = 0; i < 6; i++) {
        while (true) {
            cout << i + 1 << "번째 숫자를 입력하세요 : ";
            cin >> user_num[i];
            if (user_num[i] > 25 || user_num[i] < 1) { // 범위 지정 1~25
                cout << "범위를 벗어난 숫자입니다. 다시 입력해주세요." << endl;
                continue; 
            }
            bool same_num = false;  // 중복된 숫자 확인
            for (int j = 0; j < i; j++) {
                if (user_num[i] == user_num[j]) {
                    same_num = true;
                    break;
                }
            }
            if (same_num) { // 숫자 중복 시 충력
                cout << "중복된 숫자입니다. 다시 입력해주세요." << endl;
                continue;
            }

            break;
        }
    }

    // comp_num에 저장된 숫자를 출력, 플레이어가 맞춘 숫자의 개수에 따라 등수를 출력
    cout << "----------------------------------------" << endl;
    cout << "당첨번호: ";
    int count = 0;
    for (int i = 0; i < 6; i++) {
        cout << comp_num[i] << " ";
        // 컴퓨터가 선택한 숫자와 플레이어가 선택한 숫자를 비교하여 맞춘 숫자의 개수를 카운트
        for (int j = 0; j < 6; j++) {
            if (comp_num[i] == user_num[j]) {
                count++;
                break;
            }
        }
    }
    cout << endl;
    cout << endl;

    switch (count) {
    case 6:
        cout << "1등입니다. 축하합니다~" << endl;
        break;
    case 5:
        cout << "2등입니다. 축하합니당" << endl;
        break;
    case 4:
        cout << "3등입니다. 축하해용" << endl;
        break;
    case 3:
        cout << "4등입니다. 아까워요" << endl;
        break;
    case 2:
        cout << "5등입니다. 아이고" << endl;
        break;
    case 1:
        cout << "6등입니다." << endl;
        break;
    case 0:
        cout << "하나도 맞추지 못 했습니다. 다음 기회에 도전하세요!" << endl;
        break;
    }

    return 0;
}