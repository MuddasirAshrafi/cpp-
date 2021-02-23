#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    int b;
    cout << "enter two nos " << endl;
    cin >> a;
    cin >> b;
    if (a > b)
    {
        cout << a << " is greater" << endl;
    }
    else
    {
        cout << b << " is greater" << endl;
    }
    return 0;
}
