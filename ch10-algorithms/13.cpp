#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

bool l (std::string in) {
  return in.size() >= 5;
}

int main() {
  std::vector<std::string> words {"asdfg", "lol", "adwf", "aferergv"};
  auto it = std::partition(words.begin(), words.end(), l);
  for (auto i = words.begin(); i != it; i++)
    std::cout << *i << std::endl;
}