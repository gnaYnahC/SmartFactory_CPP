#include <iostream>
#include <ctime>

using namespace std;

int main() {
    string word = "start";
    int count = 0;
    //int n = word.size();
    cout << "끝말잇기 시작: " << word << "\n";
    while (true) {
        //입력 받기 전 설정
        clock_t startTime = clock();

        cout << "단어를 입력하세요: ";
        string new_word;
        cin >> new_word;

        // 기존 문자와 입력 문자의 앞 뒷 글자 확인
        bool rool = (word.back() == new_word[0]); // new_word.front() 가능

        // 앞 뒷 글자 일치 할 경우
        if (rool) {
            word += (" --> "+ new_word);
            clock_t endTime = clock();
            if ((endTime - startTime) / CLOCKS_PER_SEC >= 10) { // TimeAttack 10초
                cout << "시간 초과!! 게임 종료. \n입력한 단어 개수: " << count << "\n";
                break;
            }
            count++;
            cout << word << endl;
        }

        //틀린 입력시. (+시간 초과 후 틀린 입력 시)
        else {
            clock_t endTime = clock();
            if ((endTime - startTime) / CLOCKS_PER_SEC >= 10) { // TimeAttack 10초
                cout << "시간 초과!! 심지어 틀린 입력!! 게임 종료. \n입력한 단어 개수: " << count << "\n";
                break;
            }
            cout << "틀린 입력입니다.\n";
            cout << word << endl;
        }
    }
}