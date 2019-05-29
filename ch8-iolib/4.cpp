#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> readFileLine(const std::string& fname) {
  std::ifstream input(fname);
  std::string in;
  std::vector<std::string> result;
  while(getline(input, in))
    result.push_back(in);
  return result;
}

std::vector<std::string> readFileWord(const std::string& fname) {
  std::ifstream input(fname);
  std::string in;
  std::vector<std::string> result;
  while(input >> in)
    result.push_back(in);
  return result;
}


int main(){
  std::vector<std::string> test = readFileWord("4.in");
  for (auto &c : test)
    std::cout << c << std::endl;
}