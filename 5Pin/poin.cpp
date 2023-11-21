#include <iostream>
#include <cstdlib>
#include <string>

class data {
private:
    int size = 1;
    int *numbers = (int*) malloc(sizeof(int) * size);
    int *sortetNumbers = (int*) malloc(sizeof(int) * size);



public:
    int currentValue = 0, numberAmount = 0;
    data();

    void view() {
        for (int i = 0; i < numberAmount; i++) {
            std::cout << "Num[" << i << "] = " << numbers[i] << "\n";
        }
    }
    void save() {
        char buffer[sizeof(int)];
        do {
            std::cout << "Enter Number (enter c to cancel): "; std::cin >> currentValue;
           
            if (numberAmount > size) {
                size += 2;
                numbers = (int*)realloc(numbers, sizeof(int) * size);
            }
            numbers[numberAmount] = currentValue;



        } while (std::__cxx11::to_string(currentValue) != "c");
       
    }

};

data::data() {

}

void order() {

}

int main (){
    char choice;
    data newdata;

    std::cout << "What do you wnat to do?: \n - save date (type s)\n - view data (type v)\n - order data (type o)\n - exit (type c)\n Choice: ";
    std::cin >> choice;

    do{
        switch (choice)
        {
        case 's': newdata.save(); break;
        case 'v': newdata.view(); break;
        case 'o': order(); break;
        case 'c': break;
        default: std::cerr << "wrong input!" << std::endl; break;
        }
    } while (choice != 'c');

    return 0;
}