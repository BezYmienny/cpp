#include <iostream>

int main()
{
	int t[2][2]={ {2,4},{6,8} };
	for(int i=0;i<2;i++)
				for(int j=0;j<2;j++)
					std::cout << "Element t[ " << i << " , " << j << " ]=" << t[i][j] << "\n";
	return 0;
}






