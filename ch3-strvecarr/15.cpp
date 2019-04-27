#include <string>
#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cin;
using std::cout; 
using std::endl;

int main() {
  string word;
  vector<string> result;
  while(cin >> word)
    result.push_back(word);
  for (const auto &k : result)
    std::cout << k << " ";

  std::cout << "Size: " + std::to_string(result.size()) << std::endl;
}