#include <iostream>
#include <string>
#include <windows.h>
#include "flat.h"
#include "house.h"

using namespace std;

class House
{
    public:
    House::House(string addr)
    {
        address = addr;
    }
    
    int count = 0; // считает заполненные элементы массива
    string address;
    Flat* flats[10];
    void House::AddFlat(Flat* f)
    {
        flats[count] = f;
        count++;
    }
    void House::PrintFlats()
    {
        cout << "Адрес: " << address << endl;
        for(int i = 0; i < count; i++)
        {
            cout << flats[i]->name << " " << flats[i]->number << endl;
        }
    }
};

