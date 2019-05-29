#include <iostream>
class sss
{
public:
  explicit sss(int)
  {
    std::cout << "int" << std::endl;
  };
};

constexpr int test()
{
  int i = 0;
  std::cin >> i;
  return i;
}

int main()
{
  int k = test();
  std::cout << k << std::endl;
  return 0;
}