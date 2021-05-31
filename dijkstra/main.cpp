// Niestety nie udało mi się dokończyć kodu. Są to raczej jakieś próby. Program odpowiednio wczytuje dane z listy sąsiedztwa. Reszta trochę gorzej :/

#include <iostream>
#include<fstream>
using namespace std;

int min_koszt(int koszt[], bool odwiedzony[], int il)
{
    int min = INT_MAX;
    int kosztmin;
    for (int i = 0; i < il; i++)
        if (odwiedzony[i] == false && koszt[i] <= min)
        {
            min = koszt[i];
            kosztmin = i;
        }

    return kosztmin;
}

void result(int koszt[], int il)
{
    for (int i = 0; i < il; i++) cout<<i<<"------>"<< koszt[i];
}

int main()
{
    int x, y, z;
    int start, il;
    int koszt[100];
    int poprzednik[100];
    bool odwiedzony[100];

    for (int i = 1; i <= 100; i++)
    {
        koszt[i] = 100000;
        poprzednik[i] = 0;
        odwiedzony[i] = false;
    }

    fstream plik;
    plik.open("example.txt", ios::in);
    if (plik.good() == false)
    {
        cout << "Nie można otworzyć pliku";
        exit(0);
    }

    plik >> start;
    plik >> il;
    for (int i = 1; i <= il; i++)
    {
        plik >> x >> y >> z;
        //cout<<x<<" "<<y<<" "<<z<<endl;
    }
    //cout<<start;
    //cout<<endl<<il;
}
