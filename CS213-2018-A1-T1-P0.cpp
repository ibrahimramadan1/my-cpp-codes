// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 0
// Program: CS213-2018-A1-T1-P0
// Purpose: Skeleton code for the student to start working
// Author:  Ibrahim Ramadan 20170002
//          Athar Atef      20170005
//          Ahmed Elsayed   20170011
// Date:    10 August 2018
// Version: 1.0

#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

// A structure to store a matrix
struct matrix
{
    int** data;       // Pointer to 2-D array that will simulate matrix
    int row, col;
};

// Already implemented
void createMatrix (int row, int col, int num[], matrix& mat);

// Student #1 with the smallest ID (e.g., 20170080)
// All these operations return a new matrix with the calculation result
matrix operator+  (matrix mat1, matrix mat2); // Add if same dimensions
matrix operator-  (matrix mat1, matrix mat2); // Sub if same dimensions
matrix operator*  (matrix mat1, matrix mat2); // Multi if col1 == row2
matrix operator+  (matrix mat1, int scalar);  // Add a scalar
matrix operator-  (matrix mat1, int scalar);  // Subtract a scalar
matrix operator*  (matrix mat1, int scalar);  // Multiple by scalar

// Student #2 with the middle ID (e.g., 20170082)
// The last operator >> takes an istream and a matrix and return the
// the same istream so it is possible to cascade input like
// cin >> matrix1 >> matrix2 << endl;
matrix operator+= (matrix& mat1, matrix mat2); // mat1 changes & return
// new matrix with the sum
matrix operator-= (matrix& mat1, matrix mat2); // mat1 changes + return new
// matrix with difference
matrix operator+= (matrix& mat, int scalar);   // change mat & return new matrix
matrix operator-= (matrix& mat, int scalar);   // change mat & return new matrix
void   operator++ (matrix& mat);   	// Add 1 to each element ++mat
void   operator-- (matrix& mat);    	// Sub 1 from each element --mat
istream& operator>> (istream& input, matrix& mat)
{

    cout<<"Enter no. rows and columns: "; // ask user for the no. rows and columns
    input>>mat.row>>mat.col;        //take them as input


    mat.data = new int* [mat.row];
    for (int i = 0; i < mat.row; i++)       //turn pointer of pointer into 2d array
        mat.data[i] = new int [mat.col];


    for(int i=0; i<mat.row; i++)
    {
        cout<<"Enter "<<i+1<<" row: ";
        for(int j=0; j<mat.col; j++)
        {

            input>>mat.data[i][j];      //take the data from user
        }
    }
    return input;       //return the data
}
// Input matrix like this (dim 2 x 3) cin >> 2 3 4 6 8 9 12 123
// and return istream to allow cascading input

//Student #3 with the biggest ID (e.g., 20170089)
ostream& operator<< (ostream& output, matrix mat)
{

    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            output<<mat.data[i][j]<<"   ";      //print the data
        }
        cout<<endl;
    }
    return output;          //return it
}
// Print matrix  as follows (2 x 3)			4	 6 	  8
// and return ostream to cascade printing	9	12  	123
bool   operator== (matrix mat1, matrix mat2);	// True if identical
bool   operator!= (matrix mat1, matrix mat2); 	// True if not same
bool   isSquare   (matrix mat);  // True if square matrix
bool   isSymetric (matrix mat);  // True if square and symmetric
bool   isIdentity (matrix mat);  // True if square and identity
matrix transpose(matrix mat);    // Return new matrix with the transpose

//__________________________________________

