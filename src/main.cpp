#include "timer.h"
#include "tools.h"
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <memory>

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// class Rectangle {
// public:
//   Rectangle(int w, int h) : width_(w), height_(h) {}
//   int width() const { return width_; }
//   int height() const { return height_; }

// protected:
//   int width_ = 0;
//   int height_ = 0;
// };

// class Square : public Rectangle {
// public:
//   explicit Square(int size) : Rectangle(size, size) {}
// };

// class Counted {
// public:
//   Counted() { Counted::count++; }
//   ~Counted() { Counted::count--; }
//   static int count; // Static counter member .
// };
// int Counted::count = 0; // Definition .

class Point {
public:
  Point(int x, int y) : x_{x}, y_{y} {}
  float distance(const Point &other) const {
    float x_diff = x_ - other.x_;
    float y_diff = y_ - other.y_;

    return sqrt(x_diff * x_diff + y_diff * y_diff);
  }

  static float Distance(const Point &a, const Point &b, bool verbose = false) {
    if (verbose == true) {
      cout << endl;
      cout << "Point a: x: " << a.x_ << ", y: " << a.y_ << endl;
      cout << "Point b: x: " << b.x_ << ", y: " << b.y_ << endl;
    }
    float dist = a.distance(b);
    if (verbose == true) {
      cout << "Distance: " << dist << endl;
    }
    return dist;
  }

private:
  int x_ = 0;
  int y_ = 0;
};

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

class A {
public:
  A(int x) : data_{x} {};
  const int *data() const { return &data_; }
  void updateData(int x) { data_ = x; }

private:
  int data_ = 10;
};

int main() {

  A a(10);
  a.updateData(5);
  const auto *data_ptr = a.data();
  cout << "Data: " << *data_ptr << endl;

  // const A* ptr = &a;
  // // ptr->updateData(10);
  // cout << "Data: " << *ptr->data() << endl;
  // A b(0);
  // ptr = &b;
  // cout << "Data: " << *ptr->data() << endl;

  A *const ptr = &a;
  cout << "Data: " << *ptr->data() << endl;
  ptr->updateData(10);
  cout << "Data: " << *ptr->data() << endl;
  A b(0);
  // ptr = &b;

  // std::vector<AbstractShape*> shapes;
  // Square square;
  // Triangle triangle;
  // shapes.push_back(&square);

  // shapes.push_back(&triangle);
  // for (const auto* shape : shapes) {
  //   shape->Print();
  // }

  // Point a(1, 1);
  // Point b(2, 2);

  // cout << "Distance: " << a.distance(b) << endl;
  // cout << "Distance: " << Point::Distance(a, b, true) << endl;

  // Point* ptr = &a;
  // cout << ptr->distance(b) << endl;

  // Counted a, b;
  // cout << "Count : " << Counted ::count << endl;
  // Counted c;
  // cout << "Count : " << Counted ::count << endl;

  // Timer timer;
  // timer.Start();

  // std::vector<Human> humans = {Human{"a", 20}, Human{"b", 10}};

  // cout << "Before sort:" << endl;
  // PrintHumans(humans);

  // std::sort(humans.begin(), humans.end());

  // cout << "After sort:" << endl;
  // PrintHumans(humans);

  // timer.Stop();
  // timer.PrintElapsedTime();

  // cout << "---------" << endl;

  // Square sq(10);
  // cout << sq.width() << " " << sq.height() << endl;

  // cout << "---------" << endl;

  // Student student1{1, "francesco"};
  // student1.printStudent();

  return 0;
}
