#ifndef HOUSE_H
#define HOUSE_H
// потом объясню что это за строчки
// теперь при сохранении у тебя будет автоформатироваться код
// настроил так: Ctrl+d - копирование строки, ctrl+y - удаление строки
#include <iostream>
#include <string>
#include "flat.h"

using namespace std;

class House
{
public:
    House(string addr);

    int count = 0; // считает заполненные элементы массива
    string address;
    Flat *flats[10];

    void AddFlat(Flat *f);

    void PrintFlats();
};

#endif