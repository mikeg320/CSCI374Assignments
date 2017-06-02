//
//  main.cpp
//  CSCI373Proj1
//
//  Created by Michael Gonzalez on 3/7/17.
//  Copyright © 2017 @OS. All rights reserved.
//


#include <iostream>
#include <iomanip>
#include "account.h"
#include "checkingaccount.h"
#include "savingaccount.h"
using namespace std;
int main()
{
    account Account1 (200.0);
    savingaccount savings (10.0, .3);
    checkingaccount checking (90.0, 1.25);
    
    
  // ACCOUNT BALANCES
    cout << "Account initial balance: $" << Account1.getBalance() << endl;
    cout << "Savings initial balance: $" << savings.getBalance() << endl;
    cout << "Checking initial balance: $" << checking.getBalance() << endl;
    //ACCOUNT TEST
    cout << "Withdrawing $61.00 from the Account." << endl;
    Account1.debit (61.0);
    cout << "Balance is now $" << Account1.getBalance() << endl;
    
    cout << "Withdrawing $30.00 from Savings." << endl;
    savings.debit (30.0);
    cout << "Balance is now $" << savings.getBalance() << endl;
    
    cout << "Withdrawing $75.00 form Checkings." << endl;
    checking.debit (75.0);
    cout << "Balance is now $" << checking.getBalance() << endl;
    
    // Credit TEST
    cout << "Credit $90.00 to Account. " << endl;
    Account1.credit (90.0);
    cout << "Balance is now $" << Account1.getBalance() << endl;
    
    cout << "Credit $60.00 to Savings. " << endl;
    savings.credit (60.0);
    cout << "Balance is now $" << savings.getBalance() << endl;
    
    cout << "Credit $20.00 to Checking. " << endl;
    checking.credit (20.0);
    cout << "Balance is now $" << checking.getBalance() << endl;
    //RATE CHECKER
    
    double interestRate = savings.calculateinterest();
    cout << " Applying %" << interestRate << " interest rate to saving account." << endl;
    savings.credit (interestRate);
    cout << "Balance in Savings account is now $" << savings.getBalance() << endl;
    
    return 0;
}
