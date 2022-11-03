#include <iostream>
using namespace std;
void q1a();
void q1b();
void q1c();
void q2();
void modifyArray (int[], int);
void modifyElement(int*);
int main() {
q1a();
q1b();
q1c();
q2();
int element[5];
for (int index =0; index <= 4; index++)
element[index] = index;
cout << "Effects of passing entire array call by reference\n\n";
cout << "Value of the original array is \n";
for (int x = 0; x <= 4; x++)
cout << element[x] << " ";
cout << endl;
cout<<element[3];
modifyArray (element, 5);
cout << endl << endl;
cout << "Effects of passing array element call-by-value\n\n";
cout << "The value of element[3] is " << element[3] << endl;
modifyElement(&element[3]);
cout << "The value of element[3] is " << element[3] << endl;

}

//q1a
void q1a(){
int row, column;
int **matrix; 
cout << "please enter the dimesion of the matrix" << endl;
cin >> row;
cin >> column;

matrix=new int*[row]; //creates a new array of pointers to int objects for rows
for(int i=0; i<row; ++i){
matrix[i]= new int[column];}//creates new 'column' number of locations

cout << "enter the elements of the array " << endl;

for ( int i= 0; i<row; i++){
for ( int j=0; j<column; j++){
cin>>matrix[i][j];
}
}

for (int r=0; r<row; r++){
for (int c = 0; c< column; c++)
cout << matrix[r][c]<<"\t";
cout << endl;
}
 for (int r=0; r<row; r++){
 delete[] matrix[r]; //deallocate each pointer within the pointer array
 }
 delete[] matrix; //deallocate the pointer
}

//q1b
void q1b(){
	int row, column;
int **matrix; 
cout << "please enter the dimesion of the matrix" << endl;
cin >> row;
cin >> column;

matrix=new int*[row]; //creates a new array of pointers to int objects for rows
for(int i=0; i<row; ++i){
matrix[i]= new int[column];}//creates new 'column' number of locations
int avg;
for ( int i= 0; i<row; i++){
for ( int j=0; j<column; j++){
matrix[i][j]=rand() % 1000 + 1;
avg+=matrix[i][j];
}
}
avg=avg/(row*column);
for (int r=0; r<row; r++){
 delete[] matrix[r]; //deallocate each pointer within the pointer array
 }
 delete[] matrix;
}

//q1c
void q1c(){
	int n;
int **matrix; 
cout << "please enter n" << endl;
cin >> n;
matrix=new int*[n]; //creates a new array of pointers to int objects for rows
for(int i=0; i<n; ++i){
matrix[i]= new int[n];
}

cout<<"this is main array"<<endl;
for ( int i= 0; i<n; i++){
for ( int j=0; j<n; j++){
matrix[i][j]=rand() % 1000 + 1;
cout<<matrix[i][j]<<" ";
}
cout<<endl;
}

cout<<"diagonall"<<endl;
for ( int j=0; j<n; j++){
cout<<matrix[j][j]<<endl;
}

for (int r=0; r<n; r++){
 delete[] matrix[r]; //deallocate each pointer within the pointer array
 }
 delete[] matrix;
}
//q2
void q2(){


		int row1, column1;
int **matrix1; 
cout << "please enter the dimesion of first matrix" << endl;
cin >> row1;
cin >> column1;

matrix1=new int*[row1]; //creates a new array of pointers to int objects for rows
for(int i=0; i<row1; ++i){
matrix1[i]= new int[column1];
}
	int row2, column2;
int **matrix2; 
cout << "please enter the dimesion of second matrix" << endl;
cin >> row2;
cin >> column2;

matrix2=new int*[row2]; //creates a new array of pointers to int objects for rows
for(int i=0; i<row2; ++i){
matrix2[i]= new int[column2];
}
cout<<" matrix 1: "<<endl;
for ( int i= 0; i<row1; i++){
for ( int j=0; j<column1; j++){
matrix1[i][j]=rand() % 1000 + 1;
cout<<matrix1[i][j]<<" ";
}
cout<<endl;
}
cout<<"\n"<<"matrix 2: "<<endl;
for ( int i= 0; i<row2; i++){
for ( int j=0; j<column2; j++){
matrix2[i][j]=rand() % 1000 + 1;
cout<<matrix2[i][j]<<" ";
}
cout<<endl;
}

int **matrix3;
matrix3= new int *[row1+row2];

for(int i=0; i<row1; ++i){
matrix3[i]= new int[column1];
}

for(int i=row1; i<row1+row2; ++i){
matrix3[i]= new int[column2];
}
cout<<"\n"<<"third matrix "<<endl;

for ( int i= 0; i<row1; i++){
for ( int j=0; j<column1; j++){
matrix3[i][j]=matrix1[i][j];
cout<<matrix3[i][j]<<" ";
}
cout<<endl;
}

int m,f;
for ( int i= row1; i<row2+row1; i++){
	f=0;
for ( int j=0; j<column2; j++){
matrix3[i][j]=matrix2[m][f];
cout<<matrix3[i][j]<<" ";
	f++;
}
cout<<endl;
m++;
}




 for (int r=0; r<row1; r++){
 delete[] matrix1[r]; //deallocate each pointer within the pointer array
 }
  for (int r=0; r<row2; r++){
 delete[] matrix2[r]; //deallocate each pointer within the pointer array
 }
   for (int r=0; r<row2+row1; r++){
 delete[] matrix3[r]; //deallocate each pointer within the pointer array
 }
 delete[] matrix1;
 delete[] matrix2;
 delete[] matrix3;

}
void modifyArray( int b[], int ArraySize){
for(int i=0; i<ArraySize; i++){
b[i]=b[i]*2;
}
}

void modifyElement( int *a){
*a=*a*2;
}
