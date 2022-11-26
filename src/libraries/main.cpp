#include<machine_learning.h>
#include<iostream>
#include<vector>

using std::cout;
using std::endl;


int main(){
//     const auto number = PredictNumber({1, 2, 10});
//     if (number != 18) {
//         std::cerr << "Our function does not work!\n";
//         return 1;
//     }
//     else {
//         cout << "The number is: " << number << endl;
//     }
    float min = 10.0;
    float max = 100.0;
    int num_houses = 5;
    const auto prices = GetHousePrices(min, max, num_houses);
    std::cout 
        << "Upcoming price: "
        << PredictNumber(prices) << endl;
    return 0;    
}