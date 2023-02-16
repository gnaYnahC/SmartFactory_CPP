#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int comp_num[6] = {};
    int user_num[6] = {};

    // ��ǻ�Ͱ� 1~25 �� �ߺ� ���� 6���� ���� �������� ����
    for (int i = 0; i < 6; i++) {
        comp_num[i] = rand() % 25 + 1;
        // �ߺ��� ���ڰ� ���õǾ��� ��� i�� ���ҽ��Ѽ� �ٽ� ������ ���� �����ϵ��� ��
        for (int j = 0; j < i; j++) {
            if (comp_num[i] == comp_num[j]) {
                i--;
                break;
            }
        }
    }

    // �÷��̾�κ��� 1~25 �� �ߺ� ���� 6���� ���� �Է¹޾� user_num �迭�� ����
    cout << "6������ 1~25������ ���ڸ� �Է����ּ���" << endl;

    for (int i = 0; i < 6; i++) {
        while (true) {
            cout << i + 1 << "��° ���ڸ� �Է��ϼ��� : ";
            cin >> user_num[i];
            if (user_num[i] > 25 || user_num[i] < 1) { // ���� ���� 1~25
                cout << "������ ��� �����Դϴ�. �ٽ� �Է����ּ���." << endl;
                continue; 
            }
            bool same_num = false;  // �ߺ��� ���� Ȯ��
            for (int j = 0; j < i; j++) {
                if (user_num[i] == user_num[j]) {
                    same_num = true;
                    break;
                }
            }
            if (same_num) { // ���� �ߺ� �� ���
                cout << "�ߺ��� �����Դϴ�. �ٽ� �Է����ּ���." << endl;
                continue;
            }

            break;
        }
    }

    // comp_num�� ����� ���ڸ� ���, �÷��̾ ���� ������ ������ ���� ����� ���
    cout << "----------------------------------------" << endl;
    cout << "��÷��ȣ: ";
    int count = 0;
    for (int i = 0; i < 6; i++) {
        cout << comp_num[i] << " ";
        // ��ǻ�Ͱ� ������ ���ڿ� �÷��̾ ������ ���ڸ� ���Ͽ� ���� ������ ������ ī��Ʈ
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
        cout << "1���Դϴ�. �����մϴ�~" << endl;
        break;
    case 5:
        cout << "2���Դϴ�. �����մϴ�" << endl;
        break;
    case 4:
        cout << "3���Դϴ�. �����ؿ�" << endl;
        break;
    case 3:
        cout << "4���Դϴ�. �Ʊ����" << endl;
        break;
    case 2:
        cout << "5���Դϴ�. ���̰�" << endl;
        break;
    case 1:
        cout << "6���Դϴ�." << endl;
        break;
    case 0:
        cout << "�ϳ��� ������ �� �߽��ϴ�. ���� ��ȸ�� �����ϼ���!" << endl;
        break;
    }

    return 0;
}