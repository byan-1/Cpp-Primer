#include <string>
#include <iostream>
#include <vector>
#include <cctype>

int main() {
  std::vector<int> initial{1,2,3,4,5,6,7,8,9,10};
  for (auto it = initial.begin(); it != initial.end(); ++it)
    *it *= 2;
  for (auto e:initial)
    std::cout<<e;
}