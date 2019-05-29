#include <iostream>
#include <fstream>
#include <string>

std::istream& read(std::istream& in) {
  std::string s;
  std::ofstream out("7.out", std::ofstream::app);
  while(!in.eof()) {
    in >> s;
    out << s << std::endl;
  }
  in.clear();
  out.close();
  return in;
}

int main() {
  std::string mystr;
  read(std::cin);
}