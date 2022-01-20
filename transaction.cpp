#include "bank.h"
#include "card.h"
#include "atm.h"

#include "transaction.h"
#include<bits/stdc++.h>
using namespace std;
namespace work
{

Transaction::Transaction()
{
}
void Transaction::completeTransaction(Bank &bankObj)
{
    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t\tBANK OF IIITL\n\n";

    cout << "WHAT WOULD YOU LIKE TO DO:\n\n";
}
void Transaction::successMessage()
{
    cout << "YOUR CHOICE HAS BEEN ENTERED SUCCESSFULLY\n\n";
}
int Transaction::getChoice()
{
    return choice;
}
bool Transaction::isValid(Bank &bankObj)
{
    if (getChoice() >= 1 && getChoice() <= 6)

        return true;
    return false;
}
void Transaction::setChoice(int choice)
{
    this->choice = choice;
}
}
