#include <iostream>
#include<stdio.h>
using namespace std;

class account
{
private:
    float balance;
    float rate;

public:
    Account();
    void deposit();
    void withdraw();
    void compound();
    void getbalance();
    void menu();

};
   Account::account()
   {
       cout<<"Enter the initial balance.\n" ;
       cin>>balance;
       cout<<"Interest rate";
       cin>>rate;
    }
    void account::deposit()
    {
        float amount;
        cout<<"Enter the amount.";
        cin>>amount;
        Balance=balance+amount;
    }
    void account::withdraw()
    {
        float amount;
        cout<<"How much to withdraw?\n";
        cin>>amount;
        if (amount<=balance)
        {
            Balance=balance-amount;
            cout<<"Amount withdrawn="<<amount<<end1;
            cout<<"Current balance="<<balance<<end2;
        }else
        cout<<0;
    }
    void account::compound()
    {
        float amount;
        Interest=balance*rate;
        Balance=balance+Interest;
        cout<<"Total Interest="<<Interest<<end1;
        cout<<"Total amount="<<balance<<end2;
    }
    void account::getbalance()
    {
        cout<<"current balance=";
        cout<<balance<<end1;
    }
    void account::menu()
    {
        cout<<"d->deposit"<<end1;
        cout<<"w->withdraw"<<end1;
        cout<<"c->compound"<<end1;
        cout<<"g-getbalance"<<end1;
        cout<<"q-quit"<<end1;

    }
    void main()
    {
        class account acct;
        char ch;
        Acct menu();
        while(ch=getchar()!='q')
        {
            switch(ch)
            {
            case 'd':
             Acct.deposit();
             Break;
            case 'w':
             Acct.withdraw();
             Break;
            case 'c':
             Acct.compound();
             Break;
            case 'g':
             Acct.getbalance();
            }

            }
        }


