#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

std::vector<std::string> readFileLine(const std::string& fname) {
  std::ifstream input(fname);
  std::string in;
  std::vector<std::string> result;
  while(getline(input, in))
    result.push_back(in);
  return result;
}

void read(std::vector<std::string> in) {
  std::string word;
  std::istringstream result;
  for (auto &c : in) {
    std::istringstream line(c);
    while (line >> word)
      std::cout << word + " ";
  }
}

int main() {
  std::string mystr;
  std::vector<std::string> result;
  result = readFileLine("4.in");
  read(result);
}