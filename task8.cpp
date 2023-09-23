#include<iostream>
using namespace std;
main()
{
float v_price,f_price,v_kg,f_kg,coin,rs;
       cout << "Enter vegetable price per kilogram (in coins): ";
       cin>>v_price;
        cout << "Enter fruit price per kilogram (in coins): ";
       cin>>f_price;
         cout << "Enter total kilograms of vegetables: ";
        cin>> v_kg;
         cout << "Enter total kilograms of fruits: ";
        cin>> f_kg;
coin=(v_price*v_kg)+(f_price*f_kg);
rs=coin/1.94;
         cout << "Total earnings in Rupees (Rps): "<<rs;
}