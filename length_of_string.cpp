#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Write a program to calculate the length of a string using a pointer.
    // Create a C-style string which is an array of chars.
    // Then, create a pointer that points to the start of the array.
    // Move the pointer through the string until you reach the null character \0,
    // and then print out how many cells it visited.
    char test[] = "pineapple";
    char *char_ptr = &test[0];
    int count;
    while (*char_ptr != '\0')
    {
        count++;
        char_ptr++;
    }

    cout << count << endl;

    return 0;
}