#include <ctime>
#include <iostream>

using namespace std;

int main() {
  string current_word = "start";
  int word_count = 0;

  cout << "끝말잇기 시작: " << current_word << "\n";

  while (true) {
    // 입력 받기 전 설정
    clock_t start_time = clock();
    cout << "단어를 입력하세요: ";
    string new_word;
    cin >> new_word;

    // 입력된 단어의 길이 확인
    if (new_word.length() <= 1) {
      cout << "두 글자 이상의 단어를 입력하세요.\n";
      continue;
    }
    // 입력된 단어를 모두 소문자로 변환
    for (int i = 0; i < new_word.length(); i++) {
      new_word[i] = tolower(new_word[i]);
    }

    // 이미 사용된 단어인지 확인
    if (new_word.front() != current_word.back()) {
      cout << "틀린 입력입니다.\n";
      continue;
    }

    // TimeAttack 10초
    clock_t end_time = clock();
    if ((end_time - start_time) / CLOCKS_PER_SEC >= 10) {
      cout << "시간 초과!! 게임 종료. \n입력한 단어 개수: " << word_count
           << "\n";
      break;
    }

    // 끝말잇기 규칙에 맞으면 단어 추가
    current_word += (" --> " + new_word);
    word_count++;
    cout << current_word << endl;
  }

  return 0;
}