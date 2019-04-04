// CJsConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//V0.1
#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>

int main()
{

	std::string mine;
	std::string option;
	float price;
	int userchoice;
	int quantity;
	int keepRunning;

	//We only need to introduce the program once so it's outside the main loop
	std::cout << "\nThis is my test program.\nIt will grow as I learn!\n";
	std::cout << "This is CJs Test Program.";
	//Put my learning things between here.


	do {
		//User menu to try out my different programs inside my program
		std::cout << "\n\n\t----------Menu----------\n";
		std::cout << "\tPress 1 to use the price calculator\n";
		std::cout << "\tPress 2 to exit\n";
		std::getline(std::cin, option);
		std::stringstream(option) >> userchoice;

		if (userchoice == 1) {
			//Ask user for price of product to calculate
			std::cout << "\tEnter price: ";
			std::getline(std::cin, mine);
			std::stringstream(mine) >> price;

			//Ask user for quantity of product
			std::cout << "\tEnter quantity: ";
			std::getline(std::cin, mine);
			std::stringstream(mine) >> quantity;
			
			//Results printed
			std::cout << "\tTotal price: " << price * quantity << std::endl;
			
			keepRunning = 1;
		}
		else if (userchoice == 2) {
			keepRunning = 0;
		}
		else {
			keepRunning = 0;
		}
	}
	//This stays until I'm done learning console apps
		while (keepRunning == 1);
	return 0;
}