#include <map>
#include <vector>
#include <string>
#include <iostream>

using familyMap = std::map<std::string, std::vector<std::string>>;

void addChild(std::string lastName, std::string firstname, familyMap &in)
{
  in[lastName].push_back(firstname);
}

int main()
{
  familyMap test;
  addChild("testLast", "testFirst", test);
  for (const auto &w : test)
    std::cout << w.first << " " << w.second[0] << std::endl;
}