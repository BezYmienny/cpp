#include <iostream>

enum TYDZIEN
{PONIEDZIALEK,WTOREK,SRODA,CZWARTEK,PIATEK,SOBOTA,NIEDZIELA};

TYDZIEN t;
main()
{
	for ( int t=PONIEDZIALEK;t<NIEDZIELA;t++)
	{
		switch(t)
		{
			case PONIEDZIALEK	: std::cout << "Jest pn \n";break;
			case WTOREK			: std::cout << "Jest wt \n";break;
			case SRODA			: std::cout << "Jest sr \n";break;
			case CZWARTEK		: std::cout << "Jest czw \n";break;
			case PIATEK			: std::cout << "Jest pt \n";break;
			case SOBOTA			: std::cout << "Jest sb \n";break;
			case NIEDZIELA		: std::cout << "Jest nd \n";break;
		}
	}
	
}

