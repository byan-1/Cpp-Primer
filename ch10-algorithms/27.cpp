#include <vector>
#include <algorithm>
#include <iostream>

int main() {
  std::vector<int> v1{1,1,2,3,3,4,4,5}; 
  std::vector<int> v2;
  std::unique_copy(v1.begin(), v1.end(), std::back_inserter(v2));
  for (auto c : v2) {
    std::cout << c << std::endl;
  }
}