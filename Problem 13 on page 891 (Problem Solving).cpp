// Course:  CS213 - Programming II  - 2018
// Title:   Assignment II - Task 2 - Problem 2
// Program: CS213-2018-A2-T2-P2
// Purpose: Skeleton code for the student to practice with inheritance
// Author:  Ibrahim Ramadan 20170002  G1
// Date:    22 Oct 2018
// Version: 2.0



/*
13. The following is an attempt to create a class to represent information about
pets:
class Pet
{
public:
Pet();
void printDescription();
string name;
int type;
bool neuterSpayed;
bool talks;
};
Pet::Pet() : type(0), neuterSpayed(false),
talks(false)
{ }
void Pet::printDescription()
{
switch (type)
{
case 0:
cout << "Dog named " << name << endl;
cout << "Neuter/Spayed: " <<
neuterSpayed;
break;
case 1:
cout << "Cat named " << name << endl;
cout << "Neuter/Spayed: " <<
neuterSpayed;
break;
case 2:
cout << "Bird named " << name << endl;
cout << "Talks: " << talks << endl;
break;
}
cout << endl;
}
Rewrite this code using inheritance. You should have a Pet class with
subclasses for Dog, Cat, and Bird. Variables should be associated
with the appropriate classes, defined as private when appropriate,
and have appropriate functions to access the variables. Rewrite the
printDescription function as a virtual function. There should no longer
be the need for a switch statement or a type variable.
Write a main function that creates a vector or array of pets that includes at
least one bird, one dog, and one cat, and then loops through and outputs
a description of each one.

*/



#include <iostream>
using namespace std;

// making a parent class called pet
class pet
{
private:
    string name;
    bool neuterSpayed;      //making the data members as private data
    bool talks;
public:
    virtual void printdescription()=0; //making a pure virtual function to print description
    void setname(string a)      //make a setter to name
    {
        name=a;
    }
    string getname()        // making a getter to name
    {
        return name;
    }
    void setneuter(bool a) // making a setter to neuterspayed
    {
        neuterSpayed=a;
    }
    bool getneuter()        // making a getter to neuterspayed
    {
        return neuterSpayed;
    }
    void settalk(bool a)        // making a setter to talk
    {
        talks=a;
    }
    bool gettalk()      // making a getter to talk
    {
        return talks;
    }


};

class cat :public pet       // inherent a class called cat of parent "pet"
{
public:
    cat (string a, bool b)      //making a parametrized constructor to set values to name and neuter spayed
    {
        setname(a);
        setneuter(b);
    }
    void printdescription()     //calling the virtual fun and give it the orders
    {
        cout << "Cat named " << getname() << endl;
        cout << "Neuter/Spayed: " <<            //print name and neuter spayed
             getneuter()<<endl;

    }
};
class dog :public pet       // inherent a class called dog of parent "pet"
{
public:
    dog (string a, bool b)      //making a parametrized constructor to set values to name and neuter spayed
    {
        setname(a);
        setneuter(b);
    }
    void printdescription()     //calling the virtual fun and give it the orders
    {
        cout << "Dog named " << getname() << endl;
        cout << "Neuter/Spayed: " <<                //print name and neuter spayed
             getneuter()<<endl;


    }

};

class bird : public pet         // inherent a class called bird of parent "pet"
{
public:
    bird (string a, bool b)     //making a parametrized constructor to set values to name and talk
    {
        setname(a);
        settalk(b);
    }
    void printdescription()     //calling the virtual fun and give it the orders
    {

        cout << "Bird named " << getname() << endl;
        cout << "Talks: " << gettalk() << endl;         //print name and talks

    }
};

int main()
{
    pet *mypets[3];
    mypets[0]=new dog("rix",1);
    mypets[1]=new cat("m4m4a",0);
    mypets[2]=new bird("7070",1);
    for (int i=0; i<3; i++)
    {
        mypets[i]->printdescription();
        cout<<endl;
    }

    return 0;
}


