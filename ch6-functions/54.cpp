#include <vector>
#include <iostream>

int add(int x, int y)
{
  return x + y;
}

int subtract(int x, int y)
{
  return x - y;
}

int multiply(int x, int y)
{
  return x * y;
}

int divide(int x, int y)
{
  return x / y;
}

int main()
{
  std::vector<int (*)(int, int)> funcarr = {add, subtract, multiply, divide};
  for (auto f : funcarr)
    std::cout << f(3, 4) << std::endl;
}