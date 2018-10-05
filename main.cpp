/* 
 * File:   main.cpp
 * Author: Spencer Stockton
 *
 * Created on April 2, 2018, 
 * 
 * This program is meant to create an object that will store the first and last
 * name, phone number and age of a person. It will give the object a number that
 * will be known at the record number.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Records.h"


using namespace std;

// this is the variable to store the age for the person
int age;
// this will store the phone number
string phone;
// This is for the "for" block
int i;
// this is the default for the switch selection
int selection = 0;
// this is the counter starting at 0
int counter = 0;
// this will store the names before they are stored
string name;
// this is to store the record number 
int recNumber = 1;
// this is the variable for the exit option
char exitChoice;

// Here there will be a while to show the menu options. The user will be asked
// to enter a selection. That choice will go into the switch case. 
int main() {
    // This creates an array for the Records object(s).
    Records record[10];
// This is the while block that will display a continue menu
while (selection != 9){
        cout << "Please make a selection." << endl;
        cout << "1. Add information to a record." << endl;
        cout << "2. Display all record information." << endl;
        cout << "3. Exit program." << endl;
        
        // Here the user will enter a selection for the menu.
        cin >> selection;
    
    // This will check if the input is valid
    if (cin.fail() || selection < 1 || selection > 3){
        // this will clear the input from the user
        cin.clear();
        cin.ignore();
        // This is the error message for input that is not valid
        cout << "\nThat is not a valid choice.\nPlease make a valid selection.\n" << endl;
        // this returns to the start of the main program.
    } // end if
    
    // This switch will carry out the command for the selection
    switch (selection){
        case 1:
            record[counter].setRecord(recNumber);
            cout << "Enter first name: ";
            cin >> name;            
            record[counter].setFirstName(name);
            cout << "Enter last name: ";
            cin >> name;
            record[counter].setNameLast(name);
            cout << "Enter age: ";
            cin >> age;
            record[counter].setAge(age);
            cout << "Enter phone number with dashes: ";
            cin >> phone;
            record[counter].setPhoneNumber(phone);
            cout << "\n";
            counter++;
            recNumber++;
        break;
        
        case 2:
            if (counter > 0){
                for (i=0; i<counter; i++){
                    cout << "\nRecord Number: ";
                    cout << record[i].getRecord() << endl;
                    cout << "Name: ";
                    cout << record[i].getFirstName() << " ";
                    cout << record[i].getNameLast() << endl;
                    cout << "Age: ";
                    cout << record[i].getAge() << endl;
                    cout << "Phone Number: ";
                    cout << record[i].getPhone() << endl;
                }
            }
            else{
                cout << "\nThere are no records at this time." << endl;
            }
            cout << "\n";
            break;
            
        case 3: 
            cout << "You have chosen to exit the program.\nWould you like to exit? y/n" << endl;
            cin >> exitChoice;
            if (exitChoice == 'y'){
                cout << "Goodbye!";
                selection = 9;
            }
            else {
                break;
            }
    } //end switch
} //end while
        
    return 0;
}

