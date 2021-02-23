#include <iostream>
using namespace std;
int main()
{
    int n1 = 1;
    int n2 = 2;
    int n3 = 3;
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << "n1 is the greatest" << endl;
        }
        else
        {
            cout << "n3 is the greatest" << endl;
        }
    }
    else

    {
        if (n2 > n3)
        {
            cout << "n2 is the greatest" << endl;
        }
        else
            cout << "n3 is the greatest" << endl;
    }
}
