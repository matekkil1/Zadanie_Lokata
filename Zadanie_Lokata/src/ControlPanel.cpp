#include "ControlPanel.h"
#include <iostream>
#include <limits.h>

bool ControlPanel::TakeNumberFromUser()
    {
            std::cin>>cfu;
            if(cfu != '1' && cfu != '2' && cfu != '3' && cfu != '4' && cfu != '5' && cfu != '6' && cfu != '7' && cfu != '8' && cfu != '9') return false;
            else return true;
        }

bool ControlPanel::WhatToDo(InvestmentManagement * management, Investment * investment, Display * display)
{   n =(int)cfu - 48;
    display->ClearConsole();
    display->DisplayInterestInfo( investment );

       switch( n )
    {
    int amount_of_term;
    double amount;
    double interest;
    double term;

    case 1:
        display->DisplayComent1();
        while (!(std::cin >> amount))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisać jeszcze raz  ";
        }
        management->BalanceOperation(investment,amount,1,0);
        break;

    case 2:
        display->DisplayComent2();
        while (!(std::cin >> amount))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisać jeszcze raz  ";
        }
        if(management->BalanceOperation(investment,amount,0,1)== false)
        {
            display->DisplayComent10();
            getchar();
            getchar();
        }
    break;

    case 3:
        display->DisplayComent3();
        while (!(std::cin >> interest))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisać jeszcze raz  ";
        }
        if(management->InterestOperation(investment,interest,1,0) == false)
        {
            display->DisplayComent14();
            getchar();
            getchar();
        }
        break;

    case 4:
        display->DisplayComent4();
        while (!(std::cin >> interest))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisać jeszcze raz  ";
        }
        if(management->InterestOperation(investment,interest,0,1) == false)
        {
            display->DisplayComent11();
            getchar();
            getchar();
        }
        break;

    case 5:

        display->DisplayComent5();
        while (!(std::cin >> term))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisać jeszcze raz  ";
        }
        management->TermOperation(investment, term,1,0);
        break;

    case 6:
        display->DisplayComent6();
        while (!(std::cin >> term))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisać jeszcze raz  ";
        }
        if(management->TermOperation(investment,interest,0,1) == false)
        {
            display->DisplayComent12();
            getchar();
            getchar();
        }
        break;

    case 7:
        display->DisplayComent7();
        while (!(std::cin >> amount_of_term))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisać jeszcze raz  ";
        }
        management->CapitalizationTermsOperation(investment,amount_of_term,1,0);
        break;

    case 8:
        display->DisplayComent8();
        while (!(std::cin >> amount_of_term))
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Niepoprawne dane, spróbuj wpisać jeszcze raz  ";
        }
        if(management->CapitalizationTermsOperation(investment,amount_of_term,0,1) == false)
        {
            display->DisplayComent13();
            getchar();
            getchar();
        }
        break;

    case 9:
        display->DisplayComent9();
        break;
    }
    display->ClearConsole();
    management->InvestmentRefresh(investment);
    return true;

}
