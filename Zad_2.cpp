#include <iostream>

using namespace std;

int main(void)
{
    int       initial_D;
    int       c;
    int       temp;
    int       ujemna;
    int       suma;
    int       mianownik;
    double    srednia;
    int       counter;

    cout << "Podaj wartosc stalej D roznej od 0:\n";
    cin >> initial_D;
    if (initial_D == 0)
        {
            cout << "Podana wartosc nie moze byc rowna 0.\n";
            return (0);
        }
    const int   D = initial_D;
    cout << "Podaj wartosc liczby calkowitej:\n";
    cin >> c;

    // podana liczba od razu spelnia warunki podzielnosci

    if (c % D == 0 && c % 2 == 0)
    {
        if (c < 0)
        {
            cout << "Najwieksza liczba ujemna: " << c << endl;
            if (c <= -10 && c > -100)
                cout << "Srednia arytmetyczna liczb dwucyfrowych ujemnych: " << c << endl;
        }
        else
            cout << "Brak liczb ujemnych";
        cout << "Ilosc razy, gdy wczytana liczba byla wieksza od swojego poprzednika: 0\n" << endl;
        return (0);
    }

    // podana liczba nie spelnia warunkow podzielnosci

    temp = c;
    if (c < 0)
        ujemna = c;
    else
        ujemna = 0;
    suma = 0;
    mianownik = 0;
    counter = 0;

    while (c % D != 0 || c % 2 != 0)
    {
        if (c < 0)
        {
            if (c > ujemna || ujemna == 0)
                ujemna = c;
            if (c <= -10 && c > -100)
            {
                suma += c;
                mianownik ++;
            }
        }
        if (c > temp)
            counter ++;
        temp = c;
        cout << "Podaj wartosc kolejnej liczby calkowitej:\n";
        cin >> c;
    }

    if (c < 0 && c > ujemna || ujemna == 0 && c < 0)
        ujemna = c;
    if (c <= -10 && c > -100)
    {
        suma += c;
        mianownik ++;
    }
    if (c > temp)
        counter ++;
    if (ujemna == 0)
        cout << "Brak liczb ujemnych.\n";
    else
        cout << "Najwieksza liczba ujemna: " << ujemna << endl;
    if (mianownik != 0)
    {
        srednia = suma * 1.0 / mianownik;
        cout << "Srednia arytmetyczna liczb dwucyfrowych ujemnych: " << srednia << endl;
    }
    else
        cout << "Brak liczb dwucyfrowych ujemnych.\n";
    cout << "Ilosc razy, gdy wczytana liczba byla wieksza od swojego poprzednika: " << counter << endl;
    return (0);
}