#include <iostream>

main()
{
	int i=3;
	std::cout << "Wlasnie zadeklarowalismy zmienna in 'i' : " << i << "\n";
	float okolo_pi=3.14;
	std::cout << " a teraz zmienna  float 'okolo_pi' : " << okolo_pi << "\n";
	int k=3;
	std::cout << "Zewnetrzna zmienna 'k' : " << k << "\n";
	
	{
			int k=33;
			std::cout << " Wewnetrzna zmienna 'k' : " << k << "\n";
	}
	std::cout << "i znowu zewnetrzna zmienna 'k' : " << k << "\n";

}

