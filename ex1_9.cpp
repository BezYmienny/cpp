#include <iostream>
#include <string.h>
const int DLUGOSC_DOMYSLNA=40;

class szlaczek
{
	char znak;
	public:
	int l;
	szlaczek(char c)
	{
		znak=c;
		l=DLUGOSC_DOMYSLNA;
	}
	
	void rysuj()
	{
		for (int i=0;i<l;i++)
			std::cout << znak;
		std::cout << "\n";
		
	}

		int dlugosc()
		{
			return(l);
		}
};

int main()
{
	szlaczek s1('#'),s2('?');
	s1.l=20;
	s1.rysuj();
	std::cout << "Dlugosc szlaczka : " << s1.dlugosc() << "\n";
	s2.rysuj();
	std::cout << "Dlugosc szlaczka : " << s2.dlugosc() << "\n";
	return 0;
}

