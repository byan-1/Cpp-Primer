#include <string>
#include <iostream>

struct Person
{
  std::string name = "";
  std::string address = "";
  std::string getName() const;
  std::string getAddress() const;
};

std::string Person::getName() const
{
  return name;
}

std::string Person::getAddress() const
{
  return address;
}

int main()
{
  Person p1;
  p1.address = "address1";
  p1.name = "name1";
  std::cout << p1.getAddress();
  std::cout << p1.getName();
}