#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;

void PrintMap(std::map<int, string>& map) {
  cout << "Map has " << map.size() << " elements ";
  cout << "and contains the following values: \n";
  cout << "key:\tvalue:\n";
  for (const auto& [k, v] : map) {
    cout << k << "\t" << v << endl;
  }
}

int main() {

  std::map<int, std::string> m = {{0, "first"}, {1, "second"}};
  m[2] = "third";
  m.emplace(4, "fifth");

  PrintMap(m);

  return 0;
}