#pragma once
#include <stdc++.h>
#include "examine_food.h"

void examine_cpr();
void examine_mar();
void examine_vege();
void main();

int yesno(std::string& str)
{
	if (str == "Yes" || str == "yes")
		return 1;
	else if (str == "No" || str == "no")
		return 0;
	else
	{
		std::cerr << "Please enter Yes/yes or No/no.\n";
		return -1;
	}
	return -1;
}

void capriciossa()
{
	std::ifstream read("db/cpr/capriciossa.txt");
	std::string str;
	std::cout << "The ingredients for Capriciossa are: \n";
	size_t i = 1;
	while (!read.eof())
	{
		std::getline(read, str);
		std::cout <<" "<< i << "." << str << std::endl;
		++i;
	}
	std::cout << "Would you like to examine the ingredients?\n";
	std::string answer;
	while (true)
	{
		std::cin >> answer;
		if (yesno(answer) > 0)
		{
			std::cout << std::endl;
			examine_cpr();
		}
		else
			continue;
	}
	read.close();
	std::cout << std::endl << std::endl;
	main();
}

void margherita()
{
	std::ifstream read("db/mghr/margherita.txt");
	std::string str;
	std::cout << "The ingredients for Margherita are: \n";
	size_t i = 1;
	while (!read.eof())
	{
		std::getline(read, str);
		std::cout << " " << i << "." << str << std::endl;
		++i;
	}
	std::cout << "Would you like to examine the ingredients?\n";
	std::string answer;
	while (true)
	{
		std::cin >> answer;
		if (yesno(answer) > 0)
		{
			std::cout << std::endl;
			examine_mar();
		}
		else if (yesno(answer) == 0)
			break;
	}
	read.close();
	std::cout << std::endl << std::endl;
	main();
}

void vegetariana()
{
	std::ifstream read("db/vege/vegetarian.txt");
	std::string str;
	std::cout << "The ingredients for Vegetariana are: \n";
	size_t i = 1;
	while (!read.eof())
	{
		std::getline(read, str);
		std::cout << " " << i << "." << str << std::endl;
		++i;
	}
	std::cout << "Would you like to examine the ingredients?\n";
	std::string answer;
	while (true)
	{
		std::cin >> answer;
		if (yesno(answer) > 0)
		{
			std::cout << std::endl;
			examine_vege();
		}
		else if (yesno(answer) == 0)
			break;
	}
	read.close();
	std::cout << std::endl << std::endl;
	main();
}
