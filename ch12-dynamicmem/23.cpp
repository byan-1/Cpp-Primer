//concatenate two string literals,
//putting result in dynamically allocated char array
//create two char arrays initialized with string literals
//create a dynamically sized char array to hold the result
//move the two chars into the result

//concatenate two library strings
#include <string>
#include <iostream>

int main()
{
  char h[6] = "hello";
  char w[6] = "world";
  char *result = new char[11];
  for (int i = 0; i != 5; ++i)
    result[i] = h[i];
  for (int i = 0; i != 6; ++i)
    result[i + 5] = w[i];

  std::cout << result << std::endl;

  delete[] result;
}