#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

struct	Sstudent
	{
		char	ini_1, ini_2;
		double	ocena;
	};

const int   n = 5;

int	funkcja(Sstudent A[n], double &srednia)
{
	const int	Max0 = 6;
	double		najwyzsza{0};
	
	for (int i = 0; i < n; i++)
	{
			A[i].ini_1 = 65 + rand() % (91 - 65);
			A[i].ini_2 = 65 + rand() % (91 - 65);
			A[i].ocena = Max0 * rand() / (double) RAND_MAX;
			cout << A[i].ini_1 << A[i].ini_2 << " ";
			cout << fixed << setprecision(2) << A[i].ocena << " ";
			srednia += A[i].ocena;
			if (A[i].ocena > najwyzsza)
				najwyzsza = A[i].ocena;
	}
    cout << endl;
	srednia /= n;
	return (najwyzsza);
}

int	main(void)
{
    srand(time(0));
	double	srednia1{0}, srednia2{0}, roznica;
	Sstudent	G1[n], G2[n];
	
	roznica = funkcja(G1, srednia1) - funkcja(G2, srednia2);
	if (srednia1 > srednia2)
		cout << srednia1 << endl;
	else if (srednia2 > srednia1)
		cout << srednia2 << endl;
	else
		cout << "Srednie sa sobie rowne" << endl; 
	return (0);
}