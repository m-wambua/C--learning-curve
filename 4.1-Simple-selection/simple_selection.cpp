/*
Simple Selection

To solve some problems, we make decisions based on the test of a true-false condition. If the condition is true,  we need to execute a set of statements: if the
condition is false, we need to execute another set of statements(or no statements). This process is referred to as selection

Relational and Equality Expression

To make simple decisions, we need either relational or equality expressions.

    Relational Expressions

    The type of the left and the right expression must be the same when the comparison is evaluated. If the two expressions are not the same type, a conversion is applied.

    Equality Expressions
    
    The type of the left and the right expression must be the same  when the comparison is evaluated. If the two expressions are not the same type, a conversion is done.

    Precedence and Associativity

    When we try to evaluate a complex expression involving relational equality expressions, we need to pay attention to the precedence and associativity of these two groupes
    In complex expressions, paranthesis help to indicate the order of evaluation

    Pitfall

    We should avoid using either of the equality operators with floating-point values because we do not know witht what precision these values are store in memory.
    The result is system dependent.


One-way selection: The if statement

The most common structure for making decisions is one-way selection, which is accomplished in C++ by the if statement.
In this type of statement, we use an expression to test a condition. The program executes the statements (or the set of statements) if the result of the test is true; 
it skips the statement(or the set of statements) if the result is false. Note that if we have more than one statement to be executed, we need to use a compound statement.
This type of selection is often referred to as one-way selection: to do a task or not to do a task.Note that the selection expression makes sense only if each time we run
 the program, the result is unpredictable (based on the tested condition). In other words, the result of the relational or equality expression should be based on the input
  to the program; otherwise, the decision making does not make sense.Note that the statement to be executed when the result of the testing is true is one single statement,
  but this single statement can be compound statements( a set of statements inside two braces)



  Some pitfalls
  When we us an if statement for one-way selection, we must look carefully for pitfalls. These errors normally are not caught by the compiler because they are logic errors
  not syntactical ones.
    1.Using the Assignment Operator instead of the Equality Operator.
    2.forgotting Braces.
    3.Extra colon

Two-way selection : if-else Statement

When the program reaches the if-else statement during execution, it first evaluates the Boolean expression, If the calue of this expression is true, the program executes  statement
1 and ignores statement-2; otherwise, the program executes the program statement-2 and ignores statement-1. Note that in each run only one of the two statements, statement-1
or statement-2 is executed but never both.Also note that statement-1  and statement-2 can be either a single statement or a compound statement.

Nested if-else Statement

    A serious pitfall : Dangling Else Problem
    Nested if-else statements may create a classic problem known as the dangling else.If in a nested if-else statement we can have more if branches than else branches,
    we need to know which if branch should be paired with which else branch. The answer is that the compiler matches an else with the most recent unpaired if. This is done
    regardless of how we have intended our code.

Multiway Selection



*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    //Using if-statement to print the absolute value of a number
    //Declaration
    int number;
    //Getting input
    cout <<"Enter an integer: "<< endl;
    cin>> number;
    //find the absolute value
    if (number<0)
    {// this curly brakcet is not necessary
        number=-number;
    }// this curly bracket is not necessary

    //Print the absolute value
    cout<<"Absolute value of the number you entered is: "<< number<< endl;

    //Use of if statement to find gross payment of an employee
    // Declaration
    double hours;
    double rate;
    double regularpay;
    double overPay;
    double totalPay;

    // Input
    cout <<"Enter hours worked: "<< endl;
    cin>> hours;
    cout <<"Enter pay rate: "<<endl;
    cin>>rate;
    //Calculation that does not depend on decision
    regularpay=hours*rate;
    overPay=0.0;
    //Calculation that is skipped if hours worked is not more than 40
    if (hours>40.0)
    {
        overPay=(hours-40.0)*rate*0.3;
    }//End if
    //Rest of the calculation
    totalPay=regularpay+overPay;
    //Printing output
    cout<<fixed<<showpoint;
    cout<<"Regular pay = "<<setprecision(2)<<regularpay<<endl;
    cout<<"Over time pay = "<<setprecision(2)<<overPay<<endl;
    cout<<"Total pay = "<<setprecision(2)<<totalPay<<endl;


    // Use of an if-else statement to find a pass/no-pass grade

    // local declaration
    int score;
    //input
    cout<<"Enter a score between 0 and 100: "<< endl;
    cin >> score;
    //Decision
     
     if (score>=70)
     {
        cout<<"Grade is pass"<<endl;
     }//End if
     else
     {
        cout<<"Grade is no-pass "<< endl;

     }//End else


    // Use of if-else statement to print larger between two numbers or print the first if numbers are equal

    //Declaration
    int num1,num2;
    int larger;
    //Input statements
    cout<<"Enter the first number:"<< endl;
    cin>> num1;
    cout<< "Enter the scond number: "<< endl;
    cin>> num2;
    // Decision
    if(num1>=num2)
    {
        larger=num1;
    }//Endk if
    else
    {
        larger=num2;
    }//end else

    //Print result
    cout <<"The larger number is: "<< larger<< endl;

    // Find if a number is greater than, equal, or less than another

    //Declaration using the same numbers as the ones above

    if(num1>=num2)
    {
        if(num1>num2)
        {
            cout<<num1<<">"<< num2<<endl;
        }

        else
        {
            cout<<num1<<"=="<<num2<<endl;
        }
    }

    else
    {
        cout<<num1<<"<"<<num2<<endl;
    }
    
    // Find a grade given a score using the multi-way selection

    char grade;
    //Multi-way decision using if-else
    if(score>=90)
    {
        grade='A';
    }
    else if (score>=80)
    {
        grade='B';
    }
    else if (score>=70)
    {
        grade='C';
    }
    else if (score>=60)
    {
        grade='D';
    }
    else
    {
        grade='F';
    }
    cout << "The grade is: "<< grade << endl;
    return 0;
}