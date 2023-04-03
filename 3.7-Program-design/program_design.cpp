/*
Program design
We use a software development process that consists of three steps:
=> Understand the problem
=>Develop the Algorithm
=> Write the Code




*/


#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
/*
Problem 1 : Extracting part of a floating point number

Designing a program that, given a floating point value, extracts and prints the integral and the fraction parts,

Understandig the problem:- A floating point number is given: we want to seperate the fractional part and the integral part.

Develop the Algorithm:- We input a number, extract its integral and fraction parts, and output the original number, the integral part  and the fractional part.
    1. Input
        a.Input a number
    2.Process
        a.Extract the integral part.
        b.Extract the fractional part.
    3.Output
        a.Output the original number.
        b.Output the integral part.
        c.Output the fractional part.

write the code

*/

//Variable Declaration
double number;
int intPart;
double fractPart;

//Input
cout <<"Enter a floating point number: "<< endl;
cin>> number;
//processing
intPart=static_cast<int>(number);
fractPart=number-intPart;
//Output
cout <<fixed<<showpoint<<setprecision(2)<<endl;
cout<<"The original number : "<< number << endl;
cout <<"The integral part: "<< intPart<<endl;
cout <<"The fractional part: "<< fractPart<< endl;





/*
Problem 2 : Extracting the first digit of an integer
Designing a program that , given an integer,extracts and prints the first digit of an integer.
    Understand the Probel:-Given an integer, extract the first digit of the number.

    Develop the Algorithm:- We input an integer and extract its first digit. We then print the original integer and the first digit.

    1.Input
        a.Input an integer
    2.Process
        a.Extract the first (rightmost digit).
    3.Output
        a.Output the original number.
        b.Output the first digit
    Write the code
*/

//Variable declaration

    unsigned int giveInt,firstDigit;
    //Prompt and input
    cout << "Enter a positive integer: "<< endl;
    cin >>giveInt;
    //Processing
    firstDigit=giveInt%10;
    //Output
    cout<<"Entered integer: "<< giveInt<<endl;
    cout<<"Extracted first digit: "<< firstDigit << endl;



/*
Problem 3 : Changing a Duration of Time to its Components

Find how many hours, minutes and seconds are in a time duration given in seconds.

    Understand the problem
    We need to find how many hours. minutes and seconds it took to perform the task.

    Develop the program:- We input a number representing seconds and extract the hours, minutes and seconds in it. We then print the number of hours, minutes and seconds
    in it. We then print the number of hours, minutes and seconds.

    1. Input
        a.Input an integer representing the duration in seconds.
    2.Process
        a.Extract the numbers of hours that can fit in the seconds.
        b.Extract the number of minutes that can fit in the rest of the seconds.
        c.Find the left-over seconds.
    3.Output
        a.Output the duration value given in seconds.
        b.Output the number of extracted hours.
        c.Output the number of extracted minutes.
        d.Output the numbers of left-over seconds.

    Write the code.
*/

//Variable Declaration
    unsigned long duration, hours, minutes, seconds;
    //Prompt and input
    cout <<"Enter a positive integer for the number of seconds: "<< endl;
    cin >> duration;

    //Processing
    hours=duration/3600L;
    minutes=(duration-(hours*3600L))/60L;
    seconds=duration-(hours*3600L)-(minutes*60);
    //Output
    cout<<"Given Duration in seconds: "<< duration << endl;
    cout<<"Results: "<< endl;
    cout<< hours << "Hours, ";
    cout<<minutes<<"minutes, and ";
    cout <<seconds<<"seconds."<< endl;


    /*
    Problem 4 : Calculating the average and deviation

    We want to read three integers, calculate their average, and determine the deviation of each integer from the average.

    Understand the Problem:- The average of a list of numbers can be found by adding them together and dividing the result by the size of the list. The deviation of
    each number means how far that number is from the average, positive or negative.

    Develop the Algorithm:- we input three integers. We calculate the sum and the average. We calculate the devaition od each number from the average. We then  output
    the sum, the average, and the deviation for each number.
    1.Input
        a.Input three numbers
    2.Process
        a.Add three numbers to find the sum.
        b.Divide the sum by 3 to find the average.
        c.Find the deviation of each number from the average.
    3.Output
        a.Output the value of the sum.
        b.Output the value of average.
        c.Output the deviation of each number.

    Write the code.

    */

   int num1,num2,num3;
   int sum;
   double average;
   double dev1,dev2,dev3;

   //Prompt and input

   cout<<" Enter the first integer: "<< endl;
   cin >> num1;
   cout <<"Enter the second integer: "<< endl;
   cin >> num2;
   cout <<"Enter the third integer: "<< endl;
   cin >> num3;
   //Processing
   sum=num1+num2+num3;
   average=static_cast<double>(sum)/3;

   dev1=num1-average;
   dev2=num2-average;
   dev3=num3-average;

   //Output
   cout<<fixed<<setprecision(2)<<showpos<<endl;
   cout<<"Sum of the three numbers: "<< sum << endl;
   cout<<"Average: "<<setw(9)<<average<<endl;
   cout<<"Deviation of number 1: "<<setw(9)<<dev1<<endl;
   cout<<"Deviation of number 2: "<<setw(9)<<dev2<<endl;
   cout<<"Deviation of number 3: "<<setw(9)<<dev3<<endl;
   

return 0;


}

