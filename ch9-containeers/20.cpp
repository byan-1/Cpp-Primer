#include <list>
#include <deque>
#include <iostream>

int main() {
  std::list<int> in;
  std::deque<int> even;
  std::deque<int> odd;
  int i;
  while (std::cin >> i)
    i % 2 == 0 ? even.push_back(i) : odd.push_back(i);
  for (auto &c : even)
    std::cout << c;
  for (auto &c : odd)
    std::cout << c;
}