#include <algorithm>
#include <vector>
#include <string>

//only print words bigger than size sz
void biggies(std::vector<std::string> &words, const std::vector<std::string>::size_type sz) {
  std::sort(words.begin(), words.end());
  words.erase(unique(words.begin(), words.end()), words.end());
  stable_sort(words.begin(), words.end(), [](const std::string &a, const std::string &b){return a.size() < b.size();});

}

int main() {

}