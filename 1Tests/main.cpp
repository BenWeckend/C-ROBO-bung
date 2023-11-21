#include <iostream>
#include <string>
using euro = int;

class bankaccount {
public:
	euro balance = 0;
	std::string name;
	std::string accountname;

	int balanceChange(euro bchange) {
		return calculate(bchange);
	}

	int balanceAmmount() {
		return balance;
	}

private:
	bool lossorwin;

	int calculate(euro money) {
		balance += money;
		return balance;
	}
};

int main() {
	char choice;
	int num = 0;
	euro amount;
	bankaccount mainName(1);

	do {
		std::cout << "\ntransfer money (type t)\nview account balance (type v)\nexit (type x)\nChoice: ";
		std::cin >> choice; std::cout << std::endl;

		switch (choice) {
		case 't':
			std::cout << "Amount: "; std::cin >> amount;
			std::cout << "New balance: " << mainName.balanceChange(amount) << " euro" << std::endl;
			break;
		case 'v':
			std::cout << "Balance: " << mainName.balanceAmmount() << " euro" << std::endl;
			std::cout << mainName.hm;
		case 'x': break;
		default:
			std::cout << "Please enter an valid input!" << std::endl;
			break;
		}
	} while (choice != 'x' );
	
	return 0;
}