#include <iostream>

int main() {
  int test = 9;
  auto m = [&test]() -> bool {if (test > 0) {while (test > 0) --test; return false;}return true;};
  m();
  std::cout << test;
}