#ifndef INVESTMENTMANAGEMENT_H
#define INVESTMENTMANAGEMENT_H
#include"Investment.h"
#include <math.h>

class InvestmentManagement
{
    public:

        bool BalanceOperation(Investment *investment, double amout, bool to_add, bool to_substract);
        bool TermOperation(Investment *investment,double years, bool to_add, bool to_substract);
        bool InterestOperation(Investment *investment,double percentage, bool to_add, bool to_substract);
        bool ProfitEsteem(Investment *investment);
        bool InvestmentCurrencyConversion(Investment *investment);
        bool InvestmentRefresh(Investment * investment);
        bool CapitalizationTermsOperation(Investment *investment,int amout_of_terms, bool to_add, bool to_substract);

};

#endif // INVESTMENTMANAGEMENT_H
