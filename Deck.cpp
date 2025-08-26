#include "Deck.h"

Deck::Deck()
{
  int count = 0;
  for (int i = 1; i <= 10; i++)
  {
    Card _card(i, Card::orange);
    deck.push_back(_card);
    count++;
  }
  for (int i = 1; i <= 10; i++)
  {
    Card _card(i, Card::purple);
    deck.push_back(_card);
    count++;
  }
}

void Deck::shuffle()
{
  srand(unsigned(time(0)));
  random_shuffle(deck.begin(), deck.end());
}
Card Deck::drawCard()
{
  Card singleCard = deck.at(0);
  deck.erase(deck.begin());
  return singleCard;
}
int Deck::getDeckSize()
{
  return deck.size();
}
