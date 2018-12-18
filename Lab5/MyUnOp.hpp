//
//  MyUnOp.hpp
//  Lab5
//
//  Created by Fredrik Sellgren on 2018-12-14.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef MyUnOp_hpp
#define MyUnOp_hpp

#include <stdio.h>
#include "Car.hpp"

class MyUnOp
{
public:
    
    double operator()(const Car &CarP) {
        
        return CarP._speed;
    }
};

#endif /* MyUnOp_hpp */
