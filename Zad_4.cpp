#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int	main(void)
{
	const int	w{3}, k{5};
	double		A[w][k];
	const int	Sz{5};

	srand(time(0));
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
			{
				A[i][j] = static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/5));
			}
	}

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
			{
				cout << fixed << setprecision(1) << setw(Sz) << A[i][j];
			}
		cout << endl;
	}

	double	najwieksza{0};
	int	kol{0};
	for (int i = 0; i < k; i++)
	{
		double	srednia{0};
		for (int j = 0; j < w; j++)
		{
			srednia += A[j][i];
				if (srednia > najwieksza)
			{
				najwieksza = srednia;
				kol = i;
			}	
		}
		cout << fixed << setprecision(2) << setw(Sz) << srednia / w;
	}

	double	B[w];
	for (int i = 0; i < w; i++)
	{
		B[i] = A[i][kol];
		A[i][kol] = A[i][k - 1]; 
		A[i][k - 1] = B[i];
	}
	
	cout << endl << endl;
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
			{
				cout << fixed << setprecision(1) << setw(Sz) << A[i][j];
			}
		cout << endl;
	}
	return (0);
}