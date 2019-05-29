#include <string>
#include <iostream>

int main() {
  std::string test = "ab2c3d7R4E6";
  std::string letters = "abcdRE";
  std::string numbers = "23746";
  std::string::size_type pos = 0;
  while((pos = test.find_first_of(numbers, pos)) != std::string::npos) {
    std::cout << test[pos];
    ++pos;
  }
}