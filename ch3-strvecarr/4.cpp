#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout; 
using std::endl;

int main() {
  string word1;
  string word2;
  cin >> word1 >> word2;
  if (word1 == word2) {
    cout << "Equal";
  } else {
    string longest = word1.size() > word2.size() ? word1 : word2;
    cout << longest << endl;
  }
}