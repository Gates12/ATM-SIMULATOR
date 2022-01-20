#ifndef __wi
#define __wi
#include<bits/stdc++.h>
using namespace std;
namespace work
{
class Withdrawal : virtual public Operations
{
public:
    Withdrawal();
    void setCash();
    long long int getCash();
    bool isValid(Bank &);
    void successMessage();
    void completeTransaction(Bank &);
    bool confirmation();
};

}
#endif
