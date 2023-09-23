#include<iostream>
using namespace std;
main()
{
       int min,sec,frame,total;
       cout << "Number of Minutes: ";
       cin >>min;
       sec= min*60;
       cout << "Frames per Second: ";
       cin>> frame;
      
         total=sec*frame;
        cout<<"Total Number of Frames: "<<total;
}
       