int main()
{
    int data1 [] = {1,2,3,4,5,6,7,8};
    int data2 [] = {10,100,10,100,10,100,10,100};
    int checker,scalar;
    matrix mat1, mat2;
    createMatrix (4, 2, data1, mat1);
    createMatrix (4, 2, data2, mat2);
    cout<<"Ahlan ia user ia 7abibi \n"<<
        "3aiez eh ia 3slia \n"<<
        "1-show your matrices \n"<<
        "2-Enter new matrices\n"<<
        "3-mat1+mat2          4-mat1+=mat2(mat1 changes)\n"<<
        "5-mat1-mat2          6-mat1-=mat2(mat1 changes)\n"<<
        "7-mat1*mat2\n"<<
        "8-mat1*scalar  \n"<<
        "9-mat1+scalar        10-mat1+=scalar(mat1 changes)\n"<<
        "11-mat1-scalar       12-mat1-=scalar(mat1 changes)\n"<<
        "13-mat1++            14-mat1--\n"<<
        "15-check if mat1=mat2 \n"<<
        "16-check if mat1!=mat2 \n"<<
        "17-check if mat1 is square \n"<<
        "18-check if mat1 is symmetric \n"<<
        "19-check if mat1 is identity \n"<<
        "20-transpose mat1\n"<<
        "21-Exit\n";
    while (true)
    {
        cout<<"your choice: ";

        cin>>checker;
        if (checker==21)
            break;
        switch (checker)
        {
        case 1:
            cout<<mat1<<mat2;
            break;
        case 2:
            cin>>mat1>>mat2;
            break;
        case 3:
            cout<<(mat1+mat2)<<endl;
            break;
        case 4:
            mat1+=mat2;
            cout<<mat1;
            break;
        case 5:
            cout<<(mat1-mat2)<<endl;
            break;
        case 6:
            mat1-=mat2;
            cout<<mat1;
            break;
        case 7:
            cout<<(mat1*mat2);
            break;
        case 8:
            cout<<"Enter the scalar: ";
            cin>>scalar;
            cout<<(mat1*scalar);
            break;
        case 9:
            cout<<"Enter the scalar: ";
            cin>>scalar;
            cout<<(mat1+scalar);
            break;
        case 10:
            cout<<"Enter the scalar: ";
            cin>>scalar;
            mat1+=scalar;
            cout<<mat1;
            break;
        case 11:
            cout<<"Enter the scalar: ";
            cin>>scalar;
            cout<<(mat1-scalar);
            break;
        case 12:
            cout<<"Enter the scalar: ";
            cin>>scalar;
            mat1-=scalar;
            cout<<mat1;
            break;
        case 13:
            ++mat1;
            cout<<mat1;
            break;
        case 14:
            --mat1;
            cout<<mat1;
            break;
        case 15:
            if (mat1==mat2)
                cout<<"they are equal\n";
            else
                cout<<"they are not equal\n";
            break;
        case 16:
            if (mat1!=mat2)
                cout<<"they are not equal\n";
            else
                cout<<"they are equal\n";
            break;
        case 17:
            if (isSquare(mat1))
                cout<<"mat1 is square\n";
            else
                cout<<"mat1 is not square\n";
            break;
        case 18:
            if (isSymetric(mat1))
                cout<<"mat1 is symetric\n";
            else
                cout<<"mat1 is not symetric\n";
            break;
        case 19:
            if (isIdentity(mat1))
                cout<<"mat1 is Identity\n";
            else
                cout<<"mat1 is not Identity\n";
            break;
        case 20:
            cout<<transpose(mat1);
            break;



        }

    }
    return 0;
}

//__________________________________________
// Takes an array of data and stores in matrix according
// to rows and columns
void createMatrix (int row, int col, int num[], matrix& mat)
{
    mat.row = row;
    mat.col = col;
    mat.data = new int* [row];

    for (int i = 0; i < row; i++)
        mat.data[i] = new int [col];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            mat.data[i][j] = num[i * col + j];
}

/*
Student #1
Name: Ibrahim Ramadan Abdou
ID: 20170002
G1
Date: 17/9/2018
*/

//-----------------------------
// Add 2 matrices if they have the same dimensions and return in new matrix
matrix operator+  (matrix mat1, matrix mat2)
{
    matrix mat;                //create matrix to store mat1+mat2 then be returned


    if (mat1.row==mat2.row&&mat1.col==mat2.col) //check the dimensions
    {
        mat.row=mat1.row;       // set the dimensions of new matrix
        mat.col=mat1.col;

        mat.data = new int* [mat.row];
        for (int i = 0; i < mat.row; i++)          //turn the pointer of pointer into 2d array
            mat.data[i] = new int [mat.col];



        for (int i = 0; i < mat.row; i++)
        {

            for (int j = 0; j < mat.col; j++)
            {

                mat.data[i][j]=mat1.data[i][j]+mat2.data[i][j]; // save the data of new matrix
            }
        }
        return mat; //return it
    }
    else
    {

        cout<<"operation failed! \n"; //step if the dimensions are not equal
    }


}


