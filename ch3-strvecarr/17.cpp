#include <string>
#include <iostream>
#include <vector>
#include <cctype>

int main() {
  std::string word;
  std::vector<std::string> result;

  while (std::cin >> word)
    result.push_back(word);

  for(auto &w : result)
    for(auto &c : w)
      c = std::toupper(c);
  for(auto w : result)
    std::cout << w << std::endl;
}