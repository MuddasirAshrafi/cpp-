//WAP to create a class person
#include <iostream>
using namespace std;
class Person
{
public:
    long long phoneno;
    double height;
    double weight;

public:
    void displayinfo()
    {

        cout << "Phone num is " << phoneno << endl;
        cout << "Height in inches " << height << endl;
        cout << "Weight in kgs " << weight << endl;
    }
};
int main()
{
    Person muddasir;
    muddasir.height = 5.5;
    muddasir.phoneno = 9820000000;
    muddasir.weight = 60;
    muddasir.displayinfo();
    return 0;
}