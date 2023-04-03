/*
Assignment Expressions

An assignment expression creates a value and has a side effect. It changes the memory state of the computer. There are two assignment expressions: simple and compound


    Simple Assignment
    It uses the = symbol.Although the symbol looks like equality in mathematics, it is called assigned to in C++. It is a binary operator with two operands.
    The left operand is a variable name. The right operand is an expression to be evaluated by the operator.
    We can summarize the action of a simple assignment in two steps:
    1. The operator stores the value of the expression in the variable. This is called the side effect because the previous value of the variable is lost and a new
    value is stored in it.
    2. The operator returns the value obtained in step 1 to be used in more complex expressions


    Compound Assignment
    In programming we often need to change the content of a variable and store the result back into the variable
*/

// Simple assignment operator

#include <iostream>
using namespace std;

int main()
{
    //Variable declaration
    int x;
    int y;
    //First assignment
    cout << "Return value of assignment expression"<< (x=14)<<endl;
    cout <<"Value of variable x" << x << endl;
    //Second assignment
    cout<<"Return value of assignment expression:"<< (y=87)<< endl;
    cout<<"Value of variable y:"<< y << endl;

    // Testing some compound-assignment expressions
    int a=20;
    int b=30;
    int c=40;
    int d=50;
    int e=60;
    //Declaration of variables
    
    // Use compound assignment
    a+=5;
    b-+3;
    c*=10;
    d/=8;
    e%=7;
    // Output results
    cout <<"Value of a: "<< a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << " Value of d: " << d << endl;
    cout << " Value of e: " << e << endl;



    return 0;

}

/*
The concepts of lvalue and rvalue

In C++ any entity that can be put at the left-hand side of the assignment operator is called an lvalue(left Value). On the other hand , any entity that can be put at the right
hand side of an assignment is called an rvalue(right value). It is clearer to say that an entity that can be a destination of a value is called an lvalue; an entity that
can be the source of a value is an rvalue. A variable is an lvalue  when it is at the left hand side of an assignment and acts as a destination. The  same is an rvalue
when it is located at the right hand side of an assignment and acts as a soruce.
*/