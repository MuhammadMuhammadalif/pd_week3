#include<iostream>
using namespace std;
main()
{
string name;
            cout << "Enter the Name of the Person: ";
            cin>> name;
            cout << "Enter the target weight loss in kilograms: ";
            float weight,days;
             cin>> weight;
            days=15*weight;
            cout<<""<<name;
             cout<<" will need "<<days;
            cout<<" days to lose "<<weight;
            cout<<" kg of weight by following the doctor's suggestions";
}
             