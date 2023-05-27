/* Programmer Name: Connor Hathaway
   
   Description: For this program, the user will be prompted to input a string of alphabetical characters. The program will then use the entered string
   as an argument to pass into three functions in main: One to convert the string to all uppercase letters, one to convert it to lowercase, and one to 
   flip each letter in the string to the opposite case. It will output the final results from each function, and ask the user if they would like to
   enter another string.

   Date: 4/17/23
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

// Function to convert argument string into all uppercase
void UpperConversion(string str) {
    for (int i = 0; i < str.length(); i++) {
        putchar(toupper(str[i]));
    }
}

// Function to convert argument string to all lowercase
void LowerConversion(string str) {
    for (int i = 0; i < str.length(); i++) {
        putchar(tolower(str[i]));
    }
}

// Function to check the case of each letter in the argument string and switch each one to the opposite case (i.e. lowercase to uppercase)
void FlipConversion(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            putchar(toupper(str[i]));
        }
        else if (isupper(str[i])) {
            putchar(tolower(str[i]));
        }
    }
}

int main()
{
    string userString;
    char userInput = 0;

    // Do while loop in main runs it at least once, keeps going until the user ends the program
    do {
        cout << "Enter a string of letters: ";
        cin >> userString;
        cout << "\nThe string with all cases flipped: ";
        FlipConversion(userString);
        cout << "\nThe string in all lowercase: ";
        LowerConversion(userString);
        cout << "\nThe string in all uppercase : ";
        UpperConversion(userString);

        cout << endl;
        cout << "\nWould you like to enter another string of letters? (Y/N) ";
        cin >> userInput;
        cout << endl;

    } while (userInput == 'Y' || userInput == 'y');
}
