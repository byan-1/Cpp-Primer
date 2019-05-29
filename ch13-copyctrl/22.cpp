#include <string>
#include <iostream>

class HasPtr
{
public:
  HasPtr(const std::string &s = std::string())
      : ps(new std::string(s)), i(0) {}
  HasPtr(const HasPtr &rhs)
      : ps(new std::string(*rhs.ps)), i(rhs.i) {}
  ~HasPtr()
  {
    delete ps;
  };

  HasPtr &operator=(const HasPtr &rhs)
  {
    // This copy-assignment operator is wrong, see ex13.23 for correct version.
    // delete ps;
    // ps = new std::string(*rhs.ps);
    // i = rhs.i;
    // return *this;
    auto newps = new std::string(*rhs.ps);
    delete ps;
    ps = newps;
    i = rhs.i;
    return *this;
  };

  const std::string &get() const { return *ps; }
  void set(const std::string &s) { *ps = s; }

private:
  std::string *ps;
  int i;
};

int main()
{
  std::string in = "World";
  HasPtr hp1 = in;
  HasPtr hp2 = hp1;
  HasPtr hp3;
  hp3 = hp1;
  hp1.set("Hello");

  std::cout << hp1.get() << std::endl;
  std::cout << hp2.get() << std::endl;
  std::cout << hp3.get() << std::endl;

  hp1 = hp1;
  std::cout << "After `hp1 = hp1`: " << hp1.get() << std::endl;

  return 0;
}
