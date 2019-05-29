#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::vector<int> test{1, 2, 0, 3, 4, 5, 6, 7, 0, 8, 9};
  auto start = test.crbegin();
  while (start != test.crend()) {
    std::cout << *start << " ";
    ++start;
  }
  auto end = test.cend() - 1;
  std::cout << std::endl;
  while (end != test.cbegin() - 1) {
    std::cout << *end << " ";
    --end;
  }
  std::cout << std::endl;
  auto it = std::find(test.crbegin(), test.crend(), 0).base();
  auto b = test.cbegin();
  while (b != it)
    std::cout << *b++ << " ";
}