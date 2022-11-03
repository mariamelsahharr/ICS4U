#include <bits/stdc++.h>
using namespace std;

void q1d();

int main() {
     //deallocate memory
    
    //1b
    q1d();
    
    return 0;
    
}
void q1a(){
    int length;
    int *ArrayPtr;
    cout << "enter the length of array " << endl;
    cin >> length;
    ArrayPtr = new int[length];//allocate memory
    
    cout << "Enter the elements of the array " << endl;
    
    for (int index = 0; index <= length -1; index++){
    cin >> ArrayPtr[index];}
    
    for (int index = 0; index <= length -1; index++){
    
    cout << ArrayPtr[index]<<endl;}
    
    delete[] ArrayPtr;
}
void q1b(){
     int length;
    int *arrayPtr;
    cout << "enter the length of array " << endl;
    cin >> length;
    arrayPtr = new int[length];//allocate memory
    
    cout << "Enter the elements of the array " << endl;
    
    for (int index = 0; index <= length -1; index++){
    cin >> arrayPtr[index];}
    
    for (int index = length-1; index <= 0; index--){
    cout << arrayPtr[index]<<endl;}
    
    delete[] arrayPtr;
    
}

void q1c(){
     int length;
    int *arrayPtr;
    cout << "enter the length of array " << endl;
    cin >> length;
    arrayPtr = new int[length];//allocate memory
    for (int index = 0; index <= length -1; index++){
    arrayPtr[index]=rand() % 50 + 1;
    }
    delete[] arrayPtr;
}


void q1d(){
     int length1;
    int *arrayPtr1;
    int length2;
    int *arrayPtr2;
    int *arrayPtr3;
     
     
    cout << "enter the length of first array " << endl;
    cin >> length1;
    arrayPtr1 = new int[length1];//allocate memory
    
    
     cout << "enter the length of second array " << endl;
    cin >> length2;
    arrayPtr2 = new int[length2];//allocate memory
    
    
    for (int index = 0; index <= length1 -1; index++){
    arrayPtr1[index]=rand() % 50 + 1;
    }
    
     for (int index = 0; index <= length2 -1; index++){
    arrayPtr2[index]=rand() % 50 + 1;
    }
    
    arrayPtr3 = new int[length2+length1];
    int i;
		int j;
    for( i = 0; i < length1; i++)
  	{
      	arrayPtr3[i] = arrayPtr1[i];
  	}
  
 		for(i = 0, j = length1; j < length2+length1 && i < length2; i++, j++)
  	{
  		arrayPtr3[j] = arrayPtr2[i];
  	}

  	cout<<"array 1:"<<endl;

		for( i = 0; i < length1; i++)
  	{
		cout<<arrayPtr1[i]<<endl;
			}

		cout<<"array 2:"<<endl;
		for( i = 0; i < length2; i++)
  	{cout<<arrayPtr2[i]<<endl;

		}
		cout<<"array 3:"<<endl;
		for( i = 0; i < length2+length1; i++)
  	{cout<<arrayPtr3[i]<<endl;;
		}

    delete[] arrayPtr1;
     delete[] arrayPtr2;
      delete[] arrayPtr3;
}
