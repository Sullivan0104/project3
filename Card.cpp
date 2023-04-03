#include "Card.h"
#include <iostream>

Card::Card(){}
Card::Card(int rank, Color color): rank{0}, color{purple}

std::string Card::printCard()
{
  std::cout << color << rank << std::endl;
}
int Card::getRank(){return rank;}
Color Card::getColor(){return color;}
int Card::getValue(){return value;}
