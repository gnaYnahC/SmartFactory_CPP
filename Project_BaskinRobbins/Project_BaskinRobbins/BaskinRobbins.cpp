#include <iostream>
//rand()���
#include <cstdlib>

using namespace std;

int main() {
    int num = 0;
    int count = 0;

    while (count < 31) { 
        //����� �Է� �κ�
        cout << "1���� 3������ ���ڸ� �Է��ϼ���: ";
        cin >> num;

        while (num < 1 || num > 3) {
            cout << "�߸��� �Է��Դϴ�!!\n1���� 3������ ���ڸ� �Է��ϼ���: ";
            cin >> num;
        }

        for (int i = 0; i < num; i++) {
            count += 1;
            cout << "������� ��ħ!! " << count << endl;
        }
        
        cout << endl;

        if (count >= 31) {
            cout << "����ڰ� 31�� ���ع��Ƚ��ϴ�!! \n��ǻ���� �¸�!" << endl;
            break;
        }

        //��ǻ�� �Է� �κ�
        int comp_num = rand() % 3 + 1;
        cout << "��ǻ���� �����Դϴ�: ";
        cout << comp_num << "�̶�� �մϴ�!!!!!" << endl;

        for (int i = 0; i < comp_num; i++) {
            count += 1;
            cout << "�ų� ��ǻ���� ��ħ!! " << count << endl;
            if (count == 31) {
                break;
            }
        }

        cout << endl;

        if (count >= 31) {
            cout << "��ǻ�Ͱ� 31�� ���ع��Ƚ��ϴ�!! \n������� �¸�!" << endl;
            break;
        }
    }
    return 0;
}



