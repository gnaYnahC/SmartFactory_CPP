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

  cout << "6������ 1~25������ ���ڸ� �Է����ּ���" << endl;

  for (int i = 0; i < number; i++) {
    cout << i + 1 << "��° ���ڸ� �Է��ϼ��� : ";
    cin >> user_num[i];
    if (user_num[i] > 25 || user_num[i] < 1) {
      cout << "������ ��� �����Դϴ�. �ٽ� �Է����ּ���." << endl;
      i--;
      continue;
    }
    for (int j = 0; j < i; j++) {
      if (user_num[i] == user_num[j]) {
        cout << "�ߺ��� �����Դϴ�. �ٽ� �Է����ּ���." << endl;
        i--;
        break;
      }
    }
  }

  cout << "----------------------------------------\n��÷��ȣ: ";
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

  cout << "���� ����: " << count << endl;
  cout << 7 - count << "�� �Դϴ�! �����մϴ�";

  return 0;
}