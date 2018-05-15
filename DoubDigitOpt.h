//
//  DoubDigitOpt.h
//  Elva_Ye_HW5
//
//  Created by Congqing Ye on 2/24/18.
//  Copyright © 2018 Congqing Ye. All rights reserved.
//

#ifndef DoubDigitOpt_h
#define DoubDigitOpt_h
#include "Options06.h"
class DoubDigitOpt: public EurOption
{
private:
    double K1; //parameter 1
    double K2; //parameter 2
public:
    int GetInputData();
    double Payoff(double z);
};
#endif


