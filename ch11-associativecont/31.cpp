#include <string>
#include <iostream>
#include <map>

void removeAuthor(std::multimap<std::string, std::string> &authors, std::string in)
{
  while (authors.find(in) != authors.end())
    authors.erase(authors.find(in));
}

int main()
{
  std::multimap<std::string, std::string> authors;
  authors.insert({"Zhang San", "Hello world 3"});
  authors.insert({"Zhang San", "Hello world"});
  authors.insert({"Wang Wu", "Hello again world 2"});
  authors.insert({"Zhang San", "Hello world 2"});
  authors.insert({"Li Si", "Bye world"});
  authors.insert({"Wang Wu", "Hello again world"});
  removeAuthor(authors, "Zhang San");
  for (auto pair : authors)
    std::cout << pair.first << ": " << pair.second << std::endl;
}