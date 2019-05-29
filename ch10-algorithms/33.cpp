#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main() {
  std::ifstream in("29.in");
  std::ofstream out1("33.out1");
  std::ofstream out2("33.out2");
  std::istream_iterator<int> it(in), eof;
  std::ostream_iterator<int> result1(out1, " "), result2(out2, "\n");

  while (it != eof) {
    if (*it % 2)
      result1 = *it++;
    else
      result2 = *it++;
  }
}