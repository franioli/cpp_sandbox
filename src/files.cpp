#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using Mode = std::ios_base::openmode;

int main() {
  // std::cout << "Hello, world" << std::endl;

  string line, filename;

  std::ifstream input("data/IMG_1289.csv");
  while (std::getline(input, filename)) {
    cout << "Read: " << line << endl;

    string size_type loc = line.find("")
  }

  // while (in >> s >> i >>) {
  // }

  return 0;
}