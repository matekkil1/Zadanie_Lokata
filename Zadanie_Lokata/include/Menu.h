#ifndef MENU_H
#define MENU_H
#include <Investment.h>
#include <InvestmentManagement.h>
#include <Display.h>
#include <ControlPanel.h>
#include <AutomaticTests.h>

class Menu
{
    public:
        bool CreateMenu();
        bool InvestmentMenu();
        bool TestsMenu();
};

#endif // MENU_H
