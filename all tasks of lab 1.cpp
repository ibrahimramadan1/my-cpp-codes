#include <iostream>
using namespace std;
int main()
{   //task1 to 4 are already solved
    int checker;
    cout<<"1-task 5\n2-task 6\n3-task 7\n4-Task 8\nEnter num of task: ";
    cin>>checker;
    //task 5
    if (checker==1)
    {
        string name;
        float weight;
        cout<<"What's ur name: ";
        cin>>name;
        cout<<"What's ur weight: ";
        cin>>weight;
        cout<<"hello "<<name<<" ur weight is "<<weight<<" kg\n";
    }
    //task 6

    else if (checker==2)
    {
        float Celsius;
        cout<<"Enter degrees in Celsius: ";
        cin>>Celsius;
        cout<<Celsius<<" degrees Celsius equal "<<Celsius*1.8+32<<" degrees Fahrenheit.\n";

    }
    //task 7
    else if(checker==3)
    {
        int check;
        cout<<"1-First way\n2-second way\nEnter num of way: ";
        cin>>check;
        if (check==1)
        {
            float d1,d2,d3,d4,d5,d6;
            cout<<"Enter ur 6 degrees: ";
            cin>>d1>>d2>>d3>>d4>>d5>>d6;
            cout<<"sum is: "<<d1+d2+d3+d4+d5+d6<<endl<<"average is: "<<(d1+d2+d3+d4+d5+d6)/6<<endl;
        }
        else
        {
            float sum=0,degree;
            for(int i=0;i<6;i++)
            {
                cout<<"Enter ur degree: ";
                cin>>degree;
                sum+=degree;
            }
            cout<<"sum is: "<<sum<<endl<<"Avg is: "<<sum/6<<endl;
        }
    }
    //task 8
    else if(checker==4)
        {
            int qty;
            float cost,price;
            cout<<"Enter qty: ";
            cin>>qty;
            cout<<"Enter cost: ";
            cin>>cost;
            cout<<"Enter price: ";
            cin>>price;
            cout<<"Profit is: "<<qty*(price-cost)<<endl;
        }


    return 0;
}
