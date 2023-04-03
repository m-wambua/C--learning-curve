/*
Manipulators for output

Output operations are done using output objects. We use the predefined output object(cout). An output manipulator is an object that can be passed to the insertion operator
to change the behavior of the output. We have two different kinds of output manipulators: with no argument and with one argument.

    No-argument Manipulators

    The no-argument manipulators are part of <iostream>, which means no extra header file is needed. All no-argument manipulators except endl change the state of the output
    stream.


    Manipulators for boolean literals (noboolalpha,boolalpha)-: the first category of manipulators can be used only with Boolean datatypes. The noboolalpha manipulator
    puts a boolean value as an integer(0 or 1); the boolalpha outputs the bool value as a literal (false or true) .

    Manipulators for Different Bases(doc,oct,hex)-: although all integers are stored in the computer in binary base 2 we may need to output them in our program in one of the three
    different formats:dec(base 10), oct(base 8) or hex (base 16). The default is dec. Presentation does't affect the sixe, sign, or value in the computer; it is only for the
    programmer convinience. It allows the programmer to use the format that is most convinient.


    Manipulators for Base Prefix(noshowbase,showbase);- when we output an integer in different base, we have the choice not to show the base of the number (default)
    or show the base of the number.

    Manipulators for FIxed or scientific notation;- We have two ways of showing a floating-point type value: fixed or scientific. In the fixed format. In the fixed format
    a floating-point is shown as an integer part and the fraction part seperated by a decimal point. In the scientific format, the number is shown as a number in fixed format
    multiplied by an exponent.

    Manipulators for showing the decimal point. If the fraction part of a floating point value is zero, C++ does not print the decimal point. We can force the output to 
    show the decimal point with a zero using the showpoint manipulator.

    Manipulators for showing the positive sign;- c++ doesn.t show a positive sign if the number is positive. To force a positive number to be printed with the positive sign
    we can use the showpos manipulator.

    Manipulators for showing letters in uppercase-: If we want to print characters in uppercase , we use the manipulator uppercase.

    Manipulators for Adjusting numbers in a field:- later we see how we can define the size of  field (numbers or characters occupied) to print a value using manipulators
    with arguments. After the size is determined, we need to decide how we want to adjust the value and the sign (if any) in the field. C++ uses three formats.In the 
    left format(default), the number and the sign are located at the left of the field and the rest of field is filled with padding. In the internal format, the sign occupies
    the leftmost part of the field, the number  occupies the rightmost parts and the remaining part is filled with padding.In the right format, the sign and the number 
    occupy the rightmost part and the left part is filled with padding: Note that this manipulator does not change the state of the stream.

    Manipulators with Arguments

    To use these manipulators we need to include the <iomanip> header in our program.They are not defined in <iostream>

    Manipulator setprecision(n):- this manipulator is used only for fixed (not scientific) floating point values. The integers inside the parentheses(n) defines the number
    of digits after the decimal point

    Manipulator setw(n) this manipulator is used to define the size of the field that we want our value to occupy. Note that in the case of the floating-point data
    type, we need to consider space for the whole  part, decimal point and the fraction part. Note that this manipulator doesnot change the state of the stream. It needs to 
    be set for each value individually.

    Manipulators setfill(ch)-: this manipulator shows how we can fill the field with padding if the actual size of our value is less than the size defined by the setw(n)
    The argument inside parantheses is a literal character used as padding


    Manipulators for input

*/

# include <iostream>
#include <iomanip>// used for manipulators with arguments
using namespace std;

int main()
{
    //Declaration
    bool x=true;
    bool y=false;
    //Testing values without manipulators
    cout << "The value of x Using default: " << x << endl;
    cout << "The value of y using default: "<< y << endl;

    //Testing values using manipulator
    cout <<"Value of x using manipulator: "<< boolalpha << x << endl;
    cout <<"Value of y: "<< y<<endl;


    // A program to print data in different bases (decimal,octal,hexadecimal)

    // Declaration of variable of a
    int a =1237;
    //Outputting a in three bases without showbase
    cout <<"a in decimal: "<< a<< endl;
    cout <<"a in octal: "<< oct << a<< endl;
    cout <<"a in hexadecimal: "<< hex << a << endl << endl;
    //outputting a in three bases with showbase
    cout <<"a in decimal: "<< a << endl;
    cout << "a in octal: "<< showbase <<oct<<a<<endl;// 0 shows that the number is octal
    cout << "a in haxadecimal: "<< showbase << hex << a<< endl;//0x shows that the number is hexadecimal

    // A program to test some manipulators for floating-point types

    // Declarations
    double c=1237;
    double d=12376745.5623;

    //Usinf fixed (default) and showpoint manipulator
    cout<<" c in fixed_point format: " << c << endl;
    cout << "c in fixed_point: "<< showpoint<< c << endl;
    //Using scientific manipulator
    cout <<"d in scientific format: "<< d << scientific<< endl;

    // A program to test other manipulators for floating-point types
    //Decalration
    double e=1237234.1235;
    //Applying common formats
    cout << fixed <<setprecision(2)<<showpos<<setfill('*')<< endl;
    //print e in three formats
    cout << setw(15)<< left<< e << endl;
    cout<< setw(15)<<internal<<e<<endl;
    cout<< setw(15)<<right<<e<<endl;


    //Testing input for Boolean values

    //Declaration
    bool flag;
    //Input value using manipulator
    cout << "Enter true or false for flag: "<<endl;
    cin >> boolalpha>>flag;
    //Output value
    cout<< flag<< endl;

    //Inputting integers in different bases
    // A program to input integer value in any base

    //Declaration
    int num1,num2,num3;

    // Input first number in decimal(no manipulator)
    cout <<"Emter  the first number in decimal: "<< endl;
    cin >> num1;
    //Input second number in octal
    cout <<"Enter the secind number in octal: "<< endl;
    cin >> oct>> num2;
    // Input third number in hexidecimal
    cout <<"Enter the third number in octal" << endl;
    cin >> hex>> num3;

    //Output the values
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    return 0;
}