
#include <iostream>

int add(int x, int y)
{
  int sum_result = 0;
  sum_result = (x + y);
  return sum_result;
}

int main()
{
  std::cout << "Hello my first C++ program"
            << std ::endl;
  std::cout << "************************"
            << std ::endl;
  std::cout << "Welcome to C++"
            << std ::endl;
  std::cout << "My name is Rohini"
            << std ::endl;
  std::cout << "************************"
            << std ::endl;

  int a = 10;
  int8_t b = 15;
  uint32_t c = 20;

  double avg = my_average(a, b, c);

  int x = 9, y = 7;
  int sum = add(x, y);
  std::cout << "The average of 3 values is: " << avg << std::endl;
  std::cout << "The sum of 2 values is: " << sum << std::endl;
}
