//
//  main.cpp
//  Lab5
//
//  Created by Fredrik Sellgren on 2018-12-12.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "Car.hpp"
#include "MyPrint.hpp"
#include "SpeedCheck.hpp"
#include "MatchName.hpp"
#include "MyBinOp.hpp"
#include "MyFunc.hpp"
#include "MyUnOp.hpp"
int main(int argc, const char * argv[]) {
    Car carArray [4];
    carArray[0]= Car("Volvo", 120.0);
    carArray[1] = Car("BMW",260.0);
    carArray[2] = Car("BMW",260.0);
    carArray[3] = Car("Saab",150.0);
    
    
    
    int ArraySize = sizeof(carArray) / sizeof(carArray[0]);
    
    
    std::vector<Car> carVec (carArray,carArray + ArraySize);
    
    std::for_each(carVec.begin(), carVec.end(), MyPrint());
    
    
    std::cout <<"     #################################    2    #################################" "\n";
    SpeedCheck new_comp;
    double value = 130;
    auto found = std::find_if(carVec.begin(), carVec.end(),[new_comp ,&value](Car &e)
    {
        return(new_comp(e,value));
    });
    
    std::cout << found->GetName() <<" Speed at "<< found->GetSpeed() << "\n";
    
    std::cout <<"     #################################    3    #################################" "\n";
    
    auto foundIt = std::adjacent_find(carVec.begin(), carVec.end());
    if (foundIt == carVec.end()) {
        std::cout << "no matching adjacent elements\n";
    } else {
        std::cout << foundIt->GetName() << " @ pos " << std::distance(carVec.begin(), foundIt) << '\n';
    }

    
    std::cout <<"     #################################    4    #################################" "\n";
    
    if (std::equal(carVec.begin(), carVec.end(), carArray))
        std::cout << "They are equal " "\n";
    else{
        std::cout << "They are not equal " "\n";
    }
    std::cout <<"     #################################    5    #################################" "\n";
    

    std::vector<Car>::iterator it;
    it = std::search(carVec.begin(), carVec.end(), std::begin(carArray),std::end(carArray));
    
    if(it != carVec.end())
        std::for_each(it, carVec.end(), MyPrint());
    
    
    
    std::cout <<"     #################################    6    #################################" "\n";
    
    MyBinOp Bin(carVec.size());
    
    auto mean = std::accumulate(carVec.begin(), carVec.end(),0.0, [&](double x, Car &c) //0.0 är return type
    {
       return x += Bin(c);
    });
    std::cout << mean << "\n";
    
    std::cout <<"     #################################    7    #################################" "\n";
    
    
    std::vector<double> v2(carVec.size());
    MyUnOp Un;
    
//    std::transform(carVec.begin(), carVec.end(), v2.begin(), [](Car &e) -> double { return e.GetSpeed(); });
    std::transform(carVec.begin(), carVec.end(), v2.begin(),Un);
    for(auto i : v2)
    std::cout << i << "\n";
    
   std::cout <<"     #################################    8    #################################" "\n";
    
    MyFunc func(mean);
    std::transform(v2.begin(), v2.end(), v2.begin(), func);
    for(auto i : v2)
    std::cout << i << "\n";
    
    std::cout <<"     #################################    9    #################################" "\n";
    
    
    std::sort(v2.begin(), v2.end(), std::less<>());
    for(auto i : v2)
    std::cout << i << "\n";
    std::cout << "Hello, World!\n";
    return 0;
}
