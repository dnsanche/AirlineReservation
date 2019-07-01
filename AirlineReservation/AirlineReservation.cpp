// AirlineReservation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "windows.h"
#include <cstdlib>

using namespace std;

int menuOption;

void back() {
	cout << "Do you want to continue? (yes or no)\n";
	string back;
	cin >> back;
	if (back == "yes")
	{
		cout << "Back to menu!";
	}
	else
	{
		exit(0);
	}
	system("cls");
}

int main()
{
	int departure;
	string origin;
	string destination;
	int flightselection = 0;
	int seatclass = 0;
	string fullname;
	int ssn = 0;

	while (menuOption != 6)
	{
		cout << "Welcome to Dani's Airline Reservation System\n";
		cout << "Please select an option below:\n";
		cout << "1) Book Seat\n";
		cout << "2) Flight schedule\n";
		cout << "3) Passenger information\n";
		cout << "4) Flight details\n";
		cout << "5) Ticket information\n";
		cout << "6) Exit\n";
		cout << "Enter option number: ";
		cin >> menuOption;
		system("cls");
		
		if (menuOption == 1)
		{
			cout << "\nSeat options:";
			cout << "\n1) Business Class";
			cout << "\n2) Tourist Class";
			cout << "\nEnter option number: ";
			cin >> seatclass;
			system("cls");
			
			if (seatclass == 1)
			{
				cout << "Business class seat booked!\n";
				back();
			}

			else if (seatclass == 2)
			{
				cout << "Tourist class seat booked!\n";
				back();
			}
		}

		if (menuOption == 2)
		{
			cout << "\nFlight schedule: ";
			cout << "Enter date of travel (ddmmyy): " << endl; cin >> departure;
			cout << "Enter city origin: "; 
			cin.ignore();
			getline(cin, origin);
			cout << "Enter destination: ";
			/*cin.ignore()*/;
			getline(cin, destination);
			
			cout << "\nAvailable schedules: " << endl;
			cout << "1) AA434: 10 am " << origin << "- " << destination << endl;
			cout << "2) AA565: 4 pm " << origin << "- " << destination << endl;
			cout << "3) AA777: 10 pm " << origin << "- " << destination << endl;
			cout << "Choose flight (1,2,3): "; cin >> flightselection;
			system("cls");

			cout << "Flight booked!\n";
			back();
		}

		if (menuOption == 3)
		{
			cout << "Passenger information:\n";
			cout << "Enter your full name: "; 
			cin.ignore();
			getline(cin, fullname);
			cout << "Enter your SSN: "; cin >> ssn;
			cout << "Passenger information entered!\n";
			back();
		}

		if (menuOption == 4)
		{
			cout << "Departure: " << departure << endl;
			if (flightselection == 1)
			{
				cout << "Flight: AA434\n" << "Time: 10 am\n";
			}
			else if (flightselection == 2)
			{
				cout << "Flight: AA565\n" << "Time: 4 pm\n";
			}
			else if (flightselection == 3)
			{
				cout << "Flight: AA777\n" << "Time: 10 pm\n";
			}
			cout << "Origin: " << origin << endl;
			cout << "Destination: " << destination << endl;
			back();
		}

		if (menuOption == 5)
		{
			cout << "======Ticket information:======\n";
			cout << "Passenger: " << fullname << endl;
			cout << "FROM: " << origin << endl;
			cout << "TO: " << destination << endl;
			cout << "Departure: " << departure << endl;
			if (flightselection == 1)
			{
				cout << "Carrier/Flight: AA434\n" << "Time: 10 am\n";
			}
			else if (flightselection == 2)
			{
				cout << "Carrier/Flight: AA565\n" << "Time: 4 pm\n";
			}
			else if (flightselection == 3)
			{
				cout << "Carrier/Flight: AA777\n" << "Time: 10 pm\n";
			}
			if (seatclass == 1)
			{
				cout << "Seat: 1\n";
				cout << "Class: Business\n";
			}
			else if (seatclass == 2)
			{
				cout << "Seat: 20\n";
				cout << "Class: Tourist\n";
			}
			back();
		}

		if (menuOption == 6)
		{
			exit(0);
		}

	}
}
 
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
