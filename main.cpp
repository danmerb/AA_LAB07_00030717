#include <iostream>
using namespace std;

int Rod(int p[], int n) 
{ 
   int r[n+1]; 
   r[0] = 0; 

   for (int i = 1; i<=n; i++) 
   { 
       int q =-1;
       for (int j = 0; j < i; j++) 
         q = max(q, p[j] + r[i-j-1]); 
       r[i] = q; 
      // cout<<"hola: "<<r[i]<<endl;
   }
  
   return r[n]; 
} 

int main() {
  int p[]= {1,5,8,9,10,17,17,20,24,30};

  
  int n=4;
  cout<< Rod(p,  n);
}