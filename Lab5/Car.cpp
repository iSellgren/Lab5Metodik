//
//  Car.cpp
//  Lab5
//
//  Created by Fredrik Sellgren on 2018-12-12.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#include "Car.hpp"

Car::Car(std::string name, double speed)
:_name(name), _speed(speed)
{
    
}
bool operator==(const Car& lhs, const Car& rhs)
{
    return lhs._name == rhs._name;
}
