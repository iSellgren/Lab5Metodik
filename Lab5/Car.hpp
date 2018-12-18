//
//  Car.hpp
//  Lab5
//
//  Created by Fredrik Sellgren on 2018-12-12.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp
#include <iostream>
#include <stdio.h>
#include <string>
class Car
{
public:
    Car(std::string name = "", double speed = 0.0);
    
    friend bool operator==(const Car& lhs, const Car& rhs);
    
    std::string GetName()
    {
        return _name;
    }
    double GetSpeed()
    {
        return _speed;
    }
private:
    std::string _name;
    double _speed;
    friend class MyPrint;
    friend class SpeedCheck;
    friend class MatchName;
    friend class MyBinOp;
    friend class MyUnOp;

    
};

#endif /* Car_hpp */
