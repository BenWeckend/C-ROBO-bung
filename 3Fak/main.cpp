#include <iostream>

int main(){
    int z=0, r=1;
    std::cout << "Welche Zahl: "; std::cin >> z;
    for (int i=1; i<=z; i++){
        r = r * i;
        std::cout << i <<std::endl;
    }

    std::cout << "Fakultaet von " << z << " ist " << r << std::endl;

    return 0;
}