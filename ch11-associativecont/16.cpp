#include <map>
#include <iostream>

int main()
{
  std::map<int, int> test;
  int a, b;
  while (std::cin >> a >> b)
  {
    auto it = test.find(a);
    if (it != test.end())
    {
      it->second = b;
    }
    else
    {
      test.insert({a, b});
    }
  }
}