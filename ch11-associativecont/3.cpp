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
    word.erase(std::remove_if(word.begin(), word.end(), [](unsigned char c) { return std::ispunct(c); }), word.end());
    std::transform(word.begin(), word.end(), word.begin(), [](unsigned char c) { return std::tolower(c); });
    ++wordCount[word];
  }
  for (const auto &w : wordCount)
    std::cout << w.first << ": " << w.second << std::endl;
}