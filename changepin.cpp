#include "bank.h"
#include "card.h"

#include "atm.h"

#include "transaction.h"
#include "operations.h"
#include "deposit.h"
#include "withdrawal.h"
#include "transfer.h"

#include "inquiry.h"
#include "changepin.h"
#include<bits/stdc++.h>
using namespace std;
namespace work
{
Changepin::Changepin()
{
}
long long int Changepin::getCash()
{
    return Operations::getCash();
}
void Changepin::setCash()
{
    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t\tBANK OF IIITL\n\n";
    cout << "ENTER YOUR NEW 4-DIGIT PIN:\n\n";
    cin >> pin;
}
bool Changepin::confirmation()
{
    int i;

    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t\tBANK OF IIITL\n\n";

    cout << "YOU HAVE ENTERED " << pin << " AS YOUR NEW PIN.\n\nDO YOU WISH TO PROCEED\n1.YES,PROCEED\n2.NO,LET ME ENTER IT AGAIN\n\n";
    cin >> i;
    cout << "\n\n";
    switch (i)
    {
    case 1:
    {
        return true;
    }
    case 2:
    {
        return false;
    }
    default:
    {
        cout << "INVALID INPUT!!\nTRY AGAIN\n\n";
        return false;
    }
    }
}
bool Changepin::isValid(Bank &bankobj)
{
    if (bankobj.isPinValid(pin))
        return true;
    cout << "YOU HAVE ENTERED AN INVALID PIN!!\nPLEASE TRY AGIAN!!\n\n";
    return false;
}
void Changepin::successMessage()
{
    cout << "YOUR PIN WAS CHANGED SUCCESSFULLY!!\nPLEASE REMEMBER TO USE THE NEWLY UPDATED PIN FROM NEXT TIME\n\n";
}
void Changepin::completeTransaction(Bank &bankObj)
{
    bankObj.updatePin(pin);
    successMessage();
}

}
