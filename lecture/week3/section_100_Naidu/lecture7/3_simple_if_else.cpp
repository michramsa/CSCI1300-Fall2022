#include <iostream>
using namespace std;

// program to check if a number is greater than 0

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;

    if(num > 0) // no semicolon
    {
        cout << num << " greater than 0" << endl;
    }
    else // no paranthesis, no semicolon
    {
        cout << num << " less than 0" << endl;
    }


    return 0;
}