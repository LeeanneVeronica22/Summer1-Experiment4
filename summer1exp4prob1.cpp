#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;

// creating functions for each operation
// function for addition
int addition (int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

// function for subtraction
int subtraction (int num1, int num2)
{
    int result = num1 - num2;
    return result;
}

//function for multiplication
int multiply (int num1, int num2)
{
    int result = num1*num2;
    return result;
}

// function for division
int divide (int num1, int num2)
{
    int result = num1/num2;
    return result;
}

//function for modulus
int mod (int num1, int num2)
{
    int result = num1%num2;
    return result;
}

// this is the main function 
int main()
{
	// declaration of the values to be used in the operations(num1, num2), entered by user
	// declaration of the operation to be used (choice), chosen by user from the listed menu
	// declaration of user's decision to continue the program
    int num1, num2, choice;
    char decision;
    
    // the menu
    cout << "\tMENU" << endl;
    cout <<"1 - Add" <<endl;
    cout <<"2 - Subtract" << endl;
    cout <<"3 - Multiply" << endl;
    cout <<"4 - Divide" << endl;
    cout <<"5 - Modulus" << endl; 
    
    // user will enter his/her choice
    cout << "\n\nPlease input the number of the operation that you want this program to perform: ";
    cin >> choice;
    
    // control statement, the program will process user's preferred operation
    switch(choice)
    {
    	// when user enters 1, program will get the sum of the two values
        case 1:
        {
        	cout << "Please enter the first number: ";
    		cin >> num1;
    		cout << "Please enter the second number: ";
   			cin >> num2;
   			// function for addition was used
            cout << "Result: " << addition (num1, num2);
        }
        break;
        // when user enters 2, program will get the difference of the two values
        case 2:
        {
        	cout << "Please enter the first number: ";
    		cin >> num1;
    		cout << "Please enter the second number: ";
    		cin >> num2;
    		// function for subtraction was used
            cout << "Result: " << subtraction (num1, num2);
        }
        break;
        // when user enters 3, program will get the product of the two values
        case 3:
        {
            cout << "Please enter the first number: ";
    		cin >> num1;
    		cout << "Please enter the second number: ";
    		cin >> num2;
    		//function "multiply" was used
			cout << "Result: " << multiply (num1, num2);
        }
        break;
        // when user enters 4, program will get the quotient of the two values
        case 4:
        {
            cout << "Please enter the first number: ";
    		cin >> num1;
    		cout << "Please enter the second number: ";
    		cin >> num2;
    		// function "divide" was used
			cout << "Result: " << divide (num1, num2);
        }
        break;
        // when user enters 5, program will get the modulus or remainder of the two values
        case 5:
        {
        	cout << "Please enter the first number: ";
    		cin >> num1;
    		cout << "Please enter the second number: ";
    		cin >> num2;
    		// fuction "mod" was used
			cout << "Result: " << mod (num1, num2);
		}
		break;
		// when user enters anything other than 1-5, program will display "Invalid Input."
        default:
        {
            cout << "Invaid Input.";
        }
    }
    // user decides whether to continue or not
    cout << "\n\nDo you want to continue? (Y/N) ";
    cin >> decision;
    // while user enters "y" or "Y", program will repeat
    do
    {
        cout << "\n\nPlease input the number of the operation that you want this program to perform: ";
        cin >> choice;
    
        switch(choice)
        {
            case 1:
            {
            	cout << "Please enter the first number: ";
   				cin >> num1;
    			cout << "Please enter the second number: ";
    			cin >> num2;
            	cout << "Result: " << addition (num1, num2);
            }
            break;
            case 2:
            {
            	cout << "Please enter the first number: ";
    			cin >> num1;
    			cout << "Please enter the second number: ";
    			cin >> num2;
				cout << "Result: " << subtraction (num1, num2);
            }
            break;
            case 3:
            {
            	cout << "Please enter the first number: ";
    			cin >> num1;
    			cout << "Please enter the second number: ";
    			cin >> num2;
            	cout << "Result: " << multiply (num1, num2);
             }
            break;
            case 4:
            {
            	cout << "Please enter the first number: ";
    			cin >> num1;
    			cout << "Please enter the second number: ";
    			cin >> num2;
            	cout << "Result: " << divide (num1, num2);
            }
            break;
            case 5:
            {
            	cout << "Please enter the first number: ";
    			cin >> num1;
    			cout << "Please enter the second number: ";
    			cin >> num2;
        		cout << "Result: " << mod (num1, num2);
		    }
		    break;
            default:
            {
            cout << "Invaid Input.";
            }
        }
        cout << "\n\nDo you want to continue? ";
        cin >> decision;
        
    }while(decision=='y' || decision =='Y');
    // when user finally enters anything but "y" or "Y", program will stop
    if (decision != 'y' || decision !='Y')
	{
		return 0;
		}
getch();
return 0;
}

