/** @file list3602.cpp */
/** Listing 36-2. Calling the print Function */
#include <iostream>
#include <ostream>
#include <string>

// All of Listing 36-1 belongs here
#include "list3602.code"

void showoff(work const& w)
{
  w.print(std::cout);
  std::cout << '\n';
}

int main()
{
  book sc("1", "The Sun Also Crashes", "Ernest Lemmingway", 2000);
  book ecpp("2", "Exploring C++", "Ray Lischner", 2008);
  periodical pop("3", "Popular C++", 13, 42, "January 1, 2000");
  periodical today("4", "C++ Today", 1, 1, "January 13, 1984");

  showoff(sc);
  showoff(ecpp);
  showoff(pop);
  showoff(today);
}
