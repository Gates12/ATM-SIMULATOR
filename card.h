#ifndef __cdaaaaaaaaaaaaaaaaaaa
#define __cdaaaaaaaaaaaaaaaaaaa
#include "bank.h"
#include<bits/stdc++.h>
using namespace std;
namespace work
{

 class Card:public Bank
 {
 private:
    bool retainCard;
    long long int cardNumber;

 public:
    Card();
    Card(long long int);
    void ejectCard();
    long long int getCardNumber();
};

}
#endif

