#include <string>
#include <iostream>
#include <vector>
#include <cctype>

int main() {
  int a[5] = {1,2,3,4};
  int *beg = &a[0];
  for(int i = 0; i < 5; i++){
    int *cur = beg + i;
    *cur = 0;
  }
  for(auto &i : a)
    std::cout << i;
}