#include<machine_learning.h>
#include<iostream>

int PredictHousing(){
    const auto prices = GetHousePrices(100.0, 1000000.0, 5);
    std::cout 
        << "Upcoming price: "
        << PredictNumber(prices);
    return 0;
}