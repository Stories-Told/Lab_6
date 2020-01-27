// Program to find the area of a rectangle,
// area of a circle, and the volume of a cylinder

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Global variables
const double pi = 3.1419; // Keeps pi constant for accuracy in calculations
double length, width, height, radius; // Variables to store the numbers for the calculations
char yesOrNo; // Variable to use for user input for asking to save calculations
int selectionChoice; // Variable to make calculation choice

// Forward declarations
double Calculate_Area_Of_Rectangle(double length, double width); // Calculates area of rectangle
double Calculate_Area_Of_Circle(double radius); // Calculates area of circle
double Calculate_Volume_Of_Cylinder(double radius, double height); // Calculates volume of cylinder
char Ask_To_Save_Calculation(char yesOrNo); // Ask the user if they want to save calculations or not

int main()
{
    // Displays the reason for the program
    // and the option selections
    cout << "***********************************************************\n";
    cout << "* Area of Rectangle / Area of Circle / Volume of Cylinder *\n";
    cout << "*                      Calculator                         *\n";
    cout << "***********************************************************\n\n";

    cout << "-----------------------------------------------------------\n";
    cout << "|                      OPTIONS                             |\n";
    cout << "-----------------------------------------------------------\n\n";

    cout << "1.) Area of Rectangle\n\n";
    cout << "2.) Area of Circle\n\n";
    cout << "3.) Volume of Cylinder\n\n";

    // User prompt to choose a calculation
    cout << "Enter Calculation Selection: ";
    cin >> selectionChoice;
    cout << endl;

    // If statement to check and see if the correct selection was inputed
    if (selectionChoice == 1 || selectionChoice == 2 || selectionChoice == 3 || selectionChoice == -1)
    {
        // While loop to keep the program running until -1 is entered
        while (selectionChoice != -1)
        {
            // Switch statement to check the selectionChoice variable against the different options
            switch (selectionChoice)
            {
                // Case 1 for finding the area of rectangle
            case 1:
                cout << "------------------------------------\n";
                cout << "Enter LENGTH of rectangle: ";
                cin >> length;
                cout << endl;

                cout << "Enter WIDTH of rectangle: ";
                cin >> width;
                cout << endl;

                cout << "-------------------------------\n";
                cout << "A = L * W\n";
                cout << "A = " << length << " * " << width << endl;
                cout << "AREA OF RECTANGLE: " << Calculate_Area_Of_Rectangle(length, width) << endl;
                cout << "-------------------------------\n";

                Ask_To_Save_Calculation(yesOrNo);
                break;

                // Case 2 for finding the area of a circle
            case 2:
                cout << "------------------------------------\n";
                cout << "Enter RADIUS of circle: ";
                cin >> radius;
                cout << endl;

                cout << "-------------------------------\n";
                cout << "A = pi * r^2\n";
                cout << "A = " << pi << " * " << radius << "^2" << endl;
                cout << "AREA OF CIRCLE: " << Calculate_Area_Of_Circle(radius) << endl;
                cout << "-------------------------------\n";

                Ask_To_Save_Calculation(yesOrNo);
                break;

                // Case 3 for finding the volume of a cylinder
            case 3:
                cout << "------------------------------------\n";
                cout << "Enter RADIUS of cylinder: ";
                cin >> radius;
                cout << endl;

                cout << "Enter HEIGHT of cylinder: ";
                cin >> height;
                cout << endl;

                cout << "-------------------------------\n";
                cout << "V = pi * r^2 * h\n";
                cout << "V" << " = " << pi << " * " << radius << "^2 * " << height << endl;
                cout << "VOLUME OF CYLINDER: " << Calculate_Volume_Of_Cylinder(radius, height) << endl;
                cout << "-------------------------------\n";

                Ask_To_Save_Calculation(yesOrNo);
                break;
            }
        }
    }
    else
    {
        // Using cin.ignore() to allow the user to press enter so that it doesn't
        // automatically jump straight to the new screen
        cin.ignore();
        cout << "\nINVALID SELECTION... PRESS ENTER TO RETURN TO MENU..." << endl;
        cin.ignore();

        system("CLS");
        return main();
    }


    return 0;
}

// Function for area of rectangle
double Calculate_Area_Of_Rectangle(double length, double width)
{
    double area;

    area = width * length;

    return area;
}

// Function for area of circle
double Calculate_Area_Of_Circle(double radius)
{
    double area;

    area = pi * pow(radius, 2.0);

    return area;
}

// Function for volume of cylinder
double Calculate_Volume_Of_Cylinder(double radius, double height)
{
    double volume;

    volume = pi * pow(radius, 2.0) * height;

    return volume;
}

// Function to ask user to save calculation or not
char Ask_To_Save_Calculation(char yesOrNo)
{
    cout << "Do you wish to save calculation(s)? (Y/N): ";
    cin >> yesOrNo;
    cout << endl;

    if (yesOrNo == 'Y' || yesOrNo == 'y')
    {
        cin.ignore();
        cout << "CALCULATION(S) SAVED... PRESS ENTER TO RETURN TO MENU...\n";
        cin.ignore();

        return main();
    }
    else if (yesOrNo == 'N' || yesOrNo == 'n')
    {
        cin.ignore();
        cout << "WIPING CALCULATION(S)... PRESS ENTER TO RETURN TO MENU...\n";
        cin.ignore();

        system("CLS");
        return main();
    }
    else
    {
        cin.ignore();
        cout << "INVALID INPUT...SAVING CALCULATION(S)... PRESS ENTER TO RETURN TO MENU...\n";
        cin.ignore();

        return main();
    }

    return 0;
}
