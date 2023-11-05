#include <iostream>
#include <cstdlib>
void save(*numbers, *psize);
void view();
void order();

int main (){
    char choice;
    int size = 2; int *psize; psize = &size;
    int *numbers = (int*)malloc(sizeof(int) * size);
    std::cout << "What do you wnat to do?: \n - save date (type s)\n - view data (type v)\n - order data (type o)\n - exit (type c)\n Choice: ";
    std::cin >> choice;

    while (choice != 'c'){
        switch (choice)
        {
        case 's': save(*numbers, *psize); break;
        case 'v': view(); break;
        case 'o': order(); break;
        case 'c': break;
        default: std::cerr << "wrong input!" << std::endl; break;
        }
    }

    return 0;
}

void save(*Snumbers, *Spsize){

}

void view(){

}
void order(){

}