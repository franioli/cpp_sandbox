#pragma once
#include <chrono>
#include <iostream>

// Timer Class
class Timer {
public:
  Timer() : t0_{std::chrono::high_resolution_clock::now()} {};
  void Start() {
    t0_ = std::chrono::high_resolution_clock::now();
    std::cout << "Timer started." << std::endl;
  }
  void Stop() {
    t1_ = std::chrono::high_resolution_clock::now();
    fs_ = std::chrono::duration_cast<std::chrono::microseconds>(t1_ - t0_);
  }
  void PrintElapsedTime() const {
    std::cout << "Execution time: " << fs_.count() << " microseconds"
              << std::endl;
  };

private:
  std::chrono::time_point<std::chrono::high_resolution_clock> t0_;
  std::chrono::time_point<std::chrono::high_resolution_clock> t1_;
  std::chrono::microseconds fs_;
};