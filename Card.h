#ifndef CARD_H_
#define CARD_H_
#include <sstream>
#include <ostream>

class Card
{
private:
  public: enum Color {purple, orange}; // am i doing this right?
  int rank, value;
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
