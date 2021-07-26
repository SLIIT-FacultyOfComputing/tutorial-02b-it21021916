/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std ;

int main()//function main begins
{
    int no;
    long fac;

    cout<<"Enter a Number : ";//prompt
    cin>>no;//read an integer value

    fac = 1;

    for (int r=no; r >= 1; r--) 
    {
        fac = fac * r;
    }

    cout<<"Factorial of "<< no<<" is :" <<fac<<endl;//print the factorial of the number

    return 0;//end of the main function
}
