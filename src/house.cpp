#include "house.h"

House::House(string addr)
{
    address = addr;
}
void House::AddFlat(Flat *f)
{
    flats[count] = f;
    count++;
}
void House::PrintFlats()
{
    cout << "Адрес: " << address << endl;
    for (int i = 0; i < count; i++)
    {
        cout << flats[i]->name << " " << flats[i]->number << endl;
    }
}
