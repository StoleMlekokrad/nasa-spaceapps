#include <stdc++.h>
#include "examine_food.h"
#include "food.h"

void main()
{
	std::cout << "Available dishes: \n 1.Capriciossa\n 2.Margherita\n 3.Vegetariana\n";
	size_t i;
	std::cout << "Choose a dish: ";
	while (std::cin >> i)
	{
		std::cout << std::endl;
		switch (i)
		{
		case 1:
			capriciossa();
			break;
		case 2:
			margherita();
			break;
		case 3:
			vegetariana();
			break;
		default:
			std::cerr << "Invalid input or the other dishes are not available\n";
			break;
		}
	}
}
