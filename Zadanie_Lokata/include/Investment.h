#include <iostream>
#ifndef INVESTMENT _H
#define INVESTMENT _H

class Investment
{
    public:
    Investment()
    {
        term = 0; // in years
        interest = 0; // in a year term
        balance_in_usd =0;
        balance_in_pln = 0;
        balance_in_gbp = 0;
        balance_in_jpy = 0;
        estimated_profit = 0;
        capitalization_terms = 0; // in a single year
        balance_end = 0;
    }
        double term;
        double interest;
        double balance_in_usd;
        double balance_in_pln;
        double balance_in_gbp;
        double balance_in_jpy;
        double estimated_profit;
        double balance_end;
        int capitalization_terms;

    Investment& operator= (Investment const& ex)
    {
        term = ex.term;
        interest = ex.interest;
        balance_in_usd = ex.balance_in_usd;
        balance_in_pln = ex.balance_in_pln;
        balance_in_gbp = ex.balance_in_gbp;
        balance_in_jpy = ex.balance_in_jpy;
        estimated_profit = ex.estimated_profit;
        balance_end = ex.balance_end;
        capitalization_terms = ex.capitalization_terms;

    }

    bool operator==(const Investment &ex)
    {
        if(term == ex.term && interest == ex.interest && balance_in_usd == ex.balance_in_usd && balance_in_pln == ex.balance_in_pln && balance_in_gbp == ex.balance_in_gbp && balance_in_jpy == ex.balance_in_jpy && estimated_profit == ex.estimated_profit && balance_end == ex.balance_end && capitalization_terms == ex.capitalization_terms) return true;
    }

};

inline std::ostream & operator<< (std::ostream &wyjscie, const Investment &s)
{
   return wyjscie << "Okres trwania lokaty konczy sie za: "<<s.term<<" lat."<<std::endl
    <<"Oprocentowanie lokaty w skali roku wynosi: "<<s.interest<<" %"<<std::endl
    <<"Stan lokaty w PLN to: "<<s.balance_in_pln<<std::endl
    <<"Stan lokaty w GBP to: "<<s.balance_in_gbp<<std::endl
    <<"Stan lokaty w USD to: "<<s.balance_in_usd<<std::endl
    <<"Stan lokaty w JPY to: "<<s.balance_in_jpy<<std::endl
    <<"Liczba okresów kapitalizacji to: "<<s.capitalization_terms<<std::endl
    <<"Szacowany zysk w PLN po zakonczeniu lokaty to: "<<s.estimated_profit<<std::endl
    <<"Szacowany stan konta w PLN po zakonczeniu lokaty to: "<<s.balance_end<<std::endl;
}






#endif // INVESTMENT _H
