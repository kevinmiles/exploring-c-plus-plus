/** @file list4608.cpp */
/** Listing 46-8. Multiple Template Arguments */
#include <iostream>
#include <istream>
#include <ostream>

template<class T, class U>
U input_sum(std::istream& in)
{
  T x;
  U sum(0);
  while (in >> x)
    sum += x;
  return sum;
}

int main()
{
  long sum(input_sum<int, long>(std::cin));
  std::cout << sum << '\n';
}
