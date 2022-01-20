#ifndef __bank
#define __bank
#include<bits/stdc++.h>
using namespace std;
namespace work
{

class Bank
{
private:
    string bankName;
    long long int limit, recipient;
    vector<string> customerName;
    vector<vector<long long int>> accountDetails;
    int counter, counter2;

public:
    Bank();
    string getBankName();
    string getCustomerName(int);
    void store();
    bool verifyCardNumber(long long int);
    bool verifyPinBank(long long int);
    bool checkLimit(long long int);
    void deposition(long long int);
    bool sufficientFunds(long long int);
    void withdrawal(long long int);
    bool isPinValid(long long int);
    void updatePin(long long int);
    long long int printBalance();
    bool ispresent();
    void fundTransfer(long long int);
};
}
#endif

