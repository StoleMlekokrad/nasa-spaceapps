#pragma once
#include <stdc++.h>
#include "food.h"
void main();
void examine_cpr()
{
	std::ifstream read("db/cpr/capriciossa_rating_dough.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"pizza dough\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
		
	}
	else return;

	read.close();
	std::cout << std::endl;//newline
	read.open("db/cpr/capriciossa_rating_ham.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"ham\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl;//newline
	read.open("db/cpr/capriciossa_rating_mozzarella.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"mozzarella\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl;//newline
	read.open("db/cpr/capriciossa_rating_mushrooms.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"fresh mushrooms\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl;
	read.open("db/cpr/capriciossa_rating_olives.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"olives\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl << std::endl;
	main();
}

void examine_mar()
{
	std::ifstream read("db/mghr/margherita_rating_dough.txt");
	if (read.is_open())
	{
		size_t rating = 0;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];

		arr[0] = "Resource extraction: ";
		arr[1] = "Manufacutre: ";
		arr[2] = "Useage: ";
		arr[3] = "End-of-Life Management: ";

		std::cout << "The ratings for the \"pizza dough\" are: \n";

		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; i < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();

	std::cout << std::endl;//newline
	
	read.open("db/mghr/margherita_rating_basil.txt");
	if (read.is_open())
	{
		size_t rating = 0;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];

		arr[0] = "Resource extraction: ";
		arr[1] = "Manufacutre: ";
		arr[2] = "Useage: ";
		arr[3] = "End-of-Life Management: ";

		std::cout << "The ratings for the \"basil\" are: \n";

		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; i < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;

	read.close();

	std::cout << std::endl;//newline

	read.open("db/mghr/margherita_rating_garlic.txt");
	if (read.is_open())
	{
		size_t rating = 0;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];

		arr[0] = "Resource extraction: ";
		arr[1] = "Manufacutre: ";
		arr[2] = "Useage: ";
		arr[3] = "End-of-Life Management: ";

		std::cout << "The ratings for the \"garlic\" are: \n";

		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; i < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();

	std::cout << std::endl;

	read.open("db/mghr/margherita_rating_mozzarella.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"mozzarella\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();

	std::cout << std::endl;

	read.open("db/mghr/margherita_rating_olive.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"olive oil\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();

	std::cout << std::endl;

	read.open("db/mghr/margherita_rating_tomato.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"tomatoes\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();

	std::cout << std::endl;

	read.open("db/mghr/margherita_rating_tomatoS.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"tomatoe sauce\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl << std::endl;
	main();
}

void examine_vege()
{
	std::ifstream read("db/vege/vegetarian_rating_dough.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"pizza dough\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;

	}
	else return;

	read.close();
	std::cout << std::endl;//newline
	read.open("db/vege/vegetarian_rating_basil.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"basil\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl;//newline
	read.open("db/vege/capriciossa_rating_mozzarella.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"mozzarella\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl;//newline
	read.open("db/vege/vegetarian_rating_diced.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"diced tomato can\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl;
	read.open("db/vege/vegetarian_rating_garlic.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"garlic\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl << std::endl;
	read.open("db/vege/vegetarian_rating_olive.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"olive oil\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl << std::endl;
	read.open("db/vege/vegetarian_rating_onion.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"onions\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	read.close();
	std::cout << std::endl << std::endl;
	read.open("db/vege/vegetarian_rating_zucchini.txt");
	if (read.is_open())
	{
		size_t rating;
		size_t i = 0;
		size_t numarr[4];
		float avg = 0;
		std::string arr[4];
		arr[0] = " Resource extraction: ";
		arr[1] = " Manufacutre: ";
		arr[2] = " Useage: ";
		arr[3] = " End-of-Life Management: ";

		std::cout << "The ratings for the \"zucchini\" are: \n";
		while (read >> rating)
		{
			numarr[i] = rating;
			std::cout << arr[i] << rating << std::endl;
			++i;
		}
		for (size_t j = 0; j < 4; ++j)
			avg = avg + (numarr[j] / (float)4);
		std::cout << "Average rating: " << avg << std::endl;
	}
	else return;
	std::cout << std::endl << std::endl;
	main();
}
