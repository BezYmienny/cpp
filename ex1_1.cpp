#include <iostream>

int plus_2(int);

main()
{
char imie[25];
float a=2.33;

std::cout << "Jak sie nazywasz ?" ;//<< std::endl;
std::cin >> imie;
std::cout << "Czesc " << imie << "\n" <<" Wynik obliczenia 1szej ";
std::cout << "funkcji : " << plus_2(a) << "\n";
}

int plus_2(int c)
{
	c+=2;
	return c;
} 
