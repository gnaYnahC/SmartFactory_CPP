#include <iostream>
#include <cstdlib>

int main() {
    std::srand(time(NULL));
    int lotto[6] = { };

    for (int i = 0; i < 6; i++) {
        int num = std::rand() % 45 + 1;
        lotto[i] = num;
        for (int j = 0; j < i; j++) {
            if (lotto[j] == num) {
                i--;
                break;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        std::cout << lotto[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
