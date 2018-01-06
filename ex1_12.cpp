#include <iostream>

int z_podatkiem(int cena, int podatek=22)
{
	return (cena + cena*podatek/100);
}

int main()
{
	int cena=1234;
	
	std::cout << "Cena jednostkowa : \n";
	std::cout << cena << " zl\n";
	std::cout << "Towar z podatkiem  VAT  7% kosztuje ";
	std::cout << z_podatkiem(cena,7) << " zl\n";
	std::cout << "Towar z podatkiem  VAT  22% kosztuje ";
	std::cout << z_podatkiem(cena,22) << " zl\n";
	return(0);
}

