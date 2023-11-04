#include <iostream>

int main(){

    int input=0, check=0, check2=0;

    std::cout << "Primzahlen bis zu welcher Grenze bestimmen: "; std::cin >> input;

    for(int i=1; i<=input; i++){
        check2=0;
        for(int j=1; j<=i; j++){
            check = i % j;
            //std::cout << j << std::endl;
            if (check == 0){
                check2++;
            }
        }
    
        if (check2 == 2){
            std::cout << i << std::endl;
        }
        //std::cout << "-------------" << std::endl;
        
    }
    return 0;
}