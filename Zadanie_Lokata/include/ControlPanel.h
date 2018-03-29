#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H
#include "Investment.h"
#include "InvestmentManagement.h"
#include "Display.h"

class ControlPanel
{
    public:
        char cfu;   //charakter from user
        int n;  //cfu converted to int
        bool TakeNumberFromUser(); // checks if the number is possible to put into the switch
        bool WhatToDo(InvestmentManagement * management, Investment * investment, Display * display);   //allows user to choose an option
};

#endif // CONTROLPANEL_H
