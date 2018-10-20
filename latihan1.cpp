#include <iostream>

int main()
{
	int i= 0;
	int max = 0;

	int a,x;
	std::cout << "masukan jumlah bilangan : ";

	std::cin >> a;
	
	for (i;i<a;i++)
	{
		std::cout << "masukan bilangan ke - " << i+1 << ": " ;
		std::cin >> x;
		if (x>max)
			max=x;
	}

	std::cout << "bilangan terbesarnya adalah : " << max;
	return 0;
}
