// Hi, my name is Brandon and I developed this program. 
// This program is a point of sale for a surf shop, the user has to enter how many surf boards they are wanting to buy.
// and it prints out that cost of the surf board at the end. 

#include <iostream>
#include <iomanip>
#include <cctype>

//Use the standard naming convention.
using namespace std;

//Define the required constants.
#define costOfxxxSmallSurfboard 50.00;
#define costOfSmallSurfboard 175.00;
#define costOfMediumSurfboard 190.00;
#define costOfLargeSurfboard 200.00;

//Declare the prototype of the required function.
void ShowUsage();
void MakePurchase(int& iTotalextraSmall, int& iTotalSmall, int& iTotalMedium,
    int& iTotalLarge);

void DisplayPurchase(const int iTotalextraSmall, const int iTotalSmall, const int
    iTotalMedium, const int iTotalLarge);

void DisplayTotal(const int iTotalextraSmall, const int iTotalSmall, const int
    iTotalMedium, const int iTotalLarge);

//Start the main() method.
int main()
{
    //Creating variables.
    char choice, size;
    int quantity;
    int totalQuantityxxxSmall, totalQuantitySmall, totalQuantityMedium,
        totalQuantityLarge;

    totalQuantityxxxSmall = totalQuantitySmall = totalQuantityMedium =
        totalQuantityLarge = 0;

    //Display the header.
    cout << "************************************************************" << endl;
    cout << "***** Welcome to my Johnny Utah's PointBreak Surf Shop *****" << endl;
    cout << "************************************************************";
    cout << endl << endl;

    //Display the menu by calling the function
    //ShowUsage().
    ShowUsage();

    //Prompt the user to enter the selection.
    cout << "\nPlease enter selection: ";
    cin >> choice;

    //Start a while loop till the choice selected by
    //the user is not q.
    while (tolower(choice) != 'q')\
    {
        //If the choice is s, then call the function
        //ShowUsage().
        if (tolower(choice) == 's')
        {
            ShowUsage();
        }

        //If the choice is p, then call the function
        //MakePurchase() by passing required arguments.
        else if (tolower(choice) == 'p')
        {
            MakePurchase(totalQuantityxxxSmall, totalQuantitySmall,
                totalQuantityMedium, totalQuantityLarge);
            cout << endl;
        }

        //If the choice is c, then call the function
        //DisplayPurchase().
        else if (tolower(choice) == 'c')
        {
            //If the quantity of all three surfboards is 0, then display an appropriate message.
            if (totalQuantityxxxSmall == 0 &&
                totalQuantitySmall == 0 &&
                totalQuantityMedium == 0 &&
                totalQuantityLarge == 0)
            {
                cout << "No purchase made yet." << endl;
            }
            else
            {
                DisplayPurchase(totalQuantityxxxSmall,
                    totalQuantitySmall,
                    totalQuantityMedium,
                    totalQuantityLarge);
            }
        }

        //If the choice is t, then call the function
        //DisplayTotal().
        else if (tolower(choice) == 't')
        {
            //If the quantity of all three surfboards is 0, then display an appropriate message.
            if (totalQuantityxxxSmall == 0 &&
                totalQuantitySmall == 0 &&
                totalQuantityMedium == 0 &&
                totalQuantityLarge == 0)
            {

                cout << "No purchase made yet." << endl;
            }
            else
            {
                DisplayTotal(totalQuantityxxxSmall,
                    totalQuantitySmall,
                    totalQuantityMedium,
                    totalQuantityLarge);
            }
        }
        //Otherwise, display an appropriate message.
        else
        {
            cout << "Invalid choice!" << endl;
        }

        //Prompt the user to enter the selection again.
        cout << "\nPlease enter selection: ";
        cin >> choice;
    }
    cout << "Thank you" << endl;
}

//Define the function ShowUsage().
void ShowUsage()
{
    //Print the menu of choices.
    cout << "To show program usage press 'S'" << endl;
    cout << "To purchase a surfboard press 'P'" << endl;
    cout << "To display current purchase press 'C'" << endl;
    cout << "To display total amount due press 'T'" << endl;
    cout << "To quit the program press 'Q'" << endl;
}

//Define the function MakePurchase().
void MakePurchase(int& iTotalextraSmall,int& iTotalSmall, int& iTotalMedium,
    int& iTotalLarge)
{
    //Creating variables.
    int quantity = 0;
    char size = '\0';

    //Asking the user to enter the quantity and size of the surfboard.
    cout << "Please enter the quantity and type ";
    cout << "(X = XXSmall, S=small, M=medium, L=large) of ";
    cout << "surfboard you would like to purchase:";
    cin >> quantity >> size;
    
    //If the purchased surfboard's size is xxxsmall, then add its quantity to the total of xxxsmall surfboards.

     if (tolower(size) == 'x')
     {
     iTotalextraSmall = iTotalextraSmall + quantity;
     }

    //If the purchased surfboard's size is small, then add its quantity to the total of small surfboards.
     else if (tolower(size) == 's')
    {
        iTotalSmall = iTotalSmall + quantity;
    }
    
    //If the purchased surfboard's size is medium, then add its quantity to the total of medium surfboards.
     else if (tolower(size) == 'm')
    {
        iTotalMedium = iTotalMedium + quantity;
    }

    //If the purchased surfboard's size is large, then add its quantity to the total of large surfboards.
    else if (tolower(size) == 'l')
    {
        iTotalLarge = iTotalLarge + quantity;
    }

     
}

