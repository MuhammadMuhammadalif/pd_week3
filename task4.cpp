#include<iostream>
using namespace std;
main()
{
     float i,p;
     cout << "Enter Imposter Count: ";
      cin>> i;
      cout << "Enter Player Count: ";
       cin>> p;
       float chance;
       chance=(i/p)*100;
       cout << "Chance of being an imposter: "<<chance;
       cout <<"%";
} 