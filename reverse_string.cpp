#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Create a C-style string which is an array of chars.
    // Then, create a pointer that points to the start of the array.
    // Move the pointer through the string until you reach the null character \0,
    // like in the previous exercise. However, now that you are at the end of the string,
    // reverse direction and go backwards back to the beginning, printing each character to the console.
    char str[] = "racecar1";
    char *ptr = &str[0];

    while (*ptr != '\0')
    {
        ptr++;
    }
    ptr--;

    while (*ptr != '\0')
    {
        cout << *ptr;
        ptr--;
    }

    return 0;
}