//------------------------------------------------
// Add 2 matrices if they have the same dimensions and return in new matrix


matrix operator-  (matrix mat1, matrix mat2)
{

    matrix mat;             //create matrix to store mat1-mat2 then be returned



    if (mat1.row==mat2.row&&mat1.col==mat2.col)  //check the dimensions
    {
        mat.row=mat1.row;           // set the dimensions of new matrix
        mat.col=mat1.col;

        mat.data = new int* [mat.row];

        for (int i = 0; i < mat.row; i++)           //turn the pointer of pointer into 2d array
            mat.data[i] = new int [mat.col];


        for (int i = 0; i < mat.row; i++)
        {

            for (int j = 0; j < mat.col; j++)
            {

                mat.data[i][j]=mat1.data[i][j]- mat2.data[i][j]; // save the data of new matrix
            }
        }
        return mat; //return it
    }
    else
    {

        cout<<"operation failed! \n"; //step if the dimensions are not equal
    }


}
//--------------------------------------------------------------------
// Multiply 2 matrices if col1 == row2 and return in a new matrix

matrix operator*  (matrix mat1, matrix mat2)
{
    matrix mat;                          //create matrix to store mat1*mat2 then be returned

    if (mat1.col==mat2.row)         //check the dimensions
    {
        mat.row=mat1.row;
        mat.col=mat2.col;            // set the dimensions of new matrix

        mat.data = new int* [mat.row];
        for (int i = 0; i < mat1.row; i++)              //turn the pointer of pointer into 2d array
            mat.data[i] = new int [mat.col];

        for (int i=0; i<mat.row; i++)
        {
            for (int j=0; j<mat.col; j++)
            {
                mat.data[i][j]=0;           //set the initial value of matrix's elements 0
            }
        }


        for (int co=0; co<mat.row; co++)
        {
            for (int co1=0; co1<mat.col; co1++)
            {
                for (int co2=0; co2<mat1.col; co2++)
                {
                    mat.data[co][co1]+=mat1.data[co][co2]*mat2.data[co2][co1];      //save the data of new matrix
                }
            }
        }
        return mat;     //return the new matrix


    }

    else
    {
        cout<<"Operation failed \n";        //step if dimensions are not suitable
    }


}


//--------------------------------------------------------------
// Add a scalar to the matrix
matrix operator+  (matrix mat1, int scalar)
{
    matrix mat;             //create new matrix
    mat.row=mat1.row;
    mat.col=mat1.col;      //set the dimensions of new matrix

    mat.data = new int* [mat.row];

    for (int i = 0; i < mat.row; i++)           //turn the pointer of pointer into 2d array
        mat.data[i] = new int [mat.col];


    for (int i=0; i<mat.row; i++)
    {
        for (int j=0; j<mat.col; j++)
        {
            mat.data[i][j]=mat1.data[i][j]+scalar;      //save the data of new matrix
        }
    }

    return mat;              //return the new matrix

}

//----------------------------------------------------------------
// Subtract a scalar from a matrix

matrix operator-  (matrix mat1, int scalar)
{
    matrix mat;                     //create new matrix
    mat.row=mat1.row;
    mat.col=mat1.col;      //set the dimensions of new matrix


    mat.data = new int* [mat.row];
    for (int i = 0; i < mat.row; i++)               //turn the pointer of pointer into 2d array
        mat.data[i] = new int [mat.col];


    for (int i=0; i<mat.row; i++)
    {
        for (int j=0; j<mat.col; j++)
        {
            mat.data[i][j]=mat1.data[i][j]-scalar;          //save the data of new matrix
        }
    }

    return mat;         //return the new matrix

}

