#include <iostream>
#include <string>
#include <windows.h>
#include "house.h"
#include "flat.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    House House1("ул. Приморская, 12");
    House House2("ул. Ленина, 23");

    Flat f1(1, "Иванов");
    Flat f2(2, "Петров");
    Flat f3(3, "Сидоров");

    House1.AddFlat(&f1);
    House1.AddFlat(&f2);
    House2.AddFlat(&f3);

    House1.PrintFlats();
    House2.PrintFlats();
    
    system("pause");

    return 0;
}