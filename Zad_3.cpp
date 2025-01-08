#include <iostream>
using namespace std;

int	main(void)
{
	// Wszystkie zmienne beda zawsze wykorzystywane w tym programie, dlatego dla czytelnosci deklaruje je na gorze
	
	const int	D = 2;
	const int	G = 20;
	const int	N = 3;
	int			k;
	string		napis;
	int			counter = 0;
	double		srednia = 0;
	double		tab[N];
	
	do
	{
		cout << "Podaj liczbe calkowita pomiedzy " << D << " i " << G << ": ";
		cin >> k;
	}
	while (k < D || k > G);
	
	for (int i = 0; i < k; i++)
	{
		cout << "Wprowadz napis:";
		cin >> napis;
			if (napis[0] >= 'A' && napis[0] <= 'Z')
				counter++;
	}
	
	cout << "Ilosc napisow zaczynajacych sie wielka litera: " << counter << endl;
	
	for (int i = 0; i < N; i++)
	{
		cout << "Podaj liczbe rzeczywista: ";
		cin >> tab[i];
		srednia += tab[i];
	}
	
	srednia = srednia / N;
	cout << "Srednia podanych liczb: " << srednia << endl;
	
	// Wykorzystuje ponownie zmienna counter nadpisujac jej wartosc
	
	counter = 0;
	
	for (int i = 0; i < N; i++)
	{
		if (tab[i] > srednia)
			counter++;
	}
	
	cout << "Ilosc liczb wiekszych od sredniej: " << counter << endl;
	return (0);
}

