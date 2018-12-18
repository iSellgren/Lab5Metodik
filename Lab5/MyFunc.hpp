//
//  MyFunc.hpp
//  Lab5
//
//  Created by Fredrik Sellgren on 2018-12-14.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef MyFunc_hpp
#define MyFunc_hpp

#include <stdio.h>
class MyFunc
{
public:
    
    MyFunc(double arg);
    
    double operator()(double arg)
    {
        return arg - mean;
    }
private:
    double mean = 0;
};
#endif /* MyFunc_hpp */
