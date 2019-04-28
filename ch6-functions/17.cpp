#include <string>
#include <iostream>
#include <vector>
#include <cctype>

bool hasCapital(const std::string &s)
{
  for (auto c : s)
    if (isupper(c))
      return true;
  return false;
}

void toLower(std::string &s)
{
  for (auto &c : s)
    c = tolower(c);
}

int main()
{
  std::string word;
  while (std::cin >> word)
  {
    std::cout << hasCapital(word) << std::endl;
    toLower(word);
    std::cout << word << std::endl;
  }
}