//Define the function DisplayPurchase().
void DisplayPurchase(const int iTotalextraSmall,const int iTotalSmall, const int
    iTotalMedium, const int iTotalLarge)
{
    
   
    //If the total quantity of small surfboards is more than 0, then display its quantity.
    if (iTotalSmall > 0)
    {
        cout << "The total number of small ";
        cout << "surfboards is " << iTotalSmall;
        cout << endl;
    }
     
    //If the total quantity of medium surfboards is more than 0, then display its quantity.
      if (iTotalMedium > 0)
    {
        cout << "The total number of medium ";
        cout << "surfboards is " << iTotalMedium;
        cout << endl;
    }

    //If the total quantity of large surfboards is more than 0, then display its quantity.
      if  (iTotalLarge > 0)
    {
        cout << "The total number of large ";
        cout << "surfboards is " << iTotalLarge;
        cout << endl;
    }
    
    //If the total quantity of xxxsmall surfboards is more than 0, then display its quantity.
       if (iTotalextraSmall > 0)
    {
        cout << "The total number of xxxsmall ";
        cout << "surfboards is " << iTotalextraSmall;
        cout << endl;
    }
    
}

//Define the function DisplayTotal().
void DisplayTotal(const int iTotalextraSmall,const int iTotalSmall, const int
    iTotalMedium, const int iTotalLarge)
{

    double surfboard_amount_xxxsmall, surfboard_amount_small,
        surfboard_amount_medium, surfboard_amount_large,
        totalAmtDue;
    surfboard_amount_xxxsmall = surfboard_amount_small =
        surfboard_amount_medium = surfboard_amount_large =
        totalAmtDue = 0;

    //Set the precision for the double values to two decimal places.
    cout << fixed << setprecision(2);
   
    //If the total quantity of small surfboards is more than 0, then display its quantity and total.
    if (iTotalextraSmall > 0)
    {
        //Calculate the total of the xxxsmall surfboards by multiplying its total quantity with its unit price value.
        surfboard_amount_xxxsmall = iTotalextraSmall *
            costOfxxxSmallSurfboard;
        cout << "The total number of xxxsmall surfboards ";
        cout << "is " << iTotalextraSmall;
        cout << " at a total of $";
        cout << surfboard_amount_xxxsmall << endl;

        //Add the total of small surfboards to the
        //total amount.
        totalAmtDue = totalAmtDue +
            surfboard_amount_xxxsmall;
    }

    //If the total quantity of small surfboards is more than 0, then display its quantity and total.
    if (iTotalSmall > 0)
    {
        //Calculate the total of the small surfboards by multiplying its total quantity with its unit price value.
        surfboard_amount_small = iTotalSmall *
            costOfSmallSurfboard;
        cout << "The total number of small surfboards ";
        cout << "is " << iTotalSmall;
        cout << " at a total of $";
        cout << surfboard_amount_small << endl;

        //Add the total of small surfboards to the total amount.
        totalAmtDue = totalAmtDue +
            surfboard_amount_small;
    }

    //If the total quantity of medium surfboards is more than 0, then display its quantity and total.
    if (iTotalMedium > 0)
    {
        //Calculate the total of the medium surfboards by multiplying its total quantity with its unit price value.
        surfboard_amount_medium = iTotalMedium *
            costOfMediumSurfboard;

        cout << "The total number of medium ";
        cout << "surfboards is " << iTotalMedium;
        cout << " at a total of $";
        cout << surfboard_amount_medium << endl;

        //Add the total of medium surfboards to the total amount.
        totalAmtDue = totalAmtDue +
            surfboard_amount_medium;
    }

    //If the total quantity of large surfboards is more than 0, then display its quantity and total.
    if (iTotalLarge > 0)
    {

        //Calculate the total of the large surfboards by multiplying its total quantity with its unit price value.
        surfboard_amount_large = iTotalLarge *
            costOfLargeSurfboard;
        cout << "The total number of large ";
        cout << "surfboards is " << iTotalLarge;
        cout << " at a total of $";
        cout << surfboard_amount_large << endl;

        //Add the total of large surfboards to the total amount.
        totalAmtDue = totalAmtDue +
            surfboard_amount_large;
    }

    //Display the total amount due.
    cout << "Amount due: $" << totalAmtDue << endl;
}
