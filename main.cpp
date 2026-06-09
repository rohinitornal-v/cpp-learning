
#include <iostream>

int add(int a, int b)
{
  return a + b;
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
  std::cout << "I will become a programmer"
            << std ::endl;
  std::cout << "************************"
            << std ::endl;

  bool my_flag = false;
  int a = 4, b = 6;

  int sum = add(5, 9);

  std::cout << " a = " << a << "\n";
  std::cout << " b = " << b << "\n";
  std::cout << " my_flag = " << my_flag << "\n";

  std::cout << "The sum is: " << sum << std::endl;

  return 0;
}
