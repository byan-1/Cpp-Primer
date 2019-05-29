#include <vector>
#include <algorithm>
#include <iostream>

int main() {
  std::vector<int> test{1,2,2,3,4,4,5,6};
  int sz = 3;
  int k = std::count_if(test.begin(), test.end(), [sz](const int i){return i > sz;});
  std::cout << k;
}