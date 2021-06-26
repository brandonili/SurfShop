// Hi, my name is Brandon and I developed this program. 
// This program is a point of sale for a surf shop, the user has to enter how many surf boards they are wanting to buy.
// and it prints out that cost of the surf board.

#include<iostream>

//Use the standard naming convention.
using namespace std;

void exit_fun(void)
{
	cout << "Thank You! ";
}

//Display the menu by calling the function
	//ShowUsage().
void ShowUsage()
{
	cout << "The user has to select a choice for accessing different functions" << endl;
	cout << "The price of a large surfboard is $200" << endl;
	cout << "The price of a medium surfboard is $190" << endl;
	cout << "The price of a small surfboard is $175" << endl;
	cout << "The price of a xxxsmall surfboard is $150" << endl;
	cout << "Please follow the instructions at each stages to get the information" << endl;
}

//Declare the DisplayPurchase of the required function.
//Define the function DisplayPurchase().
void DisplayPurchase(const int iTotalxxxSmall, const int iTotalSmall, const int iTotalMedium, const int iTotallLarge)
{
	if (iTotalxxxSmall == 0 && iTotalSmall == 0 && iTotalMedium == 0 && iTotallLarge == 0)
	{
		cout << "No purchases made yet." << endl;
		return;
	}
	if (iTotalxxxSmall !=0)
	{
		cout << "The total number of xxxsmall surfboards is: " << iTotalxxxSmall << endl;
	}
	if (iTotalSmall != 0)
	{
		cout << "The total number of small surfboards is: " << iTotalSmall << endl;
	}
	if (iTotalMedium != 0)
	{
		cout << "The total number of medium surfboards is: " << iTotalMedium << endl;
	}
	if (iTotallLarge != 0)
	{
		cout << "The total number of large surfboards is: " << iTotallLarge << endl;
	}
}

//Declare the DisplayTotal of the required function.
//Define the function DisplayTotal().
void DisplayTotal(const int iTotalxxxSmall, const int iTotalSmall, const int iTotalMedium, const int iTotallLarge)
{
	if (iTotalxxxSmall == 0 && iTotalSmall == 0 && iTotalMedium == 0 && iTotallLarge == 0)
	{
		cout << "No purchases made yet." << endl;
		return;
	}

	//Creating variables.
	int xxxsmall = 0;
	int small = 0;
	int medium = 0;
	int large = 0;

	if (iTotalxxxSmall != 0)
	{
		xxxsmall = iTotalxxxSmall * 150; //cost of 1 xxxsmall surfboard is 150
		cout << "The total number of xxxsmall surfboards is: " << iTotalxxxSmall << "at a total cost of $" << xxxsmall << endl;
	}

	if (iTotalSmall != 0)
	{
		small = iTotalSmall * 175; //cost of 1 small surfboard is 175
		cout << "The total number of small surfboards is: " << iTotalSmall << "at a total cost of $" << small << endl;
	}
	if (iTotalMedium != 0)
	{
		medium = iTotalMedium * 190; //cost of 1 medium surfboard is 190
		cout << "The total number of medium surfboards is: " << iTotalMedium << "at a total cost of $" << medium << endl;
	}
	if (iTotallLarge != 0)
	{
		large = iTotallLarge * 200; //cost of 1 large surfboard is 200
		cout << "The total number of large surfboards is: " << iTotallLarge << "at a total cost of $" << large << endl;
	}

	//create variable total and the the sum of xxxsmall + small + 
	// medium + large 
	int total = xxxsmall + small + medium + large;
	cout << "Amount due: $" << total << endl;
}

//Declare the MakePurchase of the required function.
//Define the function MakePurchase().
void MakePurchase(int& iTotalxxxSmall, int& iTotalSmall, int& iTotalMedium, int& iTotallLarge)
{
	cout << "Please enter the quantity and type(XS-Extra extra extra Small, S-Small, L-Large, M-Medium)of surfboard you would like to purchase: ";
	int quan;
	char type;
	cin >> quan >> type;
	if (type == 'L' || type == 'l') iTotallLarge += quan;
	else if (type == 'X' || type == 'x') iTotalxxxSmall += quan;
	else if (type == 'M' || type == 'm') iTotalMedium += quan;
	else iTotalSmall += quan;
}

//Start the main() method.
int main()
{
	//Display the header.
	cout << "************************************************************" << endl;
	cout << "***** Welcome to my Johnny Utah's PointBreak Surf Shop *****" << endl;
	cout << "************************************************************";
	cout << endl << endl; //to produce the header design
	
    //Print the menu of choices.
	cout << "To show program usage press 'S'" << endl;
	cout << "To purchase a surfboard press 'P'" << endl;
	cout << "To display current purchase press 'C'" << endl;
	cout << "To display total amount due press 'T'" << endl;
	cout << "To quit the program press 'Q'" << endl;
	
	//initially nobody has purchased anything
	int iTotalxxxSmall = 0, iTotalSmall = 0, iTotalMedium = 0, iTotallLarge = 0; 
	
	//we run an infinite loop to take input from user unless the user gives Q or q
	while (1) 
	{

		//Prompt the user to enter the selection
		cout << "Please enter selection: ";
		char select;
		cin >> select;

		
		switch (select)
		{
		case 'S':case 's':
		{
			ShowUsage();
			break;
		}
		case 'P':case 'p':
		{
			MakePurchase(iTotalxxxSmall, iTotalSmall, iTotalMedium, iTotallLarge);
			break;
		}
		case 'C':case 'c':
		{
			DisplayPurchase(iTotalxxxSmall, iTotalSmall, iTotalMedium, iTotallLarge);
			break;
		}
		case 'T':case 't':
		{
			DisplayTotal(iTotalxxxSmall, iTotalSmall, iTotalMedium, iTotallLarge);
			break;
		}
		case 'Q':case 'q':
		{
			//executing this function before exiting
			atexit(exit_fun); 
			exit(10);
			//break;
		}
		default: break;
		}
		cout << endl;
	}
	return 0;
}