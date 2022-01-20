#include "bank.h"
#include "card.h"

#include "atm.h"

#include "transaction.h"
#include "operations.h"
#include<bits/stdc++.h>
using namespace std;
namespace work
{

Operations::Operations()
{
}
void Operations::setCash()
{

    cout << "PLEASE ENTER THE AMOUNT\n\n";
    cin >> cash;
    cout << "\n\n";
}
long long int Operations::getCash()
{
    return cash;
}
bool Operations::confirmation()
{
    int i;

    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t\tBANK OF IIITL\n\n";

    cout << "YOU HAVE ENTERED " << getCash() << ".\nDO YOU WISH TO PROCEED\n1.YES,PROCEED\n2.NO,LET ME ENTER THE AMOUNT AGAIN\n\n";
    cin >> i;
    cout << "\n\n";
    switch (i)
    {
    case 1:
    {
        confirm = true;
        return confirm;
    }
    case 2:
    {
        confirm = false;
        return confirm;
    }
    default:
    {
        cout << "INVALID INPUT!!\nTRY AGAIN\n\n";
        return false;
    }
    }
}
void Operations::successMessage()
{
    cout << "PROCESSING\n\nTHE AMOUNT " << getCash() << " HAS BEEN ";
}

}	
