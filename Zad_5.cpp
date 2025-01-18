#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace	std;

int	main(void)
{
	ifstream plik;
	string	nazwa_pliku;

	getline(cin, nazwa_pliku);
	plik.open (nazwa_pliku);
	if (!plik.is_open()) 
	{
		cout << "Plik o takiej nazwie nie istnieje.\n";
		return (1);
	}
	const int	n = 5;
	double		A[n][n];
	const int	X = 1;
	int			brakujace = 0;
    double      dane;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (plik.eof())
			{
				A[i][j] = X;
				brakujace++;
			}
			else
				plik >> A[i][j];
		}
	}
	cout << "Brakujace wartosci w pliku: \n" << brakujace << endl;
	
	const int	M = 1;
	const int	D = 6;
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n; j++)
			cout << fixed << setprecision(M) << setw(D) << A[i][j];
        cout << endl;    
	}

    double  najwieksza = A[0][0];
    int     i = 0, w = 0;
    while (i < n)
    {
        if (A[i][i] > najwieksza)
        {
            najwieksza = A[i][i];
            w = i;
        }
        i++;
    }

    double  najmniejsza = A[0][n - 1];

    while (i > 0)
    {
        if (A[n - i][i - 1] < najmniejsza)
            najmniejsza = A[n - i][i - 1];
        i--;
    }

    for (i = 0; i < n; i++)
    {
        A[i][w] = najwieksza;
        A[w][i] = najwieksza;
    }
    A[w][w] = najmniejsza;
    cout << endl;

    for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n; j++)
			cout << fixed << setprecision(M) << setw(D) << A[i][j];
        cout << endl;    
	}

    ofstream    zapis("CoDrugi.txt");
    for (i = 0; i < n; i += 2)
    {
        for (int j = 0; j < n; j++)
        {
            zapis << fixed << setprecision(M) << setw(D) << A[i][j];
        }
        zapis << endl;
    }
}
