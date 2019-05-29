#include <string>
#include <vector>
#include <functional>
#include <iostream>

bool check_size(const std::string &s, std::string::size_type sz) {
  return s.size() > sz;
}

int main() {
  int sz = 3;
  std::vector<std::string> test {"aad", "as","asdf", "asdf", "asssd"};
  auto g = std::bind(check_size, std::placeholders::_1, sz);
  auto m = std::find(test.begin(), test.end(), g);
  std::cout << *m;
}