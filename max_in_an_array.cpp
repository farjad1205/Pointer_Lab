#include <iostream>
#include <array>

using namespace std;

int main()
{
    // Write a program to find the maximum number in an unsorted list of integers.
    // Create an integer array (int[]) that contains some number of random, unsorted values.
    // You might make the values up yourself or use rand().
    // Then, create a pointer called max_ptr that finds and points to the maximum value in the list.
    // Hint: since this is an unsorted list of integers, you will need to make use of linear search to find the maximum rather than binary search.

    int unsorted[5] = {27, 73, 17, 41, 67};
    int *max_ptr = &unsorted[0];

    for (int i = 1; i <= size(unsorted); i++)
    {
        if (unsorted[i] > *max_ptr)
        {
            max_ptr = &unsorted[i];
        }
    }

    cout << *max_ptr << endl;

    return 0;
}