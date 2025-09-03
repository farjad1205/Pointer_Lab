#include <iostream>
using namespace std;

int main()
{
    // Write a program that asks the user to enter two integers to be stored in the variables a and b.
    // Assign the addresses of a and b to ptr_a and ptr_b.
    // Then, print out the dereferenced values of ptr_a and ptr_b to the console.

    int a = 4;
    int b = 7;

    int *ptr_a = &a;
    int *ptr_b = &b;

    cout << *ptr_a << endl;
    cout << *ptr_b << endl;
    return 0;
}