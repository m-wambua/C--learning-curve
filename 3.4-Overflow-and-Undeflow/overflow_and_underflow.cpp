/*
Overflow and Undeflow in integers

Oveflow and Underflow in Unsigned integers

The range of an unsigned integer is from zero to the positive maximum


Overflow and Underflow in signed integer

The range of a signed integer is from a negatove minimum to a positive maximum value.


Overflow and Underflow in Floating -point values

All floating-point values are signed.Second, there is no wrapping when an overflow and underflow occurs; instead we have sinking. Overflow result in sinking
to +infinity; underflow results in sinking to -infinity
*/

#include <iostream>
#include <limits>

using namespace std;

int main ()

{
    // A program to test overflow and underflow in unsigned integers
    

    //Creating two unsigned integer of maximum and minimum value

    unsigned int num1=numeric_limits<unsigned int> :: max();
    unsigned int num2=numeric_limits<unsigned int> :: min();
    //printing the maximum and minimum values
    cout << " The value of maximum unsigned int: " << num1 << endl;
    cout << "The value of minimum unsigned int: " << num2 << endl;

    // Force the integers to overflow
    num1+=1;
    num2-=1;
    //Print the overflowed values

    cout << " The value of num1 + 1 after overflow: " << num1 << endl;
    cout <<"The value of num2 - 1 after underflow: " << num2 << endl;


    //A program to test overflow and underflow in signed integers
    // Find the maximum and minimum of an integer
    int num3=numeric_limits<int>::max();
    int num4=numeric_limits<int>::min();
    //print the maximum and minimum values

    cout <<"Value of maximum signed int: "<< num3<< endl;
    cout <<"Value of minimum signed int: "<< num4 << endl;
    // Cause num3 and num4 to overflow
    num3+=1;
    num4-=1;

    //Print the overflowed values
    cout << " The value of num3 +1 after overflow: " << num3 << endl;
    cout << "The value of num4 - 1 after underflow: "<< num4 << endl;
    

    //Program to test overflow and underflow in doubles

    // FInd the positive and negative double
    double num5= +numeric_limits<double>::max();
    double num6= -numeric_limits<double>::max();
    //Print the positive and negative maximum double
    cout <<"The value of maximum double: "<< num5 << endl;
    cout << "The value of minimum double" << num6 << endl;
    //Multiply the value bu 1000.00
    num5*=1000.00;
    num6*=1000.00;
    //Print the overflowed values
    cout <<"The value of num5*1000.00 after overflow: "<< num5<< endl;
    cout <<"The value of num6*1000.00 after overflow: "<< num6<< endl;


    return 0;

}