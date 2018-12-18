//
//  MyPrint.hpp
//  Lab5
//
//  Created by Fredrik Sellgren on 2018-12-12.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef MyPrint_hpp
#define MyPrint_hpp

#include <stdio.h>
#include "Car.hpp"
class MyPrint
{
public:
    
    void operator()(const Car &CarP) const {
        std::cout << CarP._name << " " << CarP._speed << "\n";
    }
    
private:
    

};

#endif /* MyPrint_hpp */
