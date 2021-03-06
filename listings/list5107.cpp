/** @file list5107.cpp */
/** Listing 51-7. Playing High-Card with a deque */
#include <deque>
#include <iostream>
#include <ostream>

#include "card.hpp"
#include "randomint.hpp"

int main()
{
  std::deque<card> deck(52);
  std::generate(deck.begin(), deck.end(), card_generator());

  for (int i(0); i != 10; ++i)
  {
    randomint picker(0, deck.size() - 1);

    card computer_card(deck.at(picker()));
    std::cout << "I picked " << computer_card << '\n';

    card user_card(deck.at(picker()));
    std::cout << "You picked " << user_card << '\n';

    if (acehigh_compare(computer_card, user_card))
      std::cout << "You win.\n";
    else
      std::cout << "I win.\n";

    // Remove the cards, then erase them.
    std::deque<card>::iterator
      end(std::remove(deck.begin(), deck.end(), computer_card));
    end = std::remove(deck.begin(), end, user_card);
    deck.erase(end, deck.end());
  }
}
