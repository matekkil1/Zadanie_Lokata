#include "Menu.h"
#include <iostream>



bool Menu::CreateMenu()
{
    Display * display = new Display;
    display->DisplayMenu();
    delete display;
    char a = '0';
    while(a != '1' && a != '2' )
    {
        std::cin>>a;
        std::cout<<"\r";
    }
    if(a == '1') InvestmentMenu();
    if(a == '2') TestsMenu();
    return true;
}

bool Menu::InvestmentMenu()
{
    Investment * lokata = new Investment;
    InvestmentManagement * managment = new InvestmentManagement;
    Display * display = new Display;
    ControlPanel * controlpanel = new ControlPanel;
    display->ClearConsole();
    while(controlpanel->n != 9)
    {
        display->DisplayInterestInfo(lokata);
        display->DisplayControlPanel();
        while(controlpanel->TakeNumberFromUser() == false);
        controlpanel->WhatToDo(managment, lokata, display);
    }
    delete lokata;
    delete managment;
    delete display;
}

bool Menu::TestsMenu()
{
    InvestmentManagement * managment = new InvestmentManagement;
    AutomaticTests * tests = new AutomaticTests;
    Display * display = new Display;
    display->ClearConsole();
    tests->RunTests();
    delete managment;
    delete display;
    delete tests;
}
