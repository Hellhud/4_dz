#include <iostream>

int main() {
	int a, b = 0;
	std::cin >> a;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) b++;
	}
	if (b == 2) std::cout << "prost";
	else std::cout << "neprost";

	return 0;
}