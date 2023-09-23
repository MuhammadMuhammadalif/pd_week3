#include<iostream>
using namespace std;
main()
{
 string m_name;
 float at_price,ct_price,percent;
 float at_sold,ct_sold;
            cout << "Enter the movie name: ";
            cin>> m_name;
            cout << "Enter the adult ticket price: $";
            cin>> at_price;
            cout << "Enter the child ticket price: $";
            cin>> ct_price;
            cout << "Enter the number of adult tickets sold: ";
            cin>> at_sold;
            cout << "Enter the number of child tickets sold: "; 
            cin>> ct_sold;
            cout << "Enter the percentage of the amount to be donated to charity: ";
            cin>> percent;
      cout<<""<<endl;
 
          
float a_incom,c_incom,total;
            a_incom=at_sold*at_price;
            c_incom=ct_sold*ct_price;
            total=a_incom+c_incom;
float donation;
            donation=total/100*percent;
float remaining;
            remaining=total-donation;
                                    cout << "Movie: "<<m_name<<endl;
                                    cout << "Total amount generated from ticket sales: $"<<total<<endl;
                                    cout << "Donation to charity ("<<percent;
                                    cout << "%): $"<<donation<<endl;
                                    cout << "Remaining amount after donation: $"<<remaining;
} 