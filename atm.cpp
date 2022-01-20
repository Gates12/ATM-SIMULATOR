#include "bank.h"
#include "card.h"
#include "atm.h"

#include<bits/stdc++.h>
using namespace std;
namespace work
{

int Atm::customerCount = 1;
Atm::Atm()
{
    isOn = true;
    cardInserted = true;
    customerCount++;
}
bool Atm::verifyCard(Bank &bankObj, Card &cardObj)
{
    if (bankObj.verifyCardNumber(cardObj.getCardNumber()))
        return true;
    return false;
}
void Atm::reward()
{
    if (customerCount == 500000)
    {
        cout << "--------------------------------------------------------------------------------------\n\n";
        cout << "\t\t\t\tBANK OF IIITL\n\n";

        cout << "WOO HOO!! CONGRATULATIONS!! YOU ARE THE 500000TH CUSTOMER!!YOU HAVE WON A $500 WORTH PRIZE!!!\n\nPLEASE COLLECT IT AT THE MAIN BANK BRANCH\n\n";
        customerCount = 1;
    }
}
bool Atm::verifyPIN(Bank &bankObj)
{
    //       cout<<"--------------------------------------------------------------------------------------\n\n";
    //              cout<<"\t\t\t\t"<<bankObj.getBankName()<<"\n\n";
    cout << "PLEASE ENTER YOUR 4 DIGIT PIN\n\n";
    cin >> PIN;
    cout << "\n\n--------------------------------------------------------------------------------------\n\n";

    if (bankObj.verifyPinBank(PIN))
    {
        reward();
        return true;
    }
    return false;
}

bool Atm::isCardInserted()
{
    return cardInserted;
}

void Atm::switchOff()
{
    if (isCardInserted())
        cardInserted = false;
    isOn = false;
    cout << "--------------------------------------------------------------------------------------\n\n";
    //  cout<<"\t\t\t\t"<<bankObj.getBankName()<<"\n\n";
    cout << "\t\t\t\tBANK OF IIITL\n\n";

    cout << "YOU HAVE BEEN LOGGED OUT SUCCESSFULLY!!\n\nPLEASE DON'T FORGET TO TAKE YOUR ATM CARD WITH YOU\n\n";
    cout << "THANK YOU!! VISIT AGAIN\n\n";
}
}
