#include "./tools.h"

#include <iostream>
#include <string>
#include <vector>

// void PrintHello() { std::cout << "Hello world" << std::endl; }

// // class Student Definition
// // Constructor
// Student::Student(int id, std::string name): id_{id}, name_{name} {}
// // Getters
// int Student::id() const {return id_;}
// const std::string& Student::name() const {return name_;}
// // Print student info
// void Student::printStudent() const {
//     std::cout << "Student id: " << id_ << std::endl;
//     std::cout << "Student name: " << name_ << std::endl;
// }

void PrintHumans(std::vector<Human>& humans) {
  for (const auto& human : humans) {
    human.Print();
  }
}