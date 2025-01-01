#include <iostream>
#include <string>
#include <windows.h>
#include "flat.h"

using namespace std;

class Flat
{
    public:
    Flat::Flat(int num, string n)
    {
        number = num;
        name = n;
    }
    
    int number;
    string name;
};
