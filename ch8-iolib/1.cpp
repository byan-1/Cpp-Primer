#include <iostream>
#include <string>

std::istream& read(std::istream& in) {
  std::string s;
  std::cout << in.rdstate();
  while(!in.eof()) {
    in >> s;
    std::cout << s << std::endl;
  }
  in.clear();
  return in;
}

int main() {
  std::string mystr;
  decltype(read(std::cin)) mystream = read(std::cin);
  read(mystream);
}