#include "Hand.h"

Hand::Hand(){}

Hand::Hand(Deck deck, int N)
{
  for (int i = 0; i < N; i++)
  {
    hand.push_back(deck.drawCard());
  }
}
std::string Hand::printHand()
{
  std::string sHand;
    for (long unsigned i = 0; i < hand.size(); i++)
    {
      sHand += "[" + std::to_string(i + 1) + "] " + hand[i].printCard() + " ";
    }
    return sHand;
  }

Card Hand::dealCard(int num)
{
  Card deltCard = hand[num - 1];
  hand.erase(hand.begin() + num - 1);
  return deltCard;
}
int Hand::getHandSize()
{
  return hand.size();
}
