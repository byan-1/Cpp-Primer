#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main() {
  std::istream_iterator<std::string> it(std::cin), eof;
  std::vector<std::string> result(it, eof);
  std::vector<std::string> sorted;
  std::sort(result.begin(), result.end());
  std::unique_copy(result.begin(), result.end(), std::back_inserter(sorted));
  std::ostream_iterator<std::string> out(std::cout, " ");
  for (auto c : sorted)
    out = c;
}