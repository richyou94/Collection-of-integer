/*
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest Number
    Q - Quit
    
    Enter your choice

 * if illegal choice is made, display "Unknown selection, please try again"'
 * if users enter P or p, should display all of the elements (ints) in the list.
 * if list is empty you should display "[] - the list is empty"
 * if is not empty, display inside [] separated by sapce
 * 
 * enter a , prompt the user for an integer to add to the list
 * if user enters 5, "5 added"
 * 
 * if user enters m, calculate mean of elements in the list
 * if empty, "Unable to calculate the mean - no data"
 * 
 * if user enters s display smallest element in the list
 * "The smallest number is ?"
 * if empty, "unable to determine the largest number - list is empty"
 * 
 * if enters l, display largest element in the list,
 * "The largest number is ?"
 * if list is empty, "Unable to determine the largest number - list is empty"
 * 
 * if user enters q, then "Goodbye" program terminates
 * 
 * Additional functionality, 
 * - search for number in the list and if found display the number of times it occurs in the list
 * clearing out the list, (make it empty again) , vector class has .clear() method
 * don't allow duplicate entries
 * come up with my own ideas. 
 * 
     
*/ 

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> list_integer {100,1,3,2};
//    cout << list_integer.size() << endl;
//    for (int i = 0; i < list_integer.size(); ++i) {
//        cout << list_integer[i] << endl;        
//    }
while(true) {
    char input {};
    
    cout << "P - Print numbers" << endl;
    cout << "A - add a number" << endl;
    cout << "M - display mean of the numbers" << endl;
    cout << "S - display the smallest numbers" << endl;
    cout << "L - display the largest number" << endl;
    cout << "Q - Quit" << endl;
    
    cout << "Enter your choice ";
    cin >> input;
    
    if (input == 'q' || input == 'Q')
        break;
}    
    
    cout << endl;
    return 0;
}