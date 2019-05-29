#include <map>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

int main()
{
  std::map<std::string, size_t> wordCount;
  std::string word;
  while (std::cin >> word)
  {
    auto ret = wordCount.insert({word, 1});
    if (!ret.second)
    {
      ++ret.first->second;
    }
  }
  for (const auto &w : wordCount)
    std::cout << w.first << ": " << w.second << std::endl;
}