#include "Die.h"

#if __cplusplus >= 201103L
#include <random>
using namespace std;
#else
#include <cstdlib>
#include <ctime>
#endif

Die::Die(int numSides) {
  this->numSides = numSides;
#if __cplusplus < 201103L
  srand(time(NULL));
#endif
}

int Die::roll() {
#if __cplusplus >= 201103L
  random_device rd;
  mt19937 generator(rd());
  uniform_int_distribution<int> distribution(1, numSides);
  return distribution(generator);
#else
  return rand() % this->numSides + 1;
#endif
}
