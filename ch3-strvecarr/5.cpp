#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout; 
using std::endl;

int main() {
  string word, result;
  while (cin >> word) {
    result += word + " ";
  }    
  cout << result << endl;
}