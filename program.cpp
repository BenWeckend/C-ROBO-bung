#include <iostream>
#include <string>
#include <float.h>

int main()
{
    std::int16_t alter;
    double penislaenge;
    std::string name;
    
    std::cout << "Wie ist dein Name?: ";
    std::cin >> name;
    std::cout << "Wi alt bist du?: ";
    std::cin >> alter;
    std::cout << "Wie lang ist dein Schlong? (cm): ";
    std::cin >> penislaenge;
    
    std::cout << "Hallo, " << name << " mit dem Alter von " << alter << " Jahren, und einem Schlong von " << penislaenge << " cm!" << std::endl;
    if (penislaenge>15)
    {
        std::cout << "Btw.: Nice dick (O_O)" << std::endl;
    }
    else {
        std::cout << "Sad life :/, but still nice!" << std::endl;
    }
    return 0;
}


   