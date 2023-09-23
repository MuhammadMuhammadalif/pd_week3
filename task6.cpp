#include<iostream>
using namespace std;
main()
{
int bag_size,bag_cost,bag_area;
       cout << "Enter the size of the fertilizer bag in pounds: ";
        cin>>bag_size;
      cout << "Enter the cost of the bag: $";
        cin>>bag_cost;
      cout << "Enter the area in square feet that can be covered by the bag: ";
        cin>>bag_area;
int f_cost_p,f_cost_area;
                  f_cost_p=bag_cost/bag_size;
       cout << "Cost of fertilizer per pound: $"<<f_cost_p<<endl;
                   f_cost_area=bag_area*bag_size;
       cout << "Cost of fertilizing per square foot: $"<<f_cost_area;
}