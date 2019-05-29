#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <iterator>

int main() {
  std::ifstream in("29.in");
  std::istream_iterator<std::string> it(in), eof;
  std::vector<std::string> result(it, eof);
  for (auto c : result)
    std::cout << c << std::endl;
}