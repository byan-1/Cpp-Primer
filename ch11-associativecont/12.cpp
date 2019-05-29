#include <string>
#include <utility>
#include <vector>
#include <iostream>

int main()
{
  std::string s;
  int i;
  std::vector<std::pair<std::string, int>> result;
  while (std::cin >> s >> i)
    result.push_back(std::make_pair(s, i));
  for (const auto &p : result)
    std::cout << p.first << " : " << p.second << std::endl;
}