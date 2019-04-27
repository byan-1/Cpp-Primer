#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout; 
using std::endl;

int main() {
  string word;
  string result;
  cin >> word;
  for (auto &c : word) 
    if (!ispunct(c)) 
      result += c;
  cout << result << endl;
}