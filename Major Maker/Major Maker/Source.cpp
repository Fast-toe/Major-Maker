#include <iostream> 
using namespace std;

void majorSelection()
{

	cout << "Insert First Name and Major\n"
	     << "1.Welding Technology, Associate of Applied Science\n2.General Studies, Associate of Arts\n"
	 	 << "3.Accounting, Associate of Applied Science\n4.Real Estate, Associate of Applied Science\n"
 	     << "5.Eye Care Technology, Associate of Applied Science\n\n";

}
void classtimes() // to reduce line of code 
{
	cout << "Face to Face\n"
		 << "6:30am  7:40am  8:50am  10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm\n"
		 << "Online\n"
		 << "10:00am  11:10am  12:20pm  1:30pm  2:40pm  3:50pm  5:00pm  6:10pm  7:20pm  8:30pm\n\n";
}
void menu()
{
	bool running = true;
	while (running) //menu
	{
		// 0 will start the program, 1 will end the program
		cout << "0. Get Started\n" << "1. Quit\n";
		int choice;
		cin >> choice;

		string userName; //store name and major selection
		int majorNum;

		switch (choice)
		{
		case 0:
			majorSelection();
			cin >> userName; // get name and major
			cin >> majorNum;

			switch (majorNum)
			{
			case 1:
				cout << "\n\n" << userName << "\nYou have pick Welding Technology, Associate of Applied Science\n"
					 << "The classes you must take are\nIntroduction to Blueprint Reading,\n"
					 << "Fundamentals of Oxy - Fuel Welding and Cutting,\nIntroduction to Gas Tungsten Arc Welding(GTAW),\n"
					 << " and Advanced Shielded Metal Arc Welding(SMAW)\n";
				classtimes();
				break;
			case 2:
				cout << "\n\n" << userName << "\nYou have pick General Studies, Associate of Arts "
					<< "The classes are you must take are\n Composition I,\n"
					<< "College Algebra,\nBiology for Science Majors,\n and  United States History\n";
				classtimes();
				break;
			case 3:
				cout << "\n\n" << userName << "\nYou have pick Accounting, Associate of Applied Science\n"
					 << "The classes you must take are\nPrinciples of Financial Accounting,\nBusiness Principles,\n"
					 << "Payroll and Business Tax Accounting,\n and Introduction to Computerized Accounting\n";
				classtimes();
				break;
			case 4:
				cout << "\n\n" << userName << "\nYou have pick Real Estate, Associate of Applied Science\n"
					 << "The classes you must take are\nPrinciples of Real Estate,\nLaw of Contracts,\n"
					 << "Real Estate Finance,\n and Law of Agency\n";
				classtimes();
				break;
			case 5:
				cout << "\n\n" << userName << "\nYou have pick Eye Care Technology, Associate of Applied Science\n"
					 << "The classes you must take are\nVisual System,\nOphthalmic Techniques,\n"
					 << "Introduction to Eye Care Professions,\n and Vision Care Office Procedures\n";
				classtimes();
				break;
			}
			break;
		case 1:
			cout << "Thank You\n";
			running = false;
			break;
		}
	}
}
int main()
{
	menu();
}