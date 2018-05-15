//
//  BinModel02.h
//  Elva_Ye_HW5
//
//  Created by Congqing Ye on 2/24/18.
//  Copyright © 2018 Congqing Ye. All rights reserved.
//

#ifndef BinModel02_h
#define BinModel02_h
class BinModel
{
private:
    double S0;
    double U;
    double D;
    double R;
public:
    //computing risk-neutral probability
    double RiskNeutProb();
    //computing the stock price at node n,i
    double S(int n, int i);
    //inputting, displaying and checking model data
    int GetInputData();
    double GetR();
};

#endif /* BinModel02_h */

