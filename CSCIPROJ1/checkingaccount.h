//
//  checkingaccount.h
//  CSCI373Proj1
//
//  Created by @OS on 3/7/17.
//  Copyright © 2017 @OS. All rights reserved.
//

#ifndef checkingaccount_h
#define checkingaccount_h
#include "account.h"
class checkingaccount: public account
{

public:
    checkingaccount (double balance, double fee);
    void credit (double balance);
    bool debit (double balance);
    void chargeFee();
    
    
private:
    double fee;
};

#endif /* checkingaccount_h */
