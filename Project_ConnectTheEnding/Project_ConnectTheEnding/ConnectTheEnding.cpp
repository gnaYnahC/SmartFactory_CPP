#include <iostream>
#include <ctime>

using namespace std;

int main() {
    string word = "start";
    int count = 0;
    //int n = word.size();
    cout << "�����ձ� ����: " << word << "\n";
    while (true) {
        //�Է� �ޱ� �� ����
        clock_t startTime = clock();

        cout << "�ܾ �Է��ϼ���: ";
        string new_word;
        cin >> new_word;

        // ���� ���ڿ� �Է� ������ �� �� ���� Ȯ��
        bool rool = (word.back() == new_word[0]); // new_word.front() ����

        // �� �� ���� ��ġ �� ���
        if (rool) {
            word += (" --> "+ new_word);
            clock_t endTime = clock();
            if ((endTime - startTime) / CLOCKS_PER_SEC >= 10) { // TimeAttack 10��
                cout << "�ð� �ʰ�!! ���� ����. \n�Է��� �ܾ� ����: " << count << "\n";
                break;
            }
            count++;
            cout << word << endl;
        }

        //Ʋ�� �Է½�. (+�ð� �ʰ� �� Ʋ�� �Է� ��)
        else {
            clock_t endTime = clock();
            if ((endTime - startTime) / CLOCKS_PER_SEC >= 10) { // TimeAttack 10��
                cout << "�ð� �ʰ�!! ������ Ʋ�� �Է�!! ���� ����. \n�Է��� �ܾ� ����: " << count << "\n";
                break;
            }
            cout << "Ʋ�� �Է��Դϴ�.\n";
            cout << word << endl;
        }
    }
}