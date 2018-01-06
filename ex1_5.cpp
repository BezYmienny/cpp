#include <iostream>

int main()
{
	int tablica[]={2,4,6,8};
	for(int i=0;i<4;i++)
	std::cout << "Element t[" << i << "]=" << tablica[i] << "\n";
		tablica[0]=tablica[1]=tablica[2]=tablica[3]=111;
		//tablica[0]=111;
		std::cout << "A teraz :\n";
		for(int i=0;i<4;i++)
		{
		std::cout << "Element t[" << i << "]=" << tablica[i] << "\n";
		}
	
	return 0;
}






