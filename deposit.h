#ifndef __deposit
#define __deposit
#include<bits/stdc++.h>
using namespace std;
namespace work
{
class Deposit : virtual public Operations
{

public:
    Deposit();
    void setCash();
    long long int getCash();
    bool isValid(Bank &);
    void successMessage();
    void completeTransaction(Bank &);
    bool confirmation();
};

}
#endif
