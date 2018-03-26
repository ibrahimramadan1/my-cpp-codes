#include <iostream>
using namespace std;
int main ()
{


/*    int x,y,z;
    cout<<"Enter a num: ";
    cin>>x;
    cout<<"Enter a num: ";
    cin>>y;
    cout<<"Enter a num: ";
    cin>>z;
    if (x>y&&x>z)
        cout<<x<<" is a largest one\n";
    else if (y>x&&y>z)
        cout<<y <<" is a largest one\n";
    else if (z>x&&z>y)
       cout<<z<<" is a largest one\n";
    else
        cout<<"the 3 nums are equals\n";
*/
/*
    int x;
    cout<<"Enter purchase: ";
    cin>>x;
    if (x<=1000)
        cout<<"there is no discount\n"
    else if (x>=1000&&x<=2000)
        cout<<"discount is: "<<(5/100)*x;
    else
        cout<<"discount is: "<<50+(7.5/100)*x;

  */
  int x,y;
  cout<<"Enter cardtype: ";
  cin>>x;
  cout<<"Enter num of cards: ";
  cin>>y;
  switch(x)
  {
      case 1: cout<<"price is: "<<10*y;break;
      case 2: cout<<"price is: "<<25*y;break;
            case 3: cout<<"price is: "<<50*y;break;
      case 4: cout<<"price is: "<<100*y;break;
default: cout<<"invalid inp ";break;

  }


    return 0;
}
