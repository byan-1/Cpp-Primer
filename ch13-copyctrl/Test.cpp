#include <iostream>
#include <string>

class Foo
{
public:
  Foo() { std::cout << "Default" << std::endl; };                     //default constructor
  Foo(const Foo &) { std::cout << "Copy constructor" << std::endl; }; //copy constructor
  Foo(int x) : one(x) { std::cout << "One Elem" << std::endl; };
  Foo(int x, int y) : one(x), two(y) { std::cout << "Two Elems" << std::endl; };
  Foo &operator=(const Foo &) { std::cout << "Copy assignment" << std::endl; };
  ~Foo() { std::cout << "Destructor" << std::endl; };

private:
  int one = 0;
  int two = 0;
};

int main()
{
  Foo testOne = {1, 2};
  Foo testTwo{1, 2};
  Foo testThree(1, 2);
  Foo testCopy = testTwo;
}