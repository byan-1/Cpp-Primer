#include <iostream>
#include <fstream>
#include <string>
#include <vector>

bool isFound(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, const int val) {
  while (begin != end) {
    if (*begin == val)
      return true;
    ++begin;
  }
  return false;
}

int main() {
  std::vector<int> v1 = {1,2,3,4,5};
  std::cout << isFound(v1.begin(), v1.end(), 2);
  std::cout << isFound(v1.begin(), v1.end(), 6);
}