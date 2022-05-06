//fibonacci series
#include <bits/stdc++.h>  
using namespace std;  
int main() {  
  int n1=0,n2=1,n3,i,N;    
 cout<<"Enter the number of elements: ";    
 cin>>N;    
 cout<<n1<<" "<<n2<<" ";  
 for(i=2;i<N;++i) 
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
   return 0;  
   } 
