/*
A Multiplicative expression is a binary expression in which there are two operands: left and right. There are three operators that create multiplicative expressions

    Multiplication
    We use the * symbol

    Division
    We use the / symbol

    Remainder
    we use the % symbol. The two operands need to be positive integral types. If either of the operand is a negative integral type, the result is system dependent.

*/

#include <iostream>
using namespace std;

int main()
{
    //Multiplication
    cout<<"Testing multiplication operator"<< endl;
    cout<<" Value of 3*4 ="<< 3*4<< endl;
    cout<<"Value of 2,4 * 4.1 =" << 2.4*4.1<<endl;
    cout<<"Value of -3 * 4 = "<< -3*4 <<endl;

    //Division
    cout << "Testing division operator" << endl;
    cout <<"Value of 30 / 5 = "<< 30/5<< endl;
    cout <<"Value of 4 / 7 =" << 4/7 << endl;

    //Remainder
    cout << "Testing remainder operator" << endl;
    cout << "Value of 30 % 5 = " << 30%5<< endl;
    cout <<"Value of 3 % 7 = "<<3 % 7 << endl;

    return 0;
    
}