//----------------------------------------------------
// Multiple by scalar
matrix operator*  (matrix mat1, int scalar)
{
    matrix mat;                     //create new matrix
    mat.row=mat1.row;
    mat.col=mat1.col;      //set the dimensions of new matrix


    mat.data = new int* [mat.row];
    for (int i = 0; i < mat.row; i++)       //turn the pointer of pointer into 2d array
        mat.data[i] = new int [mat.col];


    for (int i=0; i<mat.row; i++)
    {
        for (int j=0; j<mat.col; j++)
        {
            mat.data[i][j]=mat1.data[i][j]*scalar;      //save the data of new matrix
        }
    }

    return mat;             //return the new matrix

}


/*
student #2
Name: Athar Atef Hussein
ID: 20170005
G1
*/

//this operator is to add one(incremented by one) prefix to each element in the matrix
void   operator++ (matrix& mat){ //function that overload operator ++ to add one to each element in the matrix
    for(int i=0; i<mat.row; i++) //for loop that loop on the rows of the matrix
    {
        for(int j=0; j<mat.col; j++) // for loop that loop on the col of the matrix
        {
            ++mat.data[i][j];   //add one to each element in the matrix
        }
    }

}
//this operator is to subtract one(decremented by one) prefix to each element in the matrix
void   operator-- (matrix& mat){ //function that overload operator -- to subtract one from each element in the matrix
  for(int i=0; i<mat.row; i++) //for loop that loop on the rows of the matrix
    {
        for(int j=0; j<mat.col; j++) //for loop that loop on the cols of the matrix
        {
            --mat.data[i][j]; //subtract one from each element in the matrix
        }
    }
}
//this operator is to add mat2 to mat1 then we put the result in mat1
matrix operator+= (matrix& mat1, matrix mat2){ //function that overload operator +=to add mat2 to mat1
    if(mat1.row!=mat2.row || mat1.col!=mat2.col){ //check if row of mat1 equal row of mat2 and col of mat1 equal col of mat2
        cout<<"error"<<endl; //print error to the screen
    }
    else{
     for(int i=0; i<mat1.row; i++) //for loop that loop on the rows of the matrix
    {
        for(int j=0; j<mat1.col; j++) //for loop that loop on the cols of the matrix
        {
            mat1.data[i][j]+=mat2.data[i][j]; //add mat2 to mat1 and store it in mat1
        }
    }
    return mat1; //return back mat1
}

}
//this operator is to subtract mat2 from mat1 then we put the result in mat1

matrix operator-= (matrix& mat1, matrix mat2){//function that overload operator -= to subtract mat2 from mat1
    if(mat1.row!=mat2.row || mat1.col!=mat2.col){//check if row of mat1 equal row of mat2 and col of mat1 equal col of mat2
        cout<<"error"<<endl; //print error to the screen
    }
    else{
   for(int i=0; i<mat1.row; i++)//for loop that loop on the rows of the matrix
    {
        for(int j=0; j<mat1.col; j++)//for loop that loop on the cols of the matrix
        {
            mat1.data[i][j]-=mat2.data[i][j];//subtract mat2 from mat1 and store it in mat1

        }
    }
    return mat1;//return back mat1
}

}
//this operator is to add any number you want to any matrix
matrix operator+= (matrix& mat, int scalar){ //function that overload operator += to add int number to each element in the matrix
   for(int i=0; i<mat.row; i++)//for loop that loop on rows of the matrix
    {
        for(int j=0; j<mat.col; j++)//for loop that loop on cols of the matrix
        {
            mat.data[i][j]+=scalar;//add int number to each element in the matrix
        }
    }
    return mat;
}
//this operator is to subtract any number you want from any matrix
matrix operator-= (matrix& mat, int scalar){//function that overload operator -=to subtract int number from each element in the matrix
    for(int i=0; i<mat.row; i++)//for loop that loop on rows of the matrix
    {
        for(int j=0; j<mat.col; j++)//for loop that loop on cols of the matrix
        {
            mat.data[i][j]-=scalar;//subtract int number from each element in the matrix
        }
    }
    return mat;
}

