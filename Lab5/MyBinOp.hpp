//
//  MyBinOp.hpp
//  Lab5
//
//  Created by Fredrik Sellgren on 2018-12-14.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef MyBinOp_hpp
#define MyBinOp_hpp

#include <stdio.h>
#include <algorithm>
#include <numeric>
#include "Car.hpp"
class MyBinOp
{
public:
    MyBinOp(size_t = 0);

    double operator()(const Car &CarP) {
        return CarP._speed / size;
        
    }
private:
    size_t size;
};
#endif /* MyBinOp_hpp */
