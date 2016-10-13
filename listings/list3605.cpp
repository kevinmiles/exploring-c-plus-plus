/** @file list3605.cpp */
/** Listing 36-5. Using the New movie Class */
#include <iostream>
#include <ostream>
#include <string>

// All of Listing 36-1 belongs here
// All of Listing 36-3 belongs here
// All of Listing 36-4 belongs here
#include "list3605.code"

int main()
{
  book sc("1", "The Sun Also Crashes", "Ernest Lemmingway", 2000);
  book ecpp("2", "Exploring C++", "Ray Lischner", 2006);
  periodical pop("3", "Popular C++", 13, 42, "January 1, 2000");
  periodical today("4", "C++ Today", 1, 1, "January 13, 1984");
  movie tr("5", "Lord of the Token Ring", 314);

  std::cout << sc << '\n';
  std::cout << ecpp << '\n';
  std::cout << pop << '\n';
  std::cout << today << '\n';
  std::cout << tr << '\n';
}
