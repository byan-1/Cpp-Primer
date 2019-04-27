#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout; 
using std::endl;

int main() {
  string word = "asdf";
  for (char &c : word)
    c = 'x';      
  cout << word << endl;
}