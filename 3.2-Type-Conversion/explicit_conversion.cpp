/*
Explicit Type Conversion (Casting)

Some times we need or want to change the type of an operand expilicitly. This can be done using explicit type conversion , a process called casting. There are several
wasy fo casting but static cast is what will be discussed

*/

// Comparing implicit and explicit conversion in an expression

#include <iostream>
using namespace std;

int main ()
{
//Declaration
double x = 23.56;
int y = 30;
//Allowing impicit conversion
cout << "Without casting: " << x+y << endl;
//Forcing explicit conversion
cout << "With casting: " << static_cast<int>(x) +y << endl;
return 0;

}