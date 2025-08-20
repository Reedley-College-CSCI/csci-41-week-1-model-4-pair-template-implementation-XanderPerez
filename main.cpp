// Luis Davila, Xander Perez
#include "Pair.h"
#include <iostream>
using namespace std;

int main() {
    Pair intPair(1, 2);
    cout << intPair.getFirst() << endl; 
    cout << intPair.getSecond() << endl;

    Pair stringPair(string("apple"), string("banana"));
    cout << stringPair.getFirst() << endl; 
    cout << stringPair.getSecond() << endl;

    Pair doublePair(1.25, 2.50);
    cout << doublePair.getFirst() << endl; 
    cout << doublePair.getSecond() << endl;

    return 0;
}
