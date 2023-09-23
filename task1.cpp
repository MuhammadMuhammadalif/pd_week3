#include<iostream>
using namespace std;
main()
{
    cout << "Enter the number of sides of the polygon: ";
    int sides;
    cin >> sides;
    int sum;
    sum = (sides-2)*180;
cout<< "The sum of internal angles of a "<<sides;
cout<< "-sided polygon is: "<<sum;
cout<< " degrees";
}