#ifndef __atm
#define __atm
#include<bits/stdc++.h>
namespace work
{

class Atm
{
private:
    bool isOn;
    bool cardInserted;
    long long int PIN;
    static int customerCount;

public:
    Atm();
    bool verifyCard(Bank &, Card &);
    bool verifyPIN(Bank &);
    bool isCardInserted();
    void switchOff();
    static void reward();
};
}
#endif
