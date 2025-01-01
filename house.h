#include <iostream>
#include <string>
#include "flat.h"

using namespace std;

class House
{
    public:
    House::House(string addr);
    
    void AddFlat(Flat* f);

    void PrintFlats();
};
