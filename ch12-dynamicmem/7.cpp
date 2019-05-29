#include <vector>
#include <iostream>
#include <memory>

std::shared_ptr<std::vector<int>> getVecPtr()
{
  std::shared_ptr<std::vector<int>> dVec = std::make_shared<std::vector<int>>();
  return dVec;
}

void addElem(std::shared_ptr<std::vector<int>> vecPtr)
{
  int in;
  while (std::cin >> in)
    vecPtr->push_back(in);
}

void readVecPtr(std::shared_ptr<std::vector<int>> vecPtr)
{
  for (auto c : *vecPtr)
    std::cout << c << std::endl;
}

int main()
{
  auto vecPtr = getVecPtr();
  addElem(vecPtr);
  readVecPtr(vecPtr);
}