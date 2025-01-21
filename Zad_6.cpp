#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

struct	Sstudent
	{
		char	ini_1, ini_2;
		double	ocena;
	};

int	main(void)
{
	const int	w = 4, k = 5, G = 5;
	Sstudent	A[w][k];
	
	srand(time(0));
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			A[i][j].ini_1 = 65 + rand() % (91 - 65);
			A[i][j].ini_2 = 65 + rand() % (91 - 65);
			A[i][j].ocena = 6 * rand() / (double) RAND_MAX;
			cout << A[i][j].ini_1 << A[i][j].ini_2 << " ";
			cout << fixed << setprecision(2) << A[i][j].ocena << " ";
		}
		cout << endl;
	}
	
	cout << endl;

    char    temp1, temp2; 
    double  tempo;
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (A[i][0].ini_1 == 'A' || A[i][0].ini_1 == 'B')
			{
                temp1 = A[i][0].ini_1;
                temp2 = A[i][0].ini_2;
                tempo = A[i][0].ocena;
				for (int l = 0; l < k - 1; l++)
				{
					A[i][l].ini_1 = A[i][l + 1].ini_1;
					A[i][l].ini_2 = A[i][l + 1].ini_2;
					A[i][l].ocena = A[i][l + 1].ocena;
				}
				A[i][k - 1].ini_1 = temp1;
				A[i][k - 1].ini_2 = temp2;
				A[i][k - 1].ocena = tempo;
			}
			cout << A[i][j].ini_1 << A[i][j].ini_2 << " ";
			cout << fixed << setprecision(2) << A[i][j].ocena << " ";
		}
		cout << endl;
	}
	return (0);
}
