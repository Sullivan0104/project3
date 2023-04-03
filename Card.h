#ifndef CARD_H_
#define CARD_H_

#include <string>

class Card
{
private:
  int rank, value;
  public:enum Color {purple, orange}; // am i doing this right?
  Color color;

public:

  Card();
  Card(int rank, Color color);

  std::string printCard();
  int getRank();
  Color getColor();
  int getValue();
};


#endif // CARD_H_
