#include <iostream>
#include <cstdlib>
#include <string>

int* numbersToOrder;
class data {
private:
    int size = 2;
    int currentValue, numberAmount = 0;
    int* numbers;
    int* sortetNumbers;

public:
    
    data();

    void view() {
        for (int i = 0; i < numberAmount; i++) {
            std::cout << "Num[" << i << "] = " << numbers[i] << "\n";
        }
    }

    void save() {
        currentValue = 0;
        while (currentValue != -1) {
            std::cout << "Enter Number (enter -1 to cancel): "; std::cin >> currentValue;
            //std::cout << "value: " << currentValue << std::endl;
            if (numberAmount >= size) {
                size += 2;
                numbers = (int*)realloc(numbers, sizeof(int) * size);
                std::cout << "Allocating new space!\n";
            }
            numbers[numberAmount] = currentValue;
            (currentValue == -1) ? 0 : numberAmount++;
        }
    }
    void order() {
        int orderchoice;
        std::cout << "small to big (1) or big to small (2)"; std::cin << orderchoice;
        if
    }

    void freeNum() {
        int free(int* numbers);
        int free(int* sortetNumbers);
        std::cout << "Memory is free again ....\n";
    }


};

data::data() {
    numbers = (int*)malloc(sizeof(int) * size);
    sortetNumbers = (int*)malloc(sizeof(int) * size);
    numbersToOrder = &numbers;
}

void SmallToBig() {
    
}
void BigToSmall() {

}

int main (){
    char choice;
    data newdata;

    do{
    std::cout << "What do you want to do?: \n - save date (type s)\n - view data (type v)\n - order data (type o)\n - exit (type c)\n Choice: ";
    std::cin >> choice; std::cout << "\n";

        switch (choice)
        {
        case 's': newdata.save(); break;
        case 'v': newdata.view(); break;
        case 'o': newdata.order(); break;
        case 'c': newdata.freeNum(); break;
        default: std::cerr << "wrong input!" << std::endl; break;
        }
    } while (choice != 'c');

    
    return 0;
}