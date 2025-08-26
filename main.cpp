#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main() {

  // 1. Create a deck of cards and shuffle it.
  Deck deckofCards;
  deckofCards.shuffle();

  // 2. Create two players, each one with 5 cards in their hand.
  Player player(deckofCards, 5);
  Player computer(deckofCards, 5);

// 3. Play five rounds. In each round:
  for (int i = 1; i <= 5; i++)
  {
    cout << "\nRound " << i << endl;
    // - Have computer deal a card randomly from their hand.
    srand((unsigned) time(NULL));
    int random = 1 + (rand() % computer.hand.getHandSize());
    Card compCard = computer.hand.dealCard(random);
    cout << "Computer playes: " << compCard.printCard() << endl;

    //- Show human their hand of cards so that they can make a selection.
    cout << "Your Hand: " << player.hand.printHand() << endl;
    int cardChoice;
    cout << "What card do you want to play? ";
    cin >> cardChoice;

    //input validation
    while(cardChoice > player.hand.getHandSize() || cardChoice <= 0)
    {
      cout << "Not a valid card choice, plase choose a different option that's listed: ";
      cin >> cardChoice;
    }

    //- Have human deal their card.
    Card humCard = player.hand.dealCard(cardChoice);
    cout << "You played: " << humCard.printCard() << endl;

    //- Determine who won the round and update points accordingly.
    if (humCard.getRank() > compCard.getRank())
    {
      cout << "You won the round!" << endl;
      player.score++;
    }
    else if (compCard.getRank() > humCard.getRank())
    {
      cout << "The computer won the round!" << endl;
      computer.score++;
    }
    else
    {
      cout << "The round was a tie." << endl;
    }
    // current scores after each round
    cout << "\nCurrent Scores:" << endl;
    cout << "Player: " << player.score << endl;
    cout << "Computer: " << computer.score << endl;
}

// 4. Print final game results.
cout << "\nFinal score:" << endl;
cout << "Player: " << player.score << endl;
cout << "Computer: " << computer.score << endl;

  return 0;
}
