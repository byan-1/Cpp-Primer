#include <list>
#include <vector>
#include <string>

int main() {
  std::list<char*> stringlist;
  std::vector<std::string> stringvec;
  stringvec.assign(stringlist.begin(), stringlist.end());
}