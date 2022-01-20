#include "bank.h"
#include "card.h"

#include "atm.h"

#include "transaction.h"
#include "operations.h"
#include "deposit.h"
#include<bits/stdc++.h>
using namespace std;
namespace work
{



Deposit::Deposit()
{
}
void Deposit::setCash()
{
    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t\tBANK OF IIITL\n\n";

    cout << "DEPOSIT: ";

    Operations::setCash();
    // this->cash=cash;
}
long long int Deposit::getCash()
{
    return Operations::getCash();
}
bool Deposit::confirmation()
{
    return Operations::confirmation();
}
bool Deposit::isValid(Bank &bankObj)
{
    if (bankObj.checkLimit(getCash()))
        return true;
    cout << "YOUR ACCOUNT BALANCE EXCEEDS THE LIMITED ACCOUNT BALANCE.\nCONTACT THE BANK AUTHORITIES FOR FURTHER DETAILS!!\n\n";
    return false;
}
void Deposit::successMessage()
{
    Operations::successMessage();
    cout << "CREDITED TO YOUR BANK ACCOUNT SUCCESSFULLY!!\n\n";
}
void Deposit::completeTransaction(Bank &bankObj)
{
    bankObj.deposition(getCash());
    successMessage();
}
}
