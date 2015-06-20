#ifndef __SUIT_H__
#define __SUIT_H__

template <class SUIT>
class Suited {
public:
    Suited(SUIT suit) {this->suit = suit;}
    SUIT getSuit() {return suit;}
//private:
    SUIT suit;
};

#endif
