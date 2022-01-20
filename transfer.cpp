#include "bank.h"
#include "card.h"

#include "atm.h"

#include "transaction.h"
#include "operations.h"
#include "deposit.h"
#include "withdrawal.h"
#include "transfer.h"

#include<bits/stdc++.h>
using namespace std;
namespace work
{

Transfer::Transfer()
{
}
void Transfer::setCash()
{
    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t\tBANK OF IIITL\n\n";
    cout << "FUND TRANSFER: ";
    Operations::setCash();
}
long long int Transfer::getCash()
{
    return Operations::getCash();
}
bool Transfer::isValid(Bank &bankObj)
{
    if (bankObj.ispresent())
    {
        if (bankObj.sufficientFunds(getCash()))
        {
            return true;
        }
        cout << "ENTERED AMOUNT IS GREATER THAN THE BALANCE AMOUNT!!\nSORRY CANNOUT PROCESS!!\nYOUR ACCOUNT HAS INSUFFIECIENT BALANCE\n\n";
        return false;
    }
    cout << "SORRY!! RECIEPIENT ACCOUNT NOT FOUND\n\nPLEASE ENTER A VALID RECIEPIENT ACCOUNT\n";
    return false;
}
bool Transfer::confirmation()
{
    return Operations::confirmation();
}
void Transfer::successMessage()
{
    Operations::successMessage();
    cout << "DEBITED FROM YOUR ACCOUNT AND CREDITED TO THE RECEIPIENT ACCOUNT SUCCESSFULLY!!!\n\n";
}
void Transfer::completeTransaction(Bank &bankObj)
{
    bankObj.fundTransfer(getCash());
    successMessage();
}


}

