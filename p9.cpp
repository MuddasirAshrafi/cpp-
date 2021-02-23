//Function overloading
#include <iostream>
using namespace std;
void display(int n1)
{
    cout << "you entered " << n1 << endl;
}
void display(int n1, int n2)
{
    cout << "you entered " << n1 << " and " << n2 << endl;
}
int main(int argc, char const *argv[])
{
    display(15);
    display(10, 15);
    return 0;
}
