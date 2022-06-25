#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    if (age > 150 || age < 1)
    {
        cout << "This is invalid age.";
    }
     else if (age >= 18) 
    {
        cout << "Your age is " <<age <<" and You can Vote.";
    }
    else    
    {
        cout << "You are not eligible to vote. ";
    cout << "You can vote after " << 18 - age << " years.";
    }
    return 0;
}