#include "AutomaticTests.h"
#include "sstream"
void AutomaticTests::ShowIfTestPassed(bool test)
{
    if (test == 1) std::cout<< "OK";
    if (test == 0) std::cout<<"NOT OK";
}

bool AutomaticTests::Test0()
{
    return 1;
}
bool AutomaticTests::Test1(InvestmentManagement * managment,Investment * investment)
{
    managment->BalanceOperation(investment,-500,1,0);  //Test no.1 - BalanceOperation for specific value (negative)
    if(investment->balance_in_pln == 0 ) return true;
    else return false;
}

bool AutomaticTests::Test2(InvestmentManagement * managment,Investment * investment,Investment * emptyone)
{   managment->BalanceOperation(investment,500,1,0);
    investment = emptyone;
    if(investment == emptyone) return true;   //Test no.2 - "=" operator overloading
     return false;
}

bool AutomaticTests::Test3(InvestmentManagement * managment,Investment * investment)
{
    managment->BalanceOperation(investment,500,1,0); //Test no.3 - BalanceOperation for specific value (positive)
    if(investment->balance_in_pln == 500 ) return true;
    else return false;
}

bool AutomaticTests::Test4(InvestmentManagement * managment,Investment * investment)
{
    managment->InterestOperation(investment,2.5,1,0);   //Test no.4 - InterestOperation for specific value (possitive)
    if(investment->interest == 2.5) return true;
    else return false;
}
bool AutomaticTests::Test5(InvestmentManagement * managment,Investment * investment)
{
    managment->BalanceOperation(investment,1000,1,0);
    managment->InterestOperation(investment,3,1,0);
    managment->CapitalizationTermsOperation(investment,50,1,0);
    managment->TermOperation(investment,3,1,0);
    managment->InvestmentRefresh(investment);
    if(investment->balance_in_pln == 1094,14) return true;
    else return false;
}
bool AutomaticTests::Test6(InvestmentManagement * managment,Investment * investment)
{
    if(managment->CapitalizationTermsOperation(investment,100000,0,1) == false) return true;
    else return false;
}
bool AutomaticTests::Test7(InvestmentManagement * managment,Investment * investment)
{
    managment->ProfitEsteem(investment);
    return true;

}
bool AutomaticTests::Test8(InvestmentManagement * managment,Investment * investment)
{
    managment->BalanceOperation(investment,150,1,0);
    managment->InterestOperation(investment,10,1,0);
    managment->CapitalizationTermsOperation(investment,10,1,0);
    managment->TermOperation(investment,1,1,0);
    managment->InvestmentRefresh(investment);
    if(investment->balance_in_jpy == 4687.5) return true;
    else return false;
}


void AutomaticTests::RunTests()
{   InvestmentManagement * managment= new InvestmentManagement;
    Investment * investment = new Investment[8];
    Investment * emptyone = new Investment;

    std::cout<<"0 -";
    ShowIfTestPassed(Test0());

    std::cout<<std::endl;

    std::cout<<"1 -";
    ShowIfTestPassed(Test1( managment, &investment[0]));
    std::cout<<std::endl;

    std::cout<<"2 -";
    ShowIfTestPassed(Test2( managment, &investment[1], emptyone));

    std::cout<<std::endl;

    std::cout<<"3 -";
    ShowIfTestPassed(Test3( managment, &investment[2]));
    std::cout<<std::endl;

    std::cout<<"4 -";
    ShowIfTestPassed(Test4( managment, &investment[3]));
    std::cout<<std::endl;

    std::cout<<"5 -";
    ShowIfTestPassed(Test5( managment, &investment[4]));
    std::cout<<std::endl;

    std::cout<<"6 -";
    ShowIfTestPassed(Test6( managment, &investment[5]));
    std::cout<<std::endl;

    std::cout<<"7 -";
    ShowIfTestPassed(Test7( managment, &investment[6]));
    std::cout<<std::endl;

    std::cout<<"8 -";
    ShowIfTestPassed(Test8( managment, &investment[7]));
    std::cout<<std::endl;


    delete [] investment;

}
