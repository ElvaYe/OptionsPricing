//
//  Options.cpp
//  Elva_Ye_HW5
//
//  Created by Congqing Ye on 2/24/18.
//  Copyright © 2018 Congqing Ye. All rights reserved.
//

#include "Options.h"
#include <iostream>
using namespace std;
int Strangle::GetInputData()
{     cout << "Enter European strangle option data:" << endl;
    int N;
    cout << "Enter steps to expiry N: "; cin >> N;
    SetN(N);
    cout << "Enter parameter K1:      "; cin >> K1;
    cout << "Enter parameter K2:      "; cin >> K2;
    cout << endl;
    return 0;
}
double Strangle::Payoff(double z)
{
    if (z<=K1) return K1-z;
    else if (z>K2) return z-K2;
    return 0.0;
}

int Butterfly::GetInputData()
{     cout << "Enter European butterfly spread option data:" << endl;
    int N;
    cout << "Enter steps to expiry N: "; cin >> N;
    SetN(N);
    cout << "Enter parameter K1:      "; cin >> K1;
    cout << "Enter parameter K2:      "; cin >> K2;
    cout << endl;
    return 0;
}
double Butterfly::Payoff(double z)
{
    if (z>K1 && z<=(K1+K2)/2) return z-K1;
    else if (z>(K1+K2)/2 && z<K2) return K2-z;
    return 0.0;
}


