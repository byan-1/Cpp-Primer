#include <iostream>

int main() {
  auto s = [](const int a, const int b) {
    return a + b;
  };
  std::cout << s(3,4) << std::endl;
  int a = 5;
  auto c = [a](const int b) {
    return a + b;
  };
  std::cout << c(7) << std::endl;
}