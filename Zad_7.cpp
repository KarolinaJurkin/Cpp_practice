#include <streamio>
#include <ctime>

using namespace std;

const int	w = 4, k = 5;

void	random(char A[w][k], int a, int b)
{
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			A[i][j] = a + rand() % (b + 1 - a);
		}
	}
}

void	out(char A[w][k])
{
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << A[i][j];
		}
		cout << endl;
	}
}

void	replace(char A[w][k], char c, char r)
{	
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (A[i][j] == r)
					break;
			else if (j == k)
			{
				for (int l = 0; l < k; l++)
			{
				A[i][l] = c;
			}
		}
	}
}

int	main(void)
{	
	char	Li[w][k], Cy[w][k];
	
	srand(time(0));
	
	random(Li[w][k], 65, 90);
	random(Cy[w][k], 48, 57);
	
	out(Li[w][k]);
	out(Cy[w][k]);
	
	replace(Li[w][k], '%', 'P');
	replace(y[w][k], '&', '5');
	
	return (0);
}
