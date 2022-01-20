#ifndef __trans
#define __trans
#include<bits/stdc++.h>
using namespace std;
namespace work
{
class Transfer : public Deposit, public Withdrawal
{

public:
    Transfer();
    void setCash();
    long long int getCash();
    bool isValid(Bank &);
    void successMessage();
    void completeTransaction(Bank &);
    bool confirmation();
};

}
#endif

