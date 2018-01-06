#include <iostream>
#include <math.h>

float potega(float,int);
float potega(float,float);
float t1=3.1;
float t2=3.2;
float t5=3.5;
float t7=3.75;
float pi=3.14;
float cz=4.0;
int main()
{
	std::cout << "2 do potegi 3 = " << potega(2,3) << "\n";
	std::cout << "2 do potegi 3.1  = " << potega(2,t1) << "\n";
	std::cout << "2 do potegi pi = " << potega(2,pi) << "\n";
	std::cout << "2 do potegi 3.2 = " << potega(2,t2) << "\n";
	std::cout << "2 do potegi 3.5 = " << potega(2,t5) << "\n";
	std::cout << "2 do potegi 3.75 = " << potega(2,t7) << "\n";
	std::cout << "2 do potegi 4.0 = " << potega(2,cz) << "\n";
	std::cout << "2 do potegi 4 = " << potega(2,4) << "\n";
	return(0);
}

float potega (float x, int n)
{
	float temp=1.0;
	for (int i=1;i<=n;i++)
	{
		temp=temp*x;
		
	}
	return(temp);
}

float potega(float x,float n)
{
	return (exp(n*log(x)));
}



