#include <ctime>
#include <iostream>

using namespace std;

int main() {
  const int number = 6;
  int comp_num[number] = {};
  int user_num[number] = {};

  srand(time(NULL));
  for (int i = 0; i < number; i++) {
    comp_num[i] = rand() % 25 + 1;
    for (int j = 0; j < i; j++) {
      if (comp_num[i] == comp_num[j]) {
        i--;
        break;
      }
    }
  }

  cout << "6가지의 1~25까지의 숫자를 입력해주세요" << endl;

  for (int i = 0; i < number; i++) {
    cout << i + 1 << "번째 숫자를 입력하세요 : ";
    cin >> user_num[i];
    if (user_num[i] > 25 || user_num[i] < 1) {
      cout << "범위를 벗어난 숫자입니다. 다시 입력해주세요." << endl;
      i--;
      continue;
    }
    for (int j = 0; j < i; j++) {
      if (user_num[i] == user_num[j]) {
        cout << "중복된 숫자입니다. 다시 입력해주세요." << endl;
        i--;
        break;
      }
    }
  }

  cout << "----------------------------------------\n당첨번호: ";
  int count = 0;
  for (int i = 0; i < number; i++) {
    cout << comp_num[i] << " ";
    for (int j = 0; j < number; j++) {
      if (comp_num[i] == user_num[j]) {
        count++;
        break;
      }
    }
  }
  cout << endl;
  cout << endl;

  cout << "맞춘 개수: " << count << endl;
  cout << 7 - count << "등 입니다! 축하합니다";

  return 0;
}