#include<iostream>
using namespace std;
main()
{
int one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen;
   cout <<"Number 1: ";
   cin >>one;
cout << "Number 2: ";
   cin >>two;
cout << "Number 3: ";
   cin >>three;
cout << "Number 4: ";
   cin >>four;
cout << "Number 5: ";
   cin >>five;
cout << "Number 6: ";
   cin >>six;
cout << "Number 7: ";
   cin >>seven;
cout << "Number 8: ";
   cin >>eight;
cout << "Number 9: ";
   cin >>nine;
cout << "Number 10: ";
   cin >>ten;
cout << "Number 11: ";
   cin >>eleven;
cout << "Number 12: ";
   cin >>twelve;
cout << "Number 13: ";
   cin >>thirteen;
cout << "Number 14: ";
   cin >>fourteen;
cout << "Number 15: ";
   cin >>fifteen;
int first_add,second_add,multi,first_sub,second_sub;
first_add=one+two+three+four+five;
multi=six*seven*eight*nine*ten;
first_sub=eleven-twelve-thirteen-fourteen-fifteen;
second_add=first_add+multi;
second_sub=second_add-first_sub;
cout<<"The final result is: "<<second_sub;
}
