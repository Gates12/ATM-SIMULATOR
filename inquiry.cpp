#include "bank.h"
#include "card.h"

#include "atm.h"

#include "transaction.h"
#include "operations.h"
#include "deposit.h"
#include "withdrawal.h"
#include "transfer.h"

#include "inquiry.h"
#include<bits/stdc++.h>
using namespace std;
namespace work
{



Inquiry::Inquiry()
{
}
void Inquiry::getBalanceDetails(Bank &bankObj)
{
    cout << "YOUR AVAILABLE BANK BALANCE IS: " << bankObj.printBalance() << "\n\n";
}

}
