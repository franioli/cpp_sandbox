#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

  vector<double> x = {{1, 2, 3}};
  for (auto it = x.begin(); it != x.end(); ++it) {
    cout << *it << endl;
  }
  return 0;
}
