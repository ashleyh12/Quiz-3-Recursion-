#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// Given 2 numbers N and M, recursively calculate the sum of numbers(inclusive) from N to M
// If M is greater than N then return -1
// Sum(N,M) = N+(N-1)+(N-2)…M
// Sum(10,7) = 10+9+8+7 = 34
// Sum(4,9) = -1
// Sum(5,5) = 5
// Example
// Enter a number
// 10
// Enter a smaller number
// 7
// 34

int sum(int N, int M) //sum function definition
{
  if (M > N) //if M is greater than N return -1
  {
    return -1;
  }
  else if (M == N) //base case to break the recursion so it doesn't run infinitely
    return N; //returns N
  }
  else
  {
    return N + sum(N-1, M); // sum(N-1,M). The M is the upper limit so we know when to break the recursion. (N-1) decreasing the value of the N parameter in each recursion loop. 
  }    
return 0;
}

int main()
{
  int number; //variable to store first number
  int number2; //variable to store second number
  cout << "Enter two numbers: "; 
  cin >> number >> number2; //storing the numbers in the variables
  int func_call = sum(number, number2); //calling the function
  cout << func_call; //printing the result to the screen
  return 0; 
}





/*
Line by line execution:
Ex: N = 10, M = 7.
N = 10 then N = 9 then N = 8 then N = 7 (constantly updating the value of N). Add all these values up to get 34. Once N = 7, M (which is 7) is now equal to N and stops the recursion from running infinitely. 

