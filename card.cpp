
#include "bank.h"
#include "card.h"


#include<bits/stdc++.h>
using namespace std;
namespace work
{

Card::Card()
{
    retainCard = true;
}
Card::Card(long long int cardNumber)
{
    this->cardNumber = cardNumber;
    // cout<<"success"<<endl;
}
void Card::ejectCard()
{
    retainCard = false;
}
long long int Card::getCardNumber()
{
    return cardNumber;
}
}
