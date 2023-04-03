/*

Precedence

When we have a complex expression with several simple expressions of different precedence levels, we need to use the following steps to find the value of the complex
expression:
1. We evaluate the simple expression with the highest level of precedence and replace it with its value. Now we have a new expression
2. We repeat step 1 until thw whole expression is evaluated.


Associativity



*/



#include <iostream>

using namespace std;

int main()
{
    //Evaluting a simple expression with two levels of precedence

    cout << "The result of expression: " << 5 + 7 * 4 << endl;

    // Evaluating an expression with three levels of precedence

    // Declare one variable
    int result;


    //Evaluate the expression and store the result in the variable
    result=5-15%4;
    //output the result stored in the variable
    cout << "The value stored in the variable: "<< result << endl;

    /*
    Now assume that we need to purpopesly change the precedence level of a simple expression. For example, we need to add  the literal 6 to the value of variable x and
    then multiply the result by 7. Here the multiplaction has precedence over addition but we need to do the addition first. The solution is to use parentheses.
    */

    //Declaration
    int x=5;
    //Output value of expression

    cout <<"Value of (x+6)*7: "<< (x+6)*7<< endl ;

    //Evaluating a simple expression with side effect

    int a=8;
    int b=10;

    //Asignment
    b*=a+5;//In this compound assignment a+5 took precedence first
    //outputting value of variable y
    cout << "The value of b: " << b << endl;


    //Evaluation involving both precedence and associativity
    cout <<"Value of expression 5 -30/4*8+10: "<< 5 -30/4*8+10 << endl;


    // Evaluating expression with right-to-left associativity

    // Declaration and initialization
     int c=10;
     int d=20;
    //assignment
    d+=c*=40;
    //Printing values of x  and y

    cout <<"Value of c: " << c << endl;
    cout <<"Value of d: " << d << endl;


    return 0;
}