//
//  savingsaccount.cpp
//  CSCI373Proj1
//
//  Created by Michael Gonzalez on 3/6/17.
//  Copyright © 2017 @OS. All rights reserved.
//

#include <stdio.h>
#include "savingaccount.h"
#include "account.h"
using namespace std;
savingaccount::savingaccount (double balance, double rate): account(balance)
{
    interests = (rate < 0.0) ? 0.0 : rate;
}

double savingaccount::calculateinterest()
{
    return getBalance() * interests * 1;
}

