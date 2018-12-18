//
//  MatchName.hpp
//  Lab5
//
//  Created by Fredrik Sellgren on 2018-12-13.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef MatchName_hpp
#define MatchName_hpp

#include <stdio.h>
#include "Car.hpp"
#include <algorithm>
#include <vector>
class MatchName
{
    
public:
    
    void operator()(const Car &CarP) const {
        
        std::string str;
        str = CarP._name;
        
        auto e = std::end(str), i = std::adjacent_find(std::begin(str), e);
        
        if(i == e)
            std::cout << "No match" <<"\n";
        else do {
            auto next = std::find_if(i, e, [&i](auto const &c){return c != *i;});
            
            std::cout << "Name " << *i << "\n";
            
            i = std::adjacent_find(next, e);
            
        } while(i != e);
    }
};
#endif /* MatchName_hpp */
