#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::vector<int> test{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::vector<int> reversed(test.crbegin() + 3, test.crend() - 2);
  for (auto c : reversed) {
    std::cout << c << " ";
  }
}