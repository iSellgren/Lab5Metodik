//
//  SpeedCheck.hpp
//  Lab5
//
//  Created by Fredrik Sellgren on 2018-12-12.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef SpeedCheck_hpp
#define SpeedCheck_hpp
#include "Car.hpp"
#include <stdio.h>
#include <iostream>
class SpeedCheck
{
public:
    
    bool operator()(const Car& car, const double speed) const
    {
        return car._speed > speed;
        
    }
};
#endif /* SpeedCheck_hpp */
