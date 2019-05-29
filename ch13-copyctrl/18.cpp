#include <string>
#include <iostream>

class Employee
{
public:
  Employee() : eid(++id), name() {}
  Employee(const std::string &in) : eid(++id), name(in) { std::cout << "String ctor" << std::endl; }
  //Employee(Employee &) = delete;

private:
  static int id;
  int eid;
  std::string name;
};

int Employee::id = 0;

int main()
{
  std::string in = "asdf";
  Employee Foo("asdf");
  Employee Foo2{"asdf"};
  Employee Foo3 = in;
  Employee Foo4 = {"asdf"};
}