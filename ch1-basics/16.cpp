#include "iostream"

int main() {
  int sum = 0, val = 0;
  while (std::cin >> val) {
    sum += val;
  }
  //operates left to right; std::cout will return itself
  //and allow the chaining of the '<<' operator
  std::cout << "The sum is " << sum << std::endl; 
}