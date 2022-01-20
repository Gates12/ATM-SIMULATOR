#ifndef __chan
#define __chan
#include<bits/stdc++.h>
using namespace std;
namespace work
{

class Changepin : public Operations
{
    long long int pin;

public:
    Changepin();
    void setCash();
    long long int getCash();
    bool isValid(Bank &);
    void successMessage();
    void completeTransaction(Bank &);
    bool confirmation();
};

}
#endif
