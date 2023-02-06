#include <iostream>
#include <string>

int deaso(int a, int b, int c) {
	
	int result = 0;

	if (a > b && a > c) {
		result = a;
	}
	else if (b > a && b > c) {
		result = b;
	}
	else{
		result = c;
	}

	return result;

}


int main() {
	int a, b, c;
	int result;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	result = deaso(a, b, c);

	std::cout << result;
}