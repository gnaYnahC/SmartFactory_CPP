#include <ctime>
#include <iostream>

using namespace std;

int main() {
  string current_word = "start";
  int word_count = 0;

  cout << "�����ձ� ����: " << current_word << "\n";

  while (true) {
    // �Է� �ޱ� �� ����
    clock_t start_time = clock();
    cout << "�ܾ �Է��ϼ���: ";
    string new_word;
    cin >> new_word;

    // �Էµ� �ܾ��� ���� Ȯ��
    if (new_word.length() <= 1) {
      cout << "�� ���� �̻��� �ܾ �Է��ϼ���.\n";
      continue;
    }
    // �Էµ� �ܾ ��� �ҹ��ڷ� ��ȯ
    for (int i = 0; i < new_word.length(); i++) {
      new_word[i] = tolower(new_word[i]);
    }

    // �̹� ���� �ܾ����� Ȯ��
    if (new_word.front() != current_word.back()) {
      cout << "Ʋ�� �Է��Դϴ�.\n";
      continue;
    }

    // TimeAttack 10��
    clock_t end_time = clock();
    if ((end_time - start_time) / CLOCKS_PER_SEC >= 10) {
      cout << "�ð� �ʰ�!! ���� ����. \n�Է��� �ܾ� ����: " << word_count
           << "\n";
      break;
    }

    // �����ձ� ��Ģ�� ������ �ܾ� �߰�
    current_word += (" --> " + new_word);
    word_count++;
    cout << current_word << endl;
  }

  return 0;
}