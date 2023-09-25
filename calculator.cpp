// Creating a simple calculator in less then 48 hours. Completed in 8/48 hours.
#include <iostream>

int main()
{
    std::cout << "Enter an number: ";   // Display message that prompts user for first integer.
    double numOne = { 0 };              // Makes variable for the first number with the value of 0
    std::cin >> numOne;                 // Allows user to input number and stores it in variable

    char op;                            // Variable to read operator selection  
    bool validOp = false;               // Sets new boolean to false and needs the user to make it true by picking a valid operator 

    while (!validOp)                    // While loop to assure user enters 1 of the 4 basic operators before moving on
    {
        std::cout << "Pick an operator (+, -, *, /): ";                 // Displays message that prompts user for operator
        std::cin >> op;                                                 // Stores operator selection
        
        if (op == '+' || op == '-' || op == '*' || op == '/')           // If statement that will validate validOp if one of the 4 was chosen
        {
            validOp = true;                                             // Bool validOp is true so now user can proceed to second number
        }
        else                                                            // Else statement so the user will get a message if they dont use a valid operator
        {
            std::cout << "Invalid operator" << '\n';                    // Displays error message 
        }
    }
    std::cout << "Enter another number: ";      // Display message that prompts user for second integer
    double numTwo = { 0 };                      // Creating second number variable with double so that user can use larger numbers with decimals
    std::cin >> numTwo;                         // Store user input for the second number

    double result;                              // Result variable so that printing a result will be easier and more code legible

    if (op == '+')      
    {   // Result adds the 2 to get the sum and prints 1 + 2 = 3
        result = numOne + numTwo;
        std::cout << numOne << " + " << numTwo << " = " << result << '\n';
    }
    else if (op == '-')
    {   // Result subtracts the 2 to get the difference and prints 3 - 2 = 1
        result = numOne - numTwo;
        std::cout << numOne << " - " << numTwo << " = " << result << '\n';
    }
    else if (op == '*')
    {   // Result multiplies the two and gets the product and prints 3 * 3 = 9
        result = numOne * numTwo;
        std::cout << numOne << " * " << numTwo << " = " << result << '\n';
    }
    else if (op == '/')
    {   // Result divides the two and gets the quotient and prints 9 / 3 = 3
        result = numOne / numTwo;
        std::cout << numOne << " / " << numTwo << " = " << result << '\n';
    }
    return 0;
}