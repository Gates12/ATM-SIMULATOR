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
using namespace work;
int main()
{
    Bank bankObj;
    long long int cardnumber;
    // bool switch=false;
    while (1)
    {
        int k;
        cout << "--------------------------------------------------------------------------------------\n\n";
        cout << "\t\t\t\t" << bankObj.getBankName() << "\n\n";
        cout << "WELCOME!!\n\n";
        cout << "WHAT WOULD YOU LIKE TO DO?\n\n";
        cout << "1.LOGIN\n\n";
        cout << "2.SWITCH OFF ATM\n\n";
        cin >> k;
        cout << "\n\n";
        if (k == 1)
        {
            cout << "--------------------------------------------------------------------------------------\n\n";
            cout << "\t\t\t\t" << bankObj.getBankName() << "\n\n";
            cout << "PLEASE INSERT YOUR CARD HERE(Enter Your Card Number):\n\n";
            cin >> cardnumber;
            //   cout<<"--------------------------------------------------------------------------------------\n\n";;
            //    cout<<"\t\t\t\t"<<bankObj.getBankName()<<"\n\n";
            cout << "\n\n";
            Card cardObj;
            Card cardObj2(cardnumber);
            Atm atmObj;
            cout << "--------------------------------------------------------------------------------------\n\n";
            cout << "\t\t\t\tBANK OF IIITL\n\n";

            cout << "PLEASE WAIT!!\nREADING THE CARD\n\n\n";
            bool worked = false;
            if (atmObj.verifyCard(bankObj, cardObj2))
            {
                int t = 3;
                while (t--)
                {
                    if (atmObj.verifyPIN(bankObj))
                    {
                        cout << "\t\t\t\t" << bankObj.getBankName() << "\n\n";

                        cout << "YOU HAVE BEEN LOGGED IN SUCCESSFULLY\n\n"
                             << endl;
                        worked = true;
                        break;
                    }
                    cout << "--------------------------------------------------------------------------------------\n\n";
                    cout << "\t\t\t\t" << bankObj.getBankName() << "\n\n";

                    cout << "\n\nWRONG PIN!!!\n\nPLEASE TRY AGAIN\nYOU HAVE " << t << " ATTEMPTS\n\n";
                }
                if (worked == false)
                {
                    cout << "--------------------------------------------------------------------------------------\n\n";
                    cout << "\t\t\t\t" << bankObj.getBankName() << "\n\n";

                    cout << "\n\nTOO MANY UNSUCCESSFUL ATTEMPTS!!! \n\nYOUR ACCOUNT HAS BEEN BLOCKED FOR THE DAY!!!\n\nPLEASE TRY AGAIN TOMORROW\n\n";
                    exit(0);
                }
            }
            else
            {
                cout << "--------------------------------------------------------------------------------------\n\n";
                cout << "\t\t\t\t" << bankObj.getBankName() << "\n\n";

                cout << "\n\nSORRY\n\nSEEMS LIKE YOU HAVE ENTERED THE WRONG CARD NUMBER :(\nPLEASE TRY AGAIN!!!\n\n";
                exit(0);
            }

            //add atmObj.switchOff() towards the end

            if (worked == true)
            {
                Transaction transactionObj;

                bool exit = false;
                while (1)
                {
                    //  cout<<"--------------------------------------------------------------------------------------\n\n";
                    //      cout<<"\t\t\t\t"<<bankObj.getBankName()<<endl;

                    transactionObj.completeTransaction(bankObj);
                    int choice;
                    cout << "1.WITHDRAWAL\t\t\t"
                         << "2.FUND TRANSFER\n\n";
                    cout << "3.BALANCE INQUIRY\t\t"
                         << "4.DEPOSIT CASH\n\n";
                    cout << "5.PIN CHANGE\t\t\t"
                         << "6.LOG OUT\n\n";
                    cin >> choice;
                    cout << "--------------------------------------------------------------------------------------\n\n";
                    cout << "\t\t\t\t" << bankObj.getBankName() << "\n\n";
                    transactionObj.successMessage();
                    Operations operationsObj;

                    switch (choice)
                    {
                    case 1:
                    {
                        cout << "--------------------------------------------------------------------------------------\n\n";
                        cout << "\t\t\t\t" << bankObj.getBankName() << endl;

                        int i;
                        cout << "\n\nYOU HAVE SELECTED WITHDRAWAL.\n\nDO YOU WISH TO PROCEED\n1.YES,PROCEED\n2.NO\n\n";
                        cin >> i;
                        cout << "\n\n";
                        if (i == 1)
                        {
                            Withdrawal withdrawalObj;
                            while (1)
                            {
                                withdrawalObj.setCash();
                                if (withdrawalObj.confirmation())
                                    break;
                            }
                            if (withdrawalObj.isValid(bankObj))
                            {
                                withdrawalObj.completeTransaction(bankObj);
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        cout << "--------------------------------------------------------------------------------------\n\n";
                        cout << "\t\t\t\t" << bankObj.getBankName() << endl;
                        int i;
                        cout << "\n\nYOU HAVE SELECTED FUND TRANSFER.\n\nDO YOU WISH TO PROCEED\n1.YES,PROCEED\n2.NO\n\n";
                        cin >> i;
                        cout << "\n\n";
                        if (i == 1)
                        {

                            Transfer transferObj;

                            while (1)
                            {
                                transferObj.setCash();
                                if (transferObj.confirmation())
                                    break;
                            }
                            if (transferObj.isValid(bankObj))
                            {
                                transferObj.completeTransaction(bankObj);
                            }
                        }
                        break;
                    }
                    case 3:
                    {
                        cout << "--------------------------------------------------------------------------------------\n\n";
                        cout << "\t\t\t\t" << bankObj.getBankName() << endl;
                        int i;
                        cout << "\n\nYOU HAVE SELECTED BALANCE INQUIRY.\n\nDO YOU WISH TO PROCEED\n1.YES,PROCEED\n2.NO\n\n";
                        cin >> i;
                        cout << "\n\n";
                        if (i == 1)
                        {
                            Inquiry inquiryObj;
                            inquiryObj.getBalanceDetails(bankObj);
                        }

                        break;
                    }
                    case 4:
                    {
                        cout << "--------------------------------------------------------------------------------------\n\n";
                        cout << "\t\t\t\t" << bankObj.getBankName() << endl;

                        int i;
                        cout << "\n\nYOU HAVE SELECTED DEPOSIT.\n\nDO YOU WISH TO PROCEED\n1.YES,PROCEED\n2.NO\n\n";
                        cin >> i;
                        cout << "\n\n";
                        if (i == 1)
                        {

                            Deposit depositObj;
                            while (1)
                            {
                                depositObj.setCash();
                                if (depositObj.confirmation())
                                    break;
                            }
                            if (depositObj.isValid(bankObj))
                            {
                                depositObj.completeTransaction(bankObj);
                            }
                        }
                        break;
                    }
                    case 5:
                    {
                        cout << "--------------------------------------------------------------------------------------\n\n";
                        cout << "\t\t\t\t" << bankObj.getBankName() << endl;
                        int i;
                        cout << "\n\nYOU HAVE SELECTED PIN CHANGE.\n\nDO YOU WISH TO PROCEED\n1.YES,PROCEED\n2.NO\n\n";
                        cin >> i;
                        cout << "\n\n";
                        if (i == 1)
                        {
                            if (atmObj.verifyPIN(bankObj))

                            {

                                Operations Obj;
                                Changepin changepinObj;
                                while (1)
                                {
                                    changepinObj.setCash();
                                    if (changepinObj.confirmation())
                                    {
                                        break;
                                    }
                                }
                                if (changepinObj.isValid(bankObj))
                                {
                                    changepinObj.completeTransaction(bankObj);
                                }
                            }
                            else
                            {
                                cout << "WRONG PIN!!\nPLEASE TRY AGAIN\n\n";
                            }
                        }
                        break;
                    }
                    case 6:
                    {
                        cout << "--------------------------------------------------------------------------------------\n\n";
                        cout << "\t\t\t\t" << bankObj.getBankName() << endl;

                        int i;
                        cout << "DO YOU WISH TO LOGOUT?\n1.YES,LOGOUT\n2.NO\n\n";
                        cin >> i;
                        cout << "\n\n";
                        if (i == 1)
                        {
                            exit = true;
                        }
                        break;
                    }
                    default:
                    {
                        cout << "--------------------------------------------------------------------------------------\n\n";
                        cout << "\t\t\t\t" << bankObj.getBankName() << endl;

                        cout << "invalid input :( please try again";
                    }
                    }
                    if (exit)
                    {
                        // cout << "--------------------------------------------------------------------------------------\n\n";
                        // cout << "\t\t\t\t" << bankObj.getBankName() << endl;

                        atmObj.switchOff();

                        break;
                    }
                }
            }
        }
        if (k == 2)
        {
            int j;
            cout << "--------------------------------------------------------------------------------------\n\n";
            cout << "\t\t\t\t" << bankObj.getBankName() << "\n\n";
            cout << "DO YOU REALLY WISH TO SWITCH OFF THE ATM:\n\n1.YES,SWITCH OFF\n2.NO\n\n";
            cin >> j;
            cout << "\n\n";
            if (j == 1)
            {
                cout << "--------------------------------------------------------------------------------------\n\n";
                cout << "\t\t\t\t" << bankObj.getBankName() << "\n\n";
                cout << "SWITCHING OFF THE ATM!!\n\n\n";
                cout << "--------------------------------------------------------------------------------------\n\n";
                break;
            }
            else if (j == 2)
                continue;
            else
                cout << "INVALID ENTRY!!\nPLEASE TRY AGAIN!!\n\n";
        }
        else if (k != 1 && k != 2)
        {
            cout << "INVALID ENTRY!!\nPLEASE TRY AGAIN!!\n\n";
        }
    }
}

