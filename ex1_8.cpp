#include <iostream>
#include <string.h>


struct STUDENTKA
{
	char imie[30],nazwisko[35];
	int wiek;
	long nr_indeksu;
}Grupa_studentek[12],temp;

main()
{
	//temp.imie = 'J';
	//temp.nazwisko='K';
	//temp.imie="Joanna";
	//temp.nazwisko="Kowalska";
	strcpy(temp.imie,"Joanna");
	strcpy(temp.nazwisko,"Kowalska");
	
	
	
	temp.wiek=20;
	temp.nr_indeksu=67889;
	Grupa_studentek[0]=temp;
	
	std::cout << "Fragment bazy danych o studentkach - kilka sztuk pieknych... \n";
	std::cout << "Studentka : " << Grupa_studentek[0].imie;
	std::cout << " " << Grupa_studentek[0].nazwisko << "\n";
	
}


