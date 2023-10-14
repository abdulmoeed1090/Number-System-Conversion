// A simple program to convert a 3 digit binary input to decimal(base10)

#include <iostream>
#include <cmath>
using namespace std;

// function to convert binary into deciml
int binaryToDecimal(int num1, int num2, int num3)
{
    int decimal = 0;
    decimal = decimal + (num3 * pow(2, 0));
    decimal = decimal + (num2 * pow(2, 1));
    decimal = decimal + (num1 * pow(2, 2));

    return decimal;
}

// function to check wether the input is binary or not
int checkBinaryInput(int num1, int num2, int num3)
{
    if ((num1 == 0 || num1 == 1) && (num2 == 0 || num2 == 1) && (num3 == 0 || num3 == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// main function
int main()
{
    // getting user input
    int num1, num2, num3; 
    cout << "Enter three digit binary number one by one:" << endl;
    cin >> num1 >> num2 >> num3;

    // validating user input
    int isCorrect = checkBinaryInput(num1, num2, num3);
    if (isCorrect == true)
    {
        // calling convertion function
        int decimalOutput = binaryToDecimal(num1, num2, num3);
        cout << "Decimal number is :" << decimalOutput;
    }
    else
    {
        cout << "The number is not binary !" << endl;
    }

    return 0;
}