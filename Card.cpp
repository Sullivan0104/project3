#include "Card.h"

Card::Card(){}
Card::Card(int rank, Color color): rank{rank}, color{color}
{
  if (color == purple)
  {
    value = rank;
  }
  else
  {
    value = 2 * rank;
  }
}

std::string Card::printCard()
{
  std::stringstream ss;
  switch(color)
  {
    case purple:
      ss << "purple:" << rank;
    break;
    case orange:
      ss << "orange:" << rank;
    break;
  }
  return ss.str();
}

int Card::getRank()
{return rank;}
int Card::getValue()
{return value;}
Card::Color Card::getColor()
{return color;}
