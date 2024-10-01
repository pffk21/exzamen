//
//  main.cpp
//  ex
//
//  Created by paul blazhko on 01.10.2024.
//

#include "uchastnik.h"
#include "prepatstvie.h"
#include <iostream>
using namespace std;
int main()
{
    Uchastnik* uchastniki[] =
    {
        new Human("Человек", 150, 2),
        new Cat("Кот", 50, 1),
        new Robot("Робот", 5000, 10)
    };
    Prepatstvie* prepatstviya[] =
    {
        new Running(150),
        new Wall(2)
    };
    for (Uchastnik* uchastnik : uchastniki)
    {
        bool vipolnenie_vsex_prepadstivii = true;
        for (Prepatstvie* prepatstvie : prepatstviya)
        {
            if (!prepatstvie->vozmoznost_preodalet_prepadstvie(*uchastnik))
            {
                vipolnenie_vsex_prepadstivii = false;
                break;
            }
        }
        if (vipolnenie_vsex_prepadstivii)
        {
            cout << "Участник " << uchastnik->getName() << " прошел все препятствия" << std::endl;
        }
        else
        {
            cout << "Участник " << uchastnik->getName() << " вылетел" << std::endl;
        }
    }
    for (Uchastnik* uchastnik : uchastniki)
    {
        delete uchastnik;
    }
    for (Prepatstvie* prepatstvie : prepatstviya)
    {
        delete prepatstvie;
    }
}
