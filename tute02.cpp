/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std;
int main()//function main begins
{

double salary, netSalary;
int etype, otHrs, otRate;

cout<<"Enter Employee Type : ";//prompt
cin>>etype;//read an integer

cout<<"Enter Salary  : ";//prompt
cin>>salary;//read a float value

cout<<"Enter OtHrs : ";//prompt
cin>>otHrs;//read an integer 
   
switch (etype)
{
case 1 :
otRate = 1000;
break;
case 2 :
otRate = 1500;
break;
default :
otRate = 1700;
break;
}

netSalary = salary + otHrs* otRate;//net salary will be stored

cout<<"Net Salary is : "<<netSalary<<endl;//print net salary
  
return 0;//end of the main function

}
