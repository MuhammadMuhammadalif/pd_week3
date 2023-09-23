#include<iostream>
using namespace std;
main()
{
 int n,one,two,three,four,total;
      cout << "Enter a 4-digit number: ";
      cin>> n;
       one=n/1000;
       two=(n%1000)/100;
       three=((n%1000)%100)/10;
       four=n%10;
        total=one+two+three+four;
             cout << "Sum of individual digits: "<<total;
}
