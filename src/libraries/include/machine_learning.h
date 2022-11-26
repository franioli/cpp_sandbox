#pragma once
#include <vector>
#include <random>

[[nodiscard]] float PredictNumber(const std::vector<float>& numbers){
    if (numbers.empty()){ return 0; }
    if (numbers.size() < 2){ return numbers.front();}
    const auto& one_before_last = numbers[numbers.size() - 2UL];
    const auto difference = numbers.back() - one_before_last;
    return numbers.back() + difference;
}

[[nodiscard]] std::vector<float> 
GetHousePrices(const float& min, const float& max, const int& number_of_houses){
    std::random_device random_device;
    std::mt19937 random_engine(random_device());
    std::uniform_real_distribution<float> uniform(min, max);
    
    std::vector<float> numbers(number_of_houses, 0.0);
    for (int i = 0; i < number_of_houses; i+=1){
        numbers[i] = uniform(random_engine);
    }
    return numbers;
}