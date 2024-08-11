//Name: - Manas Gautam
//PRN: - 23070123081
//Branch: - E&Tc{B1}

//Experiment 5.1
#include <iostream> // Include input-output stream library
using namespace std; // Use the standard namespace

int main() {
    double n1, n2, n3; // Declare variables for three numbers
    
    cout << "Enter three numbers: "; // Prompt user for input
    cin >> n1 >> n2 >> n3; // Read three numbers from user

    // Determine and display the largest number
    if (n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1 << endl; // n1 is the largest
    else if (n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2 << endl; // n2 is the largest
    else
        cout << "Largest number: " << n3 << endl; // n3 is the largest

    return 0; // End of the program
}


//Experiment 5.2
#include <iostream> // Include input-output stream library
using namespace std; // Use the standard namespace

int main() {
    double n1, n2, n3; // Variables for three numbers

    cout << "Enter three numbers: "; // Prompt for input
    cin >> n1 >> n2 >> n3; // Read three numbers from user

    // Determine and display the largest number using nested if-else
    if (n1 >= n2 && n1 >= n3) // Check if n1 is the largest
        cout << "Largest number: " << n1 << endl;
    else if (n2 >= n3) // Check if n2 is larger than n3
        cout << "Largest number: " << n2 << endl;
    else // If neither n1 nor n2 is the largest, n3 is
        cout << "Largest number: " << n3 << endl;

    return 0; // End of program
}

//Experiment 5.3
#include <iostream> // Include input-output stream library
using namespace std; // Use the standard namespace

int main() {
    int choice; // Variable to store the user's choice

    // Display menu of days
    cout << "1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n7. Sunday\n";
    cout << "Enter your choice: ";
    cin >> choice; // Read user's choice

    // Use switch to determine and display the day of the week
    switch(choice) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        case 7: cout << "Sunday" << endl; break;
        default: cout << "Wrong Input" << endl; break; // Handle invalid input
    }

    return 0; // End of the program
}
