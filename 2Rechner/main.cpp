#include <iostream>

int main() {
	double num1, num2;
	char op; char l = 'j';
	double result;

	while (l == 'j'){
			std::cout << "Zahl1 Operator Zahl2: "; std::cin >> num1 >> op >> num2;

		switch (op)
		{
		case '+': result = num1 + num2; break;
		case '/': result = num1 / num2; break;
		case '*': result = num1 * num2; break;
		case '-': result = num1 - num2; break;
		default: break;
		}
		std::cout << "Ergebnis: " << result << "\nNochmal? (j/n): ";
		std::cin >> l;
	}

	return 0;

}