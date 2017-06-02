//
//  account.h
//  CSCI373Proj1
//
//  Created by Michael Gonzalez on 3/6/17.
//  Copyright © 2017 @OS. All rights reserved.
//

#ifndef account_h
#define account_h
#include <iostream>
using namespace std;
class account
{
public:
    account (double );
    void credit (double);
    bool debit (double);
    double getBalance ();
    void setBalance (double);
private:
    double balance;
};
#endif
