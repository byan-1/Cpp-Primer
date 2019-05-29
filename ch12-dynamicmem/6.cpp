#include <vector>
#include <iostream>

std::vector<int> *getVecPtr()
{
  std::vector<int> *dVec = new std::vector<int>;
  return dVec;
}

void addElem(std::vector<int> *vecPtr)
{
  int in;
  while (std::cin >> in)
    vecPtr->push_back(in);
}

void readVecPtr(std::vector<int> *vecPtr)
{
  for (auto c : *vecPtr)
    std::cout << c << std::endl;
}

int main()
{
  std::vector<int> *vecPtr = getVecPtr();
  addElem(vecPtr);
  readVecPtr(vecPtr);
  delete vecPtr;
}