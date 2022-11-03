#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;
void cubeByPointer(int *);
void sumTwoInt(int *, int *);
void circle(int *radius, double*circumference, double*area);
bool quadEquation(int *b, int *a, int *c, double *sol1, double*sol2);
void swap(float *p1, float *p2);
void SquareComplex(double *a, double *b);
int main(){
   
    int num1=10;
    int num2=2;
    cubeByPointer(&num1);
		cout<<num1<<endl;
    sumTwoInt(&num1, &num2);
		double circumf;
		double area;
		int radius=10;
		circle(&radius,&circumf,&area);
		cout<<circumf<<"\n"<<area<<endl;
		quadEquation(&num1, &num2, &radius, &area, &circumf);
		//i changed area to be the first sol, circumf to represent the second sol
		cout<<area<<endl;
		cout<<circumf<<endl;
		//i checked the answer, its correct and it's changing the values properly
		float p1=5; 
		float p2=10;
		swap(&p1, &p2);
		cout<<p2<<"\n"<<p1<<endl;

    return 0;
}
//q1
void cubeByPointer(int *num1){
    *num1=*num1**num1**num1;
}
//q2
void sumTwoInt(int *num1, int *num2){
    int sum= *num1 +*num2;
    cout<<sum<<endl;
}
//q3
void circle(int *radius, double*circumference, double*area){
    const double pi= 3.14;
    *area= (pi* *radius)*(pi* *radius) ;
		*circumference = 2* pi* *radius;
}
//q4
bool quadEquation(int *b, int *a, int *c, double *sol1, double*sol2){
int discriminant = *b**b - 4**a**c;
    if (discriminant > 0) {
        *sol1 = (-*b + sqrt(discriminant)) / (2**a);
        *sol2 = (-*b - sqrt(discriminant)) / (2**a);
				return true;
    }
    else if (discriminant == 0) {
        *sol1 = -*b/(2**a);
    	  *sol2=*sol1;
				return true;
    }
    else {
       return false;
    }
}
//q5
void swap(float *p1, float *p2){
float temp;
temp = *p1;
*p1 = *p2;
*p2 = temp;
//basically the problem was that we were not dereferncing the pointers when changing their values
}

//q6
void SquareComplex(double *a, double *b) {
// Squares a complex number a + bi
*a = *a * *a - *b * *b;
*b = 2* *a * *b;
//you need to make sure you're passing pointers as refernces and that youre derefercing them when changeing their values
}
