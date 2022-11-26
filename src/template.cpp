#include <iostream>
#include <memory>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;

template <typename T> void PrintNumberOrString(const T& number) {
  cout << "Printing generic number or string: \n";
  cout << number << endl;
}

template <typename T> void PrintVector(const T& vector) {
  cout << "Printing generic vector: \n";
  for (auto& el : vector) {
    cout << el << endl;
  }
}

template <class T> class MyClass {
public:
  MyClass(const T& value) : value_{value} {};
  T get_value() { return value_; }

private:
  T value_;
};

int main() {
  //   int a = 0;
  //   Print(a);

  //   std::vector<string> vct = {"Hello", "world"};
  std::vector<float> vct = {1.1, 2.2};
  PrintVector(vct);

  //   MyClass<std::vector<string>> a(vct);
  //   MyClass<double> b(5.0);

  //   PrintVector(a.get_value());
  //   PrintNumberOrString(b.get_value());

  return 0;
}