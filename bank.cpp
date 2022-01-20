#include "bank.h"
#include<bits/stdc++.h>
using namespace std;
namespace work
{
void Bank::store()
{
accountDetails.push_back({100000, 1234, 890933});
    accountDetails.push_back({100001, 1235, 89065});
    accountDetails.push_back({100002, 1236, 8903359});
    accountDetails.push_back({100003, 1237, 890942});
    accountDetails.push_back({100004, 1238, 89049});
    accountDetails.push_back({100005, 1239, 89096});
    accountDetails.push_back({100006, 1230, 80955});
    accountDetails.push_back({100007, 1231, 90934});
    accountDetails.push_back({100008, 1232, 44909});
    accountDetails.push_back({100009, 1233, 8509});

    customerName.push_back("Eren Yeager");
    customerName.push_back("Mikasa Ackerman");
    customerName.push_back("Armin Arlert");
    customerName.push_back("Levi Ackerman");
    customerName.push_back("Ross Geller");
    customerName.push_back("Monica Geller");
    customerName.push_back("Rachel Green");
    customerName.push_back("Pheobe Buffay");
    customerName.push_back("Chandler Bing");
    customerName.push_back("Joey Tribbiani");
}

Bank::Bank()
{
    bankName = "BANK OF IIITL";
    limit = 10000000;
    store();
}
string Bank::getBankName()
{
    return bankName;
}
string Bank::getCustomerName(int i)
{
    return customerName[i];
}
bool Bank::verifyCardNumber(long long int x)
{
    for (int i = 0; i < 10; i++)
    {
        if (x == accountDetails[i][0])
        {
            counter = i;
            cout << "--------------------------------------------------------------------------------------\n\n";
            cout << "\t\t\t\tBANK OF IIITL\n\n";
            cout << "Hello, " << getCustomerName(counter) << ". Welcome to the " << getBankName() << " !!!\n\n"
                 << endl;
            return true;
        }
    }
    return false;
}
bool Bank::verifyPinBank(long long int pin)
{
    if (pin == accountDetails[counter][1])
        return true;
    return false;
}
bool Bank::checkLimit(long long int cash)
{
    if (accountDetails[counter][2] + cash <= limit)
    {
        return true;
    }
    return false;
}
void Bank::deposition(long long int cash)
{
    accountDetails[counter][2] += cash;
    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t" << getBankName() << "\n\n";
    cout << "AFTER THE TRANSACTION, YOUR CURRENT BALANCE IS " << accountDetails[counter][2] << "\n\n";
}
bool Bank::sufficientFunds(long long int cash)
{
    if (accountDetails[counter][2] >= cash)
        return true;
    return false;
}
void Bank::withdrawal(long long int cash)
{
    accountDetails[counter][2] -= cash;
    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t" << getBankName() << "\n\n";
    cout << "AFTER THE TRANSACTION, YOUR CURRENT BALANCE IS " << accountDetails[counter][2] << "\n\n";
}
bool Bank::isPinValid(long long int pin)
{
    if (to_string(pin).size() == 4)
        return true;
    return false;
}
void Bank::updatePin(long long int pin)
{
    accountDetails[counter][1] = pin;
}
long long int Bank::printBalance()
{
    return accountDetails[counter][2];
}
bool Bank::ispresent()
{
    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t" << getBankName() << "\n\n";
    cout << "ENTER THE ACCOUNT NUMBER OF THE RECIEPIENT:\n\n";
    cin >> recipient;
    cout << "\n\n";

    for (int i = 0; i < 10; i++)
    {
        if (accountDetails[i][0] == recipient)
        {
            counter2 = i;
            return true;
        }
    }
    return false;
}
void Bank::fundTransfer(long long int cash)
{
    accountDetails[counter][2] -= cash;
    accountDetails[counter2][2] += cash;
    cout << "--------------------------------------------------------------------------------------\n\n";
    cout << "\t\t\t" << getBankName() << "\n\n";
    cout << "AFTER THE TRANSACTION, YOUR CURRENT BALANCE IS " << accountDetails[counter][2] << "\n\n";
}
}
