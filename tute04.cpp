/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include<iostream>
using namespace std;

int main()
{
  int no;  // define variables
  long fac = 1;
  int r;

  cout << "Enter a number : ";   // getting user inputs
  cin >> no;

  for(r = no ; r >= 1 ; r--)  // creating loop
    {
      fac = fac * r;
    }
  
cout << "Factorial of " << no << " is " << fac << endl;  // print Factorial
  
  return 0;
}