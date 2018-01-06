#include <iostream>

void proba();

int x=2;

main()
{
		std::cout << "zmienna globalna x=" << x << "\n";
		proba();
		proba();
		proba();
}

void proba()
{
	int x=1;
	static int licznik_wywolan=0;
		std::cout << "zmienna lokalna z funkcji x=" << x << "\n";
		std::cout << "zmienna globalna wywolana z wewnatrz x=" << ::x << "\n";
		std::cout << "Funkcka zostala wywolana " << licznik_wywolan;
		std::cout << " razy  \n";
		licznik_wywolan++;
}
		
		
			
