#pragma once
#include <iostream>
#include <string>
#include <vector>

// void PrintHello();

// // Only Declaration
// class Student {
//     public:
//     Student(int id, std::string name);

//     // Getters
//     int id() const;
//     const std::string& name() const;

//     // Print student info
//     void printStudent() const;

//     // Private members
//     private:
//     int id_;
//     std::string name_;
// };

// Declaration and definition
// class Student {
// public:
//   // Constructor
//   Student(int id, std::string name) : id_{id}, name_{name} {}

//   // Getters
//   int id() const { return id_; }
//   const std::string &name() const { return name_; }

//   // Print student info
//   void printStudent() const {
//     std::cout << "Student id: " << id_ << std::endl;
//     std::cout << "Student name: " << name_ << std::endl;
//   }

//   // Private members
// private:
//   int id_ = 0;
//   std::string name_;
// };

// class Printer {
// public:
//   // Printer(string str) : some_str_{str} {};
//   void Print(const string &str) { cout << "lvalue: " << str << endl; }
//   void Print(string &&str) {
//     // some_str_ = str;
//     cout << "rvalue: " << str << endl;
//   }

// private:
//   string some_str_;
// };

class Human {
public:
  Human(std::string name, int kindness) : name_{name}, kindness_{kindness} {};
  bool operator<(const Human &other) const {
    return kindness_ < other.kindness_;
  }

  const std::string &name() const { return name_; }
  int kindness() const { return kindness_; }

  void Print() const {
    std::cout << name_ << ": kindness = " << kindness_ << std::endl;
  };
  void Print() {
    std::cout << name_ << ": kindness = " << kindness_ << std::endl;
  };

private:
  std::string name_;
  int kindness_ = 100;
};

void PrintHumans(std::vector<Human> &humans);