/*
student #3
Name:Ahmed Elsayed Ali
ID: 20170011
G1
*/

//__________________________________________________________________________________________________
// Operator to take two matrices and check if identical or no.

bool operator== (matrix mat1, matrix mat2)
{
    for (int i = 0; i < mat1.col; i++)       // For loop to check the two matrices is identical or no.
        for (int j = 0; j < mat2.col; j++)
            if (mat1.data[i][j] != mat2.data[i][j]) // Condition to check if the two matrices is identical or no
                return 0;                           // and return false if condition true.
    return 1;                                       // else return true if condition false.
}
//________________________________________________________________________________________

// Operator to take two matrices and check if not identical or no.

bool operator!= (matrix mat1, matrix mat2)
{
    for (int i = 0; i < mat1.col; i++)      // For loop to check the two matrices is not identical or no.
        for (int j = 0; j < mat2.col; j++)
            if (mat1.data[i][j] != mat2.data[i][j]) // Condition to check if the two matrices is not identical or no
                return 1;                           // and return true if condition true.
    return 0;                                       // else return false if condition false.
}
//_________________________________________________________________________________________

// Function to take matrix and check if is square or no.

bool isSquare (matrix mat)
{
    if (mat.row == mat.col) // Condition to check if matrix square or not if the number of rows equal the number of columns.
        return 1;           // return true if the matrix is square.
    return 0;               // return false if the matrix is not square.
}
//_________________________________________________________________________________________

// Function to take matrix and check if is Symetric & square or no.

bool isSymetric (matrix mat)
{
    if (mat.row == mat.col) // Condition to check if matrix square or not if the number of rows equal the number of columns.
    {
        for (int i = 0; i < mat.row; i++) // For loop to check the matrix is Symetric.
            for (int j = 0; j < i; j++)
                if (mat.data[i][j] != mat.data[j][i]) // condition to check the matrix is not symetric and return false.
                    return 0;
        return 1;                                     // Else return true.
    }
    else
        return 0; // return false if the matrix is not square.
}
//___________________________________________________________________________________________

// Function to take matrix and check if is Identity & square or no.

bool isIdentity (matrix mat)
{
    int flag = 1;                         // Variable to check if the matrix identity or no.
    if (mat.row == mat.col)               // Condition to check if matrix square or not if the number of rows equal the number of columns.
    {
        for (int i = 0; i < mat.row; i++)  // For loop to check the matrix is identity.
        {
            for (int j = 0; j < mat.col; j++)
            {
                if ( i == j && mat.data[i][j]!=1)  // condition to check the matrix is not identity if row equal col and the value
                {                                  // not equal 1 then the variable "flag" become 0 and will break from loop.
                    flag = 0;
                    break;
                }
                if (i != j && mat.data[i][j]!=0)   // condition to check the matrix is not identity if row not equal col and the value
                {                                  // not equal 0 then the variable "flag" become 0 and will break from loop.
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)  // condition to check the matrix is identity if the variable "flag" equal 1 then the condition
            return 1;   // will be true and the matrix is identity.
        else            // else the matrix is not identity and return false.
            return 0;
    }
    else
        return 0;      // return false if the matrix is not square.
}
//_____________________________________________________________________________________________

//Function to take matrix and return new matrix with the transpose

matrix transpose(matrix mat)
{
    matrix mat1;         //Create new matrix to receive matrix with the transpose.
    mat1.row=mat.col;    // rows will be columns.
    mat1.col=mat.row;

    mat1.data = new int* [mat1.row];         //  Construct row pointers to integers.

    for (int i = 0; i < mat.row; i++)        // For loop to create new matrix.
        mat1.data[i] = new int [mat1.col];   // For each row, construct col integers.

    for (int i = 0; i < mat.col; i++ )       // For loop to transpose the matrix.
    {
        for (int j = 0; j < mat.row; j++)
        {
            mat1.data[i][j]=mat.data[j][i];  // Each row will be col.
        }

    }
return mat1;                                 // Return new matrix with transpose.
}
//_________________________________________________________________________________



