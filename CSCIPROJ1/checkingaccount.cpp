//
//  checkingaccount.cpp
//  CSCI373Proj1
//
//  Created by Michael Gonzalez on 3/7/17.
//  Copyright © 2017 @OS. All rights reserved.
//
#include <stdio.h>
#include "checkingaccount.h"
#include "account.h"
checkingaccount::checkingaccount (double balance, double fee): account (balance)
{
   fee = (fee < 0.0) ? 0.0 : fee;
}
void checkingaccount::credit(double value)
{
    account::credit (value);
    chargeFee();
}
bool checkingaccount::debit (double amount)
{
    bool success = account::debit (amount);
    
    if (success)
    {
        chargeFee();
        return true;
    }
    else
        return false;
}

void checkingaccount::chargeFee()
{
    account::setBalance( getBalance() - fee);
    cout << "$:" << fee << "fee has been charged." << endl;
}

