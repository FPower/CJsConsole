// CJsConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//V0.1
#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <array>

//Establish our own namespace for learning purposes
//Namespaces allow you to have for example learn::function
//This makes the code clearer!
namespace learn {
	int calcPrice(int quantity, float price) {
		price = quantity * price;
		return price;
	}

	template <class T>
	T getNumber(std::string inputtext, T& returnvalue) {

		std::string mine;

		std::cout << inputtext;
		std::getline(std::cin, mine);
		std::stringstream(mine) >> returnvalue;

		return returnvalue;
	}

	long getLong(std::string inputtext, long& returnvalue) {
		std::string mine;

		std::cout << inputtext;
		std::getline(std::cin, mine);
		std::stringstream(mine) >> returnvalue;

		return returnvalue;
	}

	long doFactorial(long a) {
		if (a > 1)
			return (a * doFactorial(a - 1));
		else
			return 1;
	}

}
int main()
{

	std::string mine;
	std::string option;
	float price;
	int userchoice;
	int quantity;
	int keepRunning;
	long factorial;

	//We only need to introduce the program once so it's outside the main loop
	std::cout << "\nThis is my test program.\nIt will grow as I learn!\n";
	std::cout << "This is CJs Test Program.";
	//Put my learning things between here.


	do {
		//User menu to try out my different programs inside my program
		std::cout << "\n\n\t----------Menu----------\n";
		std::cout << "\tPress 1 to use the price calculator\n";
		std::cout << "\tPress 2 to use the factorial calculator\n";
		std::cout << "\tPress 3 to see an array example.\n";
		std::cout << "\tPress the Any Key to exit\n\t";
		std::getline(std::cin, option);
		std::stringstream(option) >> userchoice;
		 

		//Choice 1 introduces a program to calculate price times quantity of items.
		if (userchoice == 1) {
			//Ask user for price of product to calculate
			learn::getNumber<float>("\t Enter Price: ", price);
			learn::getNumber<int>("\t Enter Price: ", quantity);
			
			price = learn::calcPrice(quantity, price);
			//Results printed
			std::cout << "\tTotal price: " << price << std::endl;
			
			keepRunning = 1;
		}
		else if (userchoice == 2) {
			learn::getLong("\tEnter the number that needs to be factorial-ed!\n", factorial);
			std::cout << "\t" << learn::doFactorial(factorial) << "\n";
			keepRunning = 1;
		}
		else if (userchoice == 3) {
			//First example uses built in array system.
			std::cout << "\n\tExample One \n";
			int myarray[3] = { 10,20,30 };
			for (int i = 0; i < 3; ++i) ++myarray[i];
			for (int elem : myarray)
				std::cout << "\t" << elem << '\n';

			//second example will use <array> system
			std::cout << "\n\tExample Two \n";
			std::array<int, 3> cjarray{ 10,20,30 };

			for (int i = 0; i < cjarray.size(); i++) ++cjarray[i];
			for (int elem : cjarray)
				std::cout << "\t" << elem << '\n';

			keepRunning = 1;
		}
		//Everything else should terminate to the proper variable signaling the end of the program.
		else {
			keepRunning = 0;
		}
	}
	//This stays until I'm done learning console apps
		while (keepRunning != 0);
	return 0;
}
