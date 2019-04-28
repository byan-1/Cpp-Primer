#include <string>
#include <iostream>
#include <vector>
#include <cctype>

int sumArgs(std::initializer_list<int> il)
{
  int sum = 0;
  for (auto i : il)
    sum += i;
  return sum;
}

int main()
{
  std::cout << sumArgs({1, 2, 3});
}                                         