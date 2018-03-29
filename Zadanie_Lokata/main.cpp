#include <iostream>
#include "Menu.h"
using namespace std;


int main()
{Menu * menu = new Menu;
menu->CreateMenu();
delete menu;
    return 0;
}
