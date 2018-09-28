/*
// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 14 page 376 - problem solving with c++ 9th edition
// Program: CS213-2018-A1-T1-P14
// Purpose: Skeleton code for the student to start working
// Author:  Ibrahim Ramadan
// Date:    17 September  2018
// Version: 1.0
the problem:

14. The following is an old word puzzle: “Name a common word, besides
tremendous, stupendous and horrendous, that ends in dous.” If you think
about this for a while, it will probably come to you. However, we can also
solve this puzzle by reading a text file of English words and outputting
the word if it contains “dous” at the end. The text file “words.txt” contains
87, 314 English words, including the word that completes the puzzle. This
file is available online with the source code for the book. Write a program
that reads each word from the text file and outputs only those containing
“dous” at the end to solve the puzzle.

*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream words;
    words.open("words.txt",ios::in);
    string read;
    if (!words)
    {
        cout<<"error loading file\n";
    }
    int i=0;
    while (!words.eof()&&!words.fail())
    {
        words>>read;
        if (read[read.length()-1]=='s'&&read[read.length()-2]=='u'
            &&read[read.length()-3]=='o'&&read[read.length()-4]=='d'
            &&read!="tremendous"&&read!="stupendous"&&read!="horrendous")
        {

            cout<<read<<endl;

        }


    }

}
