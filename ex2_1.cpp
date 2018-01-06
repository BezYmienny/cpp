#include <iostream>


int main()
{
	int l;
	
	
	std::cout << "Podaj lczbe calkowita z zakresu [1..10] \n";
	std::cin  >> l;
	if( (l<1) || (l>10) )
		std::cout << "Blad zakresu ! \a\n"; else
		std::cout << "Podales liczbe " << l << "\n";
		
	return(0);
}

