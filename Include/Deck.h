#include <C:/Programming/Github Projects/BlackjackGame/Include/Card.h>

class Deck : public Card {
    /*
    Deck class is derived from class card, when initialized the object creates a deck of 52 card objects and
    and stores the position of the top card, the deck has two methods, one initializes the deck and the other
    shuffles the deck.
    */
    public:
        //class variables
        Card deck[52];
        int topCard;

        //blank constructor
        Deck();

        //methods
        void createDeck();
        void shuffle();
};