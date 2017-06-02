//
//  savingaccount.h
//  CSCI373Proj1
//
//  Created by Michael Gonzalez on 3/6/17.
//  Copyright © 2017 @OS. All rights reserved.
//

#ifndef savingaccount_h
#define savingaccount_h
#include "account.h"

class savingaccount: public account
{
public:
    savingaccount(double balance, double rate);
    double calculateinterest();
    
    void setinterest();
    double getinterest();

private:
    double interests;

};

#endif /* savingaccount_h */
