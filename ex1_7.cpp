#include <iostream>

struct STUDENTKA
{
	char imie[30],nazwisko[35];
	int wiek;
	long nr_indeksu;
};

main()
{
	STUDENTKA s= {"Joasia","Kowalska",20,67889};
	std::cout << "Studentka : " << s.imie << " " << s.nazwisko << "\n";
	std::cout << "Wiek : " << s.wiek << " lat " << "\n";
	std::cout << "Nr indeksu : " << s.nr_indeksu <<  "\n";
	std::cout << "Niedawno poznała przystojnego studenta  .... \n";
	std::cout << "Podaj jego nazwisko ... \n";
	std::cin >> s.nazwisko;
	std::cout << "------ Aktualne Dane ----- \n";
	std::cout << "Studentka : " << s.imie << " " << s.nazwisko << "\n";
	std::cout << "Wiek : " << s.wiek << " lat " << "\n";
	std::cout << "Nr indeksu : " << s.nr_indeksu <<  "\n";
}


