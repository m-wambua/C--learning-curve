/*Primary expressions
A primary expression is a simple expression with no operator. It is the basic building block of making more complex expressions. A primary expression has precedence 19
which means it has the highest precedence among all expressions.

    Literal
    A literal in a program is a primary expression; it has a value, but no side-effect.

    Parenthetical Expression
    When we have an expression of a lower level of precedence that we want to change to a primary expression, we enclose it in parentheses.
    This is done to use the complex expression in a place where we need a primary expression. Sometimes we also need to evaluate part of an expression
    before evaluating the rest of it. A primary expression has the highest level of precedence, so we add parentheses to force the expression inside the
    parentheses to be evaluated first 

*/

#include <iostream>
using namespace std;

int main ()
{
// some literal expression
    cout << false << " " << 'A' << " " << " Hello" << endl;
    cout << 23412 << " " << 12897234L << endl;
    cout << 245.785F << " " << " " << 2.051L<< endl;


// Parenthetical operation
// variable declaration
    int x=4;
    // Printing the first expression with an without parenthesis

    cout << "Values with parentheses: " << (x+3)*5<< endl;
    cout <<"Value without parentheses: "<< x+3*5 << endl << endl;

    //Printing  the second expression with and without parentheses
    cout<<"Value with parentheses: "<< 12/(x+2)<< endl;
    cout<<"Value without parentheses: "<< 12/x+2 <<endl<< endl; 
    return 0;
}