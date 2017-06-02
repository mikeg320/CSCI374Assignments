//
//  account.cpp
//  CSCI373Proj1
//
//  Created by Michael Gonzalez on 3/6/17.
//  Copyright © 2017 @OS. All rights reserved.
//

#include<iostream>
#include "account.h"
using namespace std;

account::account (double intbal)
{
    
    if (intbal>=0.0)
    {
        balance = intbal;
    }
    else
        {
        cout<<"Invalid balance. Balance will be set to 0."<<endl;
        balance =0.0;
    }
}
void account::credit (double value)
    {
    balance = balance + value;
    }
bool  account::debit ( double value)
{
    if (value>balance)
    {
        cout<<"insufficient funds"<<endl;
        return false;
    }
    else
    {
    balance=balance -value;
    return true;
    }
}
void account::setBalance(double newValue)
{
    balance = newValue;
}
double account::getBalance()
{
    return balance;
}
