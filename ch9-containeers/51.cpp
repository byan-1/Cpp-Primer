#include <string>
#include <iostream>

class Date
{
private:
  unsigned int day;
  std::string month;
  unsigned int year;
public:
   Date() = default;
   Date(const std::string& m, const int d, const int y) : day(d), month(m), year(y) {}
   void printDate() { std::cout << month + " " << day << " " << year; }
};

int main() {
  Date test("January", 1, 1993);
  test.printDate();
}
