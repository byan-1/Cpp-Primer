#include <iostream>
#include <string>

int main()
{
  int size = 10;
  char *in = new char[size];
  std::cin >> in;
  std::cout << in << std::endl;
}