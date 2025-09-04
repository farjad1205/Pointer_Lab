#include <iostream>
#include <vector>
using namespace std;

/*
Create a vector of integers (vector<int>) that contains some number of random, unsorted values.
You might make the values up yourself or use rand(). Then, create two pointers -
one that points to the beginning of the vector and the other that points to the end.
Move the pointers towards each other, step by step, until they meet at the midpoint.
Then, return the value of the index where they meet.
If they pass each other without meeting (i.e. there are an even number of elements in the vector),
return the value of the smaller index, right before where the midpoint would be.
*/
int main()
{
    vector<int> ints = {23, 49, 45, 67, 2, 345, 78};
    int *start_ptr = &ints[0];
    int *end_ptr = &ints[ints.size() - 1];

    while (start_ptr != end_ptr)
    {
        start_ptr++;
        end_ptr--;
    }
    int index = start_ptr - &ints[0];
    cout << index;

    return 0;
}