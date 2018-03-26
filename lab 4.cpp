#include <iostream>
using namespace std;
int main ()
{
   /* // Task 1
    int x,y,p=0;
    cin>>x>>y;
    for (int i=0;i<y;i++)
    {
        p+=x;
    }
    cout<<p;
    */
    /*// task 2
    string a;
    int x=0;
    cout<<"Enter text: ";
    getline(cin,a);
    for (int i=0;i<a.length();i++)
    {
        if (a[i]=='a'||a[i]=='A')x++;
        else if (a[i]=='.')break;
    }
    cout<<x;*/

 /*   int x,d=0,s=0;
    cin>>x;
    while (x!=0)
    {
        s+=(x%10);
        d++;
        x=x/10;
    }
    cout<<s<<endl<<d;

*/
/*string x;
cin>> x;
int d=x.length();
int s=0;
for (int i=0;i<d;i++){
    s+=x[i]-'0';
}
cout <<d<<endl<<s;
*/
int num;
cin>>num;
for ( ;num!=0;num--)
{
    for (int j=0; j<num;j++)cout<<"*";
cout<<endl;
}
}
