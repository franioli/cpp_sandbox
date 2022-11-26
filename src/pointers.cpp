#include <cmath>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::unique_ptr;
using std::vector;

class AbstractShape {
public:
  virtual void Print() const = 0;
};

class Square : public AbstractShape {
public:
  void Print() const override { cout << "Square\n"; }
};

class Triangle : public AbstractShape {
public:
  void Print() const override { cout << "Triangle\n"; }
};

int main() {
  cout << "Hello World!" << endl;

  vector<unique_ptr<AbstractShape>> shapes;
  shapes.emplace_back(new Square);

  auto triangle = std::make_unique<Triangle>();
  shapes.emplace_back(std::move(triangle));

  for (const auto& shape : shapes) {
    shape->Print();
  }
  return 0;
}
