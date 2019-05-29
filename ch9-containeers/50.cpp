#include <string>
#include <iostream>
#include <vector>

float sumVec(const std::vector<std::string>& in) {
  float sum = 0;
  for (auto i : in)
    sum += stof(i);
  return sum;
}

int main() {
  std::vector<std::string> test= {"1.1", "2.2", "3.3", "4.4", "5.5"};
  float s = sumVec(test);
  std::cout << s << std::endl;
}