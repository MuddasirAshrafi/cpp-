//WAP to accept a no. from user to find its square using function
#include <iostream>
using namespace std;
int findSquare(int n);
int main(int argc, char const *argv[])
{
    int square, number;
    cout << "Enter a no." << endl;
    cin >> number;
    square = findSquare(number);
    cout << "square of " << number << " is " << square << endl;

    return 0;
}
int findSquare(int n)
{
    return n * n;
}
