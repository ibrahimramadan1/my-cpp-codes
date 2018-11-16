// Course:  CS213 - Programming II  - 2018
// Title:   Assignment III - Task 2 - Problem 2
// Program: CS213-2018-A3-T2-P2
// Purpose: Skeleton code for the student to practice recursion
// Author:  Ibrahim Ramadan 20170002  G1
// Date:    22 Oct 2018
// Version: 2.0


/*
2. Write a recursive function that has an argument that is an array of characters
and two arguments that are bounds on array indexes. The function
should reverse the order of those entries in the array whose indexes are
between the two bounds. For example, if the array is
a[0] == 'A' a[1] == 'B' a[2] == 'C' a[3] == 'D' a[4] == 'E'
and the bounds are 1 and 4, then after the function is run the array
elements should be
a[0] == 'A' a[1] == 'E' a[2] == 'D' a[3] == 'C' a[4] == 'B'
Embed the function in a program and test it. After you have fully debugged
this function, define another function that takes a single argument which
is an array that contains a string value and that reverses the spelling of the
string value in the array argument. This function will include a call to the
recursive definition you did for the first part of this project. Embed this
second function in a program and test it.

*/

#include <iostream>
using namespace std;

void reversestring( char a[], int b, int c)   //function that take the array of chars and 2 iterators
{
    if (b>=c)       // check if iterator 1 passed iterator 2
        return;     //end


    else
    {
        swap (a[b],a[c]);       //swap 2 chars
         reversestring(a,b+1,c-1);      //return back to func and add 1 to iterator 1 and subtract 1 from iterator 2
    }
}

void reversestring(char a[])        //function that takes only the array of chars

{
    int b= sizeof(a)/sizeof(*a);        //get the number of chars
    reversestring(a,0,b);           // return to above function
}


int main()
{


    char a[5]={'A','B','C','D','E'};
    char b[5]={'A','B','C','D','E'};
    reversestring (a,1,4);
    for (int i=0;i<5;i++)
            cout<<a[i];
    cout<<endl;
    reversestring (b);
    for (int i=0;i<5;i++)
            cout<<b[i];
}
