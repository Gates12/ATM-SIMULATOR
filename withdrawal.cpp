#include "bank.h"
#include "card.h"

#include "atm.h"

#include "transaction.h"
#include "operations.h"
#include "deposit.h"
#include "withdrawal.h"
#include<bits/stdc++.h>
using namespace std;
namespace work
{

Withdrawal::Withdrawal()
{
}
void Withdrawal::setCash()
{
    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t\tBANK OF IIITL\n\n";

    cout << "WITHDRAWAL: ";

    Operations::setCash();
}
long long int Withdrawal::getCash()
{
    return Operations::getCash();
}
bool Withdrawal::confirmation()
{
    return Operations::confirmation();
}
bool Withdrawal::isValid(Bank &bankObj)
{
    if (bankObj.sufficientFunds(getCash()))
        return true;
    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t\tBANK OF IIITL\n\n";
    cout << "ENTERED AMOUNT IS GREATER THAN THE BALANCE AMOUNT!!\nYOUR ACCOUNT HAS INSUFFICIENT BALANCE\nSORRY CANNOUT PROCESS!!\n\n";
    return false;
}
void Withdrawal::successMessage()
{
    Operations::successMessage();
    cout << "DEBITED FROM YOUR ACCOUNT SUCCESSFULLY!!\nPLEASE COLLECT THE CASH!!\n\n";
}
void Withdrawal::completeTransaction(Bank &bankObj)
{
    bankObj.withdrawal(getCash());
    successMessage();
}

}
