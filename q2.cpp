#include <iostream>
using namespace std;// it used for the names and objects 

int main() {
    while (true)  {//my first while loop
        int num;//declare a number
        cout << "Please enter a positive integer: \n";
        cin >> num;

        while (num <= 0) {
            cout << num << " is not a positive integer" << "\n";
            cout << "Please enter a positive integer: \n";
            cin >> num;
        }

        cout << "The divisors of " << num << " are:" << "\n";
        for (int i = num; i >= 1; i--) {//for loop to play with some calculation
            if (num % i == 0) {//my first condition
                cout << i << "\n";
            }
        }

        char choice;//declare a character
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> choice;

        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << "\n";
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
        }

        if (choice == 'N' || choice == 'n') {
            cout << "Exiting program." << "\n";
            break;//break when the condition is done
        }
    }

    return 0;
}



