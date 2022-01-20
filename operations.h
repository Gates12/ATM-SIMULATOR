#ifndef __o
#define __o
#include<bits/stdc++.h>
using namespace std;
namespace work
{
class Operations : public Transaction
{
private:
    long long int cash;
    bool confirm;

public:
    Operations();
    virtual void setCash();
    virtual long long int getCash();
    virtual bool confirmation();
    virtual void successMessage();
};

}
#endif
