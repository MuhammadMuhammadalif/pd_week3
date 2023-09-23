#include<iostream>
using namespace std;
main()
{
 int meter,l,w,wall,area;
     cout << "Number of square meters you can paint: ";
     cin>>meter;
        cout << "Width of the single wall (in meters): ";
        cin >> w;
       cout << "Height of the single wall (in meters): ";
        cin >> l;
area=l*w;
wall=meter/area;
        cout << "Number of walls you can paint: "<<wall;
}