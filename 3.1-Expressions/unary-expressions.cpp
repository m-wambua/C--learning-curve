/*
A unary expression is an expression made of an operator applied to a single value(called an operand), which must be a primary expression, (if not it must firts be converted
to a primary expression). The result is a primary expression. In a unary epxression the operator comes before the operand.

    Plus and Minus Epxressions
    The plus operator does not change the value of its operand(ir is only for emphasis); the minus operator changes the value of its operand(it flips the value)

    The sizeof Expression
    There are two versions of this operator: one that finds the size of an expression and one that finds the size of the type. The first version evaluates (finds its value)
    and then finds the size of the value. The second finds the size of the type  as difined by the C++ implementation
*/

#include <iostream>
using namespace std;

int main()
{
    //Declaration and Initialization
    int x=4;
    int y=-10;

    //Applying plus and minus operator on variable x
    cout << "Using plus operator on x: " << +x << endl;
    cout << "Using minus operator on x: "<< -x <<endl;
    //Applying plus and minus operator on variable y
    cout << "Using plus operator on y: "<< +y << endl;
    cout << " Using minus operator on y: "<< -y << endl;

    
    return 0;
}