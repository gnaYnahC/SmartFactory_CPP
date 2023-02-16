#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    // Generate 6 random numbers
    srand(time(NULL));
    int computer_numbers[6];
    for (int i = 0; i < 6; i++) {
        computer_numbers[i] = rand() % 25 + 1;
    }

    // Get user input
    int user_numbers[6];
    cout << "Enter 6 numbers from 1 to 25, separated by spaces: ";
    for (int i = 0; i < 6; i++) {
        cin >> user_numbers[i];
        if (user_numbers[i] > 26) {
            cout << "잘못된 숫자입니다. 다시 입력해주세요: ";
            cin >> user_numbers[i-1];
        }
    }

    // Sort the arrays for easier comparison
    sort(computer_numbers, computer_numbers + 6);
    sort(user_numbers, user_numbers + 6);

    // Compare the arrays and determine the rank
    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (computer_numbers[i] == user_numbers[i]) {
            count++;
        }
    }

    for(int)
    cout << "당첨번호 공개!!\n" << computer_numbers;

    if (count == 0) {
        cout << "You're in 7th place." << endl;
    }
    else if (count == 1) {
        cout << "You're in 6th place." << endl;
    }
    else if (count == 2) {
        cout << "You're in 5th place." << endl;
    }
    else if (count == 6) {
        cout << "You win!" << endl;
    }
    else {
        cout << "Sorry, no rank for you." << endl;
    }

    return 0;
}
