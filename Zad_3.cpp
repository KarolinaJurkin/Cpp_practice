#include <iostream>

using namespace std;

int	main(void)
{
	// Wszystkie zmienne beda zawsze wykorzystywane w tym programie, dlatego dla czytelnosci deklaruje je na gorze
	
	int			k;
	const int	D;
	const int	G;
	string		napis;
	int			counter;
	const int	N;
	double		srednia;
	
	D = 1;
	G = 20;
	counter = 0;
	N = 5;
	double		tab[N];
	
	do
	{
		cout << "Podaj liczbe calkowita pomiedzy 1 i 10: ";
		cin >> k;
		cout << endl;
	}
	while (k < D || k > G);
	
	for (int i = 0; k < i; i++)
	{
		cout << "Napisz slowo lub zdanie:\n";
		cin >> napis;
			if (napis[i] >= 'A' && napis[i] <= 'Z')
				counter++;
	}
	
	cout << "Ilosc napisow zaczynajacych sie wielka litera: " << counter << endl;
	
	for (int i = 0; i < N; i++)
	{
		cout << "Podaj liczbe rzeczywista: ";
		cin >> tab[i];
		cout << endl;
		srednia += tab[i];
	}
	
	srednia = srednia /N;
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
