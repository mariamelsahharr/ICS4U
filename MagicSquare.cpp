#include <bits/stdc++.h>
using namespace std;

void generateSquare(int n, int sum)
{
    int magicSquare[n][n];

    memset(magicSquare, 0, sizeof(magicSquare));

    int i = n / 2;
    int j = n - 1;
 //only for first case
    int x= ((sum/n)-(((n*n)-1)/2));
		
  for (int num = x; num <= ((n*n)+x);) {
    if (i == -1 && j == n)
        {
            j = n - 2;
            i = 0;
        }
        else {
            if (j == n){
                j = 0;
 }
  
            if (i < 0){
                i = n - 1;}
        }
        if (magicSquare[i][j]) 
        {	j -= 2;
          i++;
          continue;
        }
        else{
            magicSquare[i][j] = num++; }
        j++;
        i--; 
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            cout << magicSquare[i][j] << " ";
						}
        cout << endl;
    }
//		cout<<magicSquare[]
}
 

int main()
{
    int n, sum;

		cin>>n;
		cin>>sum;
    generateSquare(n, sum);
    return 0;
}
