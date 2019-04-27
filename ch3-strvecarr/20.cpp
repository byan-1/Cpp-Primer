#include <string>
#include <iostream>
#include <vector>
#include <cctype>

int main() {
  int input;
  std::vector<int> intstore;
  while(std::cin >> input)
    intstore.push_back(input);
  for(int i = 1; i < intstore.size(); i++)
    std::cout << std::to_string(intstore[i] + intstore[i-1]) + " ";
}