#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Atbash Cipher.cpp
// Last Modification Date: 22/02/2017
// Author1 and ID and Group: Ibrahem ramadan  20170002 G1
//Teaching Assistant: Eng.Ali  Eng.menna
// Purpose: Atbash Cipher







int main()
{

int checker;
string inp;


cout<<"If u wanna cipher press 1\nIf u wanna decipher press 2\nIf u wanna exit press any key\n";
cin>>checker;
if (checker==1){
cin.ignore();
cout <<"message: ";
getline(cin,inp);

for (int counter=0;counter<(inp.length());counter++)
{
	if (inp[counter]>=97&&inp[counter]<=122)
	{
		inp[counter]=219-inp[counter];


	}
	else if (inp[counter]>=65&&inp[counter]<=90)
	{
		inp[counter]=155-inp[counter];


	}



	}
    cout<<"cipher: "<<inp<<endl;
}
if (checker==2){
cin.ignore();
cout <<"cipher: ";
getline(cin,inp);

for (int counter=0;counter<(inp.length());counter++)
{
	if (inp[counter]>=97&&inp[counter]<=122)
	{
		inp[counter]=219-inp[counter];


	}
	else if (inp[counter]>=65&&inp[counter]<=90)
	{
		inp[counter]=155-inp[counter];


	}



	}
    cout<<"message: "<<inp<<endl;
}

return 0;

}




