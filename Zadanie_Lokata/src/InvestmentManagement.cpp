#include "InvestmentManagement.h"
#include "Investment.h"
#include <math.h>

bool InvestmentManagement::BalanceOperation(Investment *investment, double amout, bool to_add, bool to_substract)
{   if(amout<0) return false;

    if( (to_substract==true) && (investment->balance_in_pln >= amout) )
    {
        investment->balance_in_pln -= amout;
        return true;
    }

    if(to_add==true)
    {
        investment->balance_in_pln += amout;
        return true;
    }
    else return false;
}

bool InvestmentManagement::TermOperation(Investment *investment,double years, bool to_add, bool to_substract)
{   if(years<0) return false;

    if( (to_substract == true) && (investment->term >= years) )
    {
        investment->term -= years;
        return true;
    }

    if(to_add == true)
    {
        investment->term += years;
        return true;
    }
    else return false;
}

bool InvestmentManagement::InterestOperation(Investment *investment,double percentage, bool to_add, bool to_substract)
{   if(percentage<0) return false;

    if( (to_substract==true) && (investment->interest >= percentage) ){
        investment->interest -= percentage;
        return true;
    }

    if(to_add==true)
    {
        if( (investment->interest + percentage) > 100) return false;
        investment->interest += percentage;
        return true;
    }
    else return false;
}

bool InvestmentManagement::ProfitEsteem(Investment *investment)
{
    investment->balance_end = investment->balance_in_pln * pow((1 + investment->interest / (100 * investment->capitalization_terms)), (investment->capitalization_terms * investment->term) );
    investment->estimated_profit = investment->balance_end - investment->balance_in_pln;
    return true;
}

bool InvestmentManagement::InvestmentCurrencyConversion(Investment *investment)
{
    investment->balance_in_usd = investment->balance_in_pln / 3.42;
    investment->balance_in_gbp = investment->balance_in_pln / 4.82;
    investment->balance_in_jpy = investment->balance_in_pln / 0.032;
    return true;
}

bool InvestmentManagement::InvestmentRefresh(Investment * investment)
{
    this->ProfitEsteem(investment);
    this->InvestmentCurrencyConversion(investment);
}

bool InvestmentManagement::CapitalizationTermsOperation(Investment *investment,int amout_of_terms, bool to_add, bool to_substract)
{
    if( (to_substract==true) && (investment->capitalization_terms >= amout_of_terms) ){
        investment->capitalization_terms -= amout_of_terms;
        return true;
    }

    if(to_add==true){
        investment->capitalization_terms += amout_of_terms;
        return true;
    }
    else return false;
}
