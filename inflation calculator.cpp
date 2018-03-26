#include <iostream>
using namespace std;
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: inflation calculator.cpp
// Last Modification Date: 22/02/2017
// Author1 and ID and Group: Ibrahem ramadan  20170002 G1
//Teaching Assistant: Eng.Ali  Eng.menna
// Purpose: inflation calc

int main()
{
    float cost,percent;
    int i,years;
    while (true){
    cout<<"If you wanna use that program press 1\nIf you wanna exit press any key\n";
    cin>>i;
    if (i==1)
    {
        cout<<"Enter the cost of items: ";
        cin>>cost;
        cout<<"Enter number of years: ";


        cin>>years;
        cout<<"Enter percent of inflation: ";
        cin>>percent;
        for (int j=0;j<years;j++)
        cost+=(percent/100.00)*cost;
        cout<<"The except cost is: "<<cost<<endl;




    }
    else break;





    }









    return 0;
}
