#include <iostream>
#include <fstream>
#include <string>
using namespace	std;

int	main(void)
{
	ifstream plik;
	string	nazwa_pliku;

	getline(cin, nazwa_pliku);
	plik.open (nazwa_pliku);
	if (!nazwa_pliku.is.open)
	{
		cout << "Plik o takiej nazwie nie istnieje.\n";
		return (1);
	}
	const int	n = 5;
	double		A[n][n];
	const int	X = 1;
	int			brakujace;
	for (int i = 0; i < n; i++;)
	{
		for (int j = 0; j < n; j++)
		{
			if (plik.eof)
			{
				A[i][j] = X;
				brakujace++;
			}
			else
				plik >> A[i][j];
		}
	}
	cout << "Brakujace wartosci w pliku: \n" << brakujace;
	
	const int	M = 1;
	const int	D = 4;
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n; j++)
			cout << fixed << setprecision(M) << setw(D) << A[i][j];
	}
}