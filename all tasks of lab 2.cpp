#include<iostream>
using namespace std;
int main ()
{
    //task 1 & 2 are already solved
    int checker;
    cout<<"1-task 3\n2-task 4\n3-task 5\nEnter num of task: ";
    cin>>checker;
    // task 3
    if (checker==1)
    {
        int v1,v2,v3;
        cout<<"Enter first var: ";
        cin>>v1;
        cout<<"Enter second var: ";
        cin>>v2;
        v3=v1;
        v1=v2;
        v2=v3;
        cout<<"After swap first var is "<<v1<<" and second var is "<<v2<<endl;
    }
    // task 4
    else if (checker==2)
    {
        float base,height;
        cout<<"Enter base: ";
        cin>>base;
        cout<<"Enter height: ";
        cin>>height;
        cout<<"Area is: "<<0.5*base*height;

    }
   // task 5
    else if (checker==3)
    {
        string fname,sname;
        cout<<"Enter first name: ";
        cin>>fname;
        cout<<"Enter second name: ";
        cin>>sname;
        cout<<sname<<" "<<fname;
    }


    return 0;
}
