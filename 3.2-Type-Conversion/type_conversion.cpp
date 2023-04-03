/*
Implicit Conversion

Every time we use an operation on a data type for which that operation is not defined, the C++ compiler performs an implicit type conversion before giving us the result
Implicit conversion means changing the type of operands to another type of operand to another type on which the opration can be applied. This is done in two steps
implicit type promotion (promoting the type of the operand to a larger size) and implicit type change (changing the type of the operand to the other's type in a binary operation
 to make them of the same type)

        Implicit type promotion
        Is automatically applied to any oprand to make it suitable for an arithmetic operation. This is done for two reasons.
        a. The type of operand is not suitable for an arithmetic operation (Boolean and Character).
        b. There is no arithmetic operator defined for the type (short or float) because  if we apply an arithmetic operator on a short or float value, the result may not
        fit in a short or float.
        To avoid these problems, the compiler applies five rules for implicit type promotion.

        The compiler applies five rule for implicit type promotion.

        Rule        Original Type               Promoted Type
        1           bool                        int
        2           char                        int
        3           short                       int
        3           unsigned short              unsigned int
        4           float                       double



        Implicit type Change
        Occurs when the two operands are different types; after the change, both operands are of the same type. If the operation is unary, there is no need for
        implicit type change may be needed to make the types of both operands the same.

        a. Expressions with no side effect- in this case, the operand in the lower level of hierarchy (small size) needs to be converted to the type of the higher level
        of hierarchy according to the hierarchy of types

        b. Expressions with side effects in some operations or activities, in which a value is supposed to go to a destation of a predifined type, we cannot change
         the type of the destination because it is already defined. For example this happens when we assign a value to a variable of a different type. In these cases, the 
         compiler changes the source type to fit in the destination type. For example if we assign a floating point value to an integer, the compiler truncates the source value
         and assigns the integral part to the destination variable. On the other hand, if we try to assign an integer value to a variable of a floating-point type, then
         the compiler adds a fraction part to the integer to make it a floating point value. 
*/


//Testing implicit type conversion

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{

    //Declarations
    bool x= true;
    char y='A';
    short z = 14;
    float t=24.5;

    // Type conversion drom bool to int

    cout << "Type of x + 100:" << typeid(x+100).name()<<endl;// type is integer
    cout << "Value of x + 100: " << x +100 << endl;

    // Type conversion from char to int

    cout << "Type of y + 1000: " << typeid(y+1000).name() << endl;// type is integer
    cout << "Value of y + 1000: " << y + 1000 << endl;

    //Type  conversion from short to int

    cout << "Type of z * 100 :" << typeid(z*100).name()<<endl;// type is integer
    cout << "Value of z * 100: " << z*100 << endl;

    // Type of conversion from float to double
    cout <<"Type of t + 15000.2: " << typeid(t + 15000.2).name()<< endl;// type is double
    cout <<" Value of t + 15000.2: " << t + 15000.2 << endl;


    // Implicit type conversion in an expression of mixed types when there is no side effect

    //Declarations
    int a =123;
    long b =140;
    double c=114.56;

    //check the type and value of value of expression a + b

    cout << "Type of x + y; "<< typeid(a+b).name()<<endl;// type  is long
    cout << "Value of x +y: "<< a + b << endl << endl;

    //Check the type and value of expression  a+ b + c
    cout << " Type of a + b + c:  " << typeid (a + b + c).name()<<endl;// type id double
    cout <<"Value of a + b + c: "<< a + b  +c << endl;


    // Checking type conversion in an expression of mixed types

    //Declaration
    int e;
    double f;
    
    // assignment
    e=23.76;
    f=130;

    //Checking type and value of x
    cout << "Type of e=23.67: "<< typeid(e=23.67).name()<<endl;// type is int
    cout << "Value of e after assignment:" << e << endl;

    //Checking type and value of y
    cout << "Type of y=130: " << typeid(f=130).name()<<endl;// type is double
    cout << "Value of y after assignment: "<< f <<endl;





    return 0;
}