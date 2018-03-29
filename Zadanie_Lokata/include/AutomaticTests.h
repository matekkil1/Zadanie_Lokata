#ifndef AUTOMATICTESTS_H
#define AUTOMATICTESTS_H
#include <InvestmentManagement.h>
#include <Investment.h>
#include <iostream>

class AutomaticTests
{
    public:
        void ShowIfTestPassed(bool test);
        void RunTests();
        bool Test0();
        bool Test1(InvestmentManagement * managment,Investment * investment);
        bool Test2(InvestmentManagement * managment,Investment * investment,Investment * emptyone);
        bool Test3(InvestmentManagement * managment,Investment * investment);
        bool Test4(InvestmentManagement * managment,Investment * investment);
        bool Test5(InvestmentManagement * managment,Investment * investment);
        bool Test6(InvestmentManagement * managment,Investment * investment);
        bool Test7(InvestmentManagement * managment,Investment * investment);
        bool Test8(InvestmentManagement * managment,Investment * investment);


};

#endif // AUTOMATICTESTS_H
