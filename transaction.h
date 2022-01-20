#ifndef __t
#define __t
#include<bits/stdc++.h>
using namespace std;
namespace work
{
class Transaction : public Atm
{
private:
    int choice;

public:
    Transaction();
    void setChoice(int);
    virtual void completeTransaction(Bank &);
    virtual void successMessage();
    virtual bool isValid(Bank &);
    int getChoice();
};

}
#endif
