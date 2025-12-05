/* Name: Anthony Aponte
Course: COMPE 160
Week: 14 File: MyLibrary.cpp
Brief: We include MyLibrary, which has the functions for sum of 2 numbers and sum of 4 numbers */
#include "MyLibrary.h"
using namespace std;

// Function to sum two numbers
int Sum2(int a, int b) 
{
    return a + b;
}

// Function to sum four numbers using Sum2
int Sum4(int a, int b, int c, int d) 
{
    int sum1 = Sum2(a, b); 
    int sum2 = Sum2(c, d);
    return Sum2(sum1, sum2);
}
