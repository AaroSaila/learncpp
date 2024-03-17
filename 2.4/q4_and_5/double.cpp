#include <iostream>

int doubleNumber(int x)
{
  return 2 * x;
}

int main()
{
  int num{};

  std::cout << "Enter an integer: ";
  std::cin >> num;

  std::cout << "Double of " << num << " is " << doubleNumber(num) << '\n';

  return 0;
}
