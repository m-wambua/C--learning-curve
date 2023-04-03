/*
Statements

A C++ Program is made of a sequence of statements.Each statement is executed by the computer, in the order dictated by the program, to achive the goal of the program.
A statement in C++ program is a command that the C++  running environment must execute before going to the next statement.However, a programming language, like C++, has some 
staments that change the order of execution to move from one point in the program to another.

Declaration statement

Declaration introduces an entity by mentioning its type and giving it a name (an identifier). Defninition on the other hand, means  to allocate memory for the entity.
There are many entities that need to be declared and defined for a complex program.

    Variable declaration:- to use a variable  in our program, we must declare it. Variable declaration is in fact both declaration and definition unless we add an
    extra modifier (called extern) to postpone the definition to some other part of the program. Variable declaration statements require a semicolon to indicate
    statement termination.
        Single Declaration:- A single declaration gives a name to a variable and defines its type. It is also reserves a physical location in memory, suitable to hold 
        data item of the declared type.

        Multiple Declaration:- if we need to declare several variables of the same type, we can combine them and use only one declaration statement. Note that we need
        to seperate the variable names by a comma, but we need only one semicolon to terminate also there is no need for a space after  the comma, but it is strongly
        recommended at least one space after eacg comma to make the program readable.

        Initiliazation:- when we declare a variable, we give the variable a name and we ask the computer to allocate a memory location of the corresponding type. The 
        declaration, however, does not say what should be stored in the memory location initially, but we can initialize the variable when we declare them.

        Global Vaiables:- if a variable is global(declared outside any function), it is initialized to default values(integers are initialized to 0, floating
        points to 0.0).Note that characters and Boolean data types are special (small) integers and are initialized to 0.

        Local Variables:- If a variable is local (declared inside a function), it is not initialized but the variable holds some garbage left over from the previous use.
        Before using a local varaible, we need to either initialize it or change the garbage stored in it by other means.

    Constant Declaration:- a constant is a memory location in which its value is initialized and cannot be changed.To use a constant, we need to declare it . A constant
    declaration is similar to variable declaration but with four differences. First, we need to use the keyword const in front of the type. Second we must initialize
    a constant when it is declared. Third,  it is customary to use uppercase letter to name a constant to distinguish it from the variables in the program(if the
    name involves more than one word, the words are seperated by underscores). Constants are normally declared in the global area of the program (before any function including
    main).

Expression Statement
An expression statement is an expression ended by a semicolon (as the terminator). When an expression statement is found in a program, the computer determines its value
and performs its side effect. The value is thrown away, but the side effect changes the memory state of the computer. This means that expression statements in which the 
expression has no side effect are useless as statements; we need to avoid them although the compiler does not create an error.

Null Statement
A null statement is a statement that does nothing.

Compound Statement
Sometimes, we need to treat several statements as a single statement. In this case, we enclose the statement in a pair of braces. We can combine any number of statements
inside a pair of braces. The statement creates a single statement called a compound statement, which is also refered to as a block. We must ise a compound statement
whenever C++ syntax needs a single statement, but we need more than one statement.

Return Statement
Another statement we have used in our program is the return statement, which may return a value to the entity that called the function, such as main that returns 0
to the system. This statement belongs to the category of control statements.
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
    // A program to add three integers and prints the end result
    //Variable declaration

    int first,second, third, sum;
    //prompts

    cout <<"Enter the first integer: "<<endl;
    cin>>first;
    cout <<"Enter the second integer: "<<endl;
    cin>>second;
    cout<<"Enter the third integer: "<<endl;
    cin >> third;
    //calculation
    sum=first+second+third;
    //output
    cout<<"The sum of the three integers is: "<< sum <<endl;

    return 0;
}