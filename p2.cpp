//WAP To print fibonacci series of the first 10 natural nos.
#include <iostream>
using namespace std;
int main()
{
    int i;
    int n = 10;
    int t1 = 0;
    int t2 = 1;
    int nextterm;

    for (i = 1; i <= n; i++)
    {
        cout << nextterm << endl;
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    return 0;
}