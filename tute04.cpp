/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
long Factorial(int no);//function declaration 1
long nCr(int n, int r);//function declaration 2
int main()
{
	int n, r ;
	
	std::cout << "Enter a value for n :";//prompt
	std::cin >> n;//read an integer value
	
	std::cout << "Enter a value for r :";//prompt
	std::cin >> r;//read an integer value
	
	std::cout << "nCr = ";//print ncr
	std::cout << nCr(n,r);//function calling
	std::cout << std::endl;
	

}
long Factorial(int no){//function implementaation 1
	
	
    long fac = 1;
	
	for (int r=no; r >= 1; r--) 

    fac = fac * r;
    
    return fac;
}
long nCr(int n, int r){//function implementation 2
	

   return  Factorial(n)/(Factorial(r)*Factorial(n-r));

}
