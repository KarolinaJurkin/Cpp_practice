#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // deklaracja zmiennych: imie, wspolrzedne punktow i dlugosci odcinkow

    string name;
    int ax, ay, bx, by, cx, cy;
    float   AB, AC, BC;

    cout << "Podaj imie: ";
    cin >> name;
    cout << "Milo cie widziec "<< name << endl;
    cout << "Podaj wspolrzedne x i y punktu A: " << endl;
    cin >> ax >> ay;
    cout << "Podaj wspolrzedne x i y punktu B: " << endl;
    cin >> bx >> by;
    cout << "Podaj wspolrzedne x i y punktu C: " << endl;
    cin >> cx >> cy;
    AB = sqrt(pow(bx - ax, 2.0) + pow(by - ay, 2.0));
    AC = sqrt(pow(cx - ax, 2.0) + pow(cy - ay, 2.0));
    BC = sqrt(pow(cx - bx, 2.0) + pow(cy - by, 2.0));
    if ((AB + AC > BC) && (AC + BC > AB) && (AB + BC > AC)) // warunek na zbudowanie trojkata
    {
        float   obw;    // obwod trojkata
        float   pole;   // pole trojkata
        float   p;      // polowa obwodu trojkata
        float   sx, sy; // wspolrzedne srodka ciezkosci trojkata
        float   r;      // promien okregu opisanego

        obw = AB + AC + BC;
        p = obw / 2;
        pole = sqrt(p * (p - AB) * (p - AC) * (p - BC));
        sx = (ax + bx + cx) / 3.0;
        sy = (ay + by + cy) / 3.0;
        r = (AB * AC * BC) / (4 * pole);
        cout << "Obwod trojkata: Obw = " << obw << endl;
        cout << "Pole trojkata: P = " << pole << endl;
        cout << "Srodek ciezkosci trojkata: S = (" << sx << ", " << sy << ")" << endl;
        cout << "Promien okregu opisanego na trojkacie: R = " << r << endl;
    }
    else
    {
        cout << "Nie mozna zbudowac trojkata.";
    }
    return 0;
}