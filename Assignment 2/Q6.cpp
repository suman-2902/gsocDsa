  #include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int temp;
int max1;
int max2;
int arr[25];

for(int i=0;i<n;i++){
    
  cin>>arr[i];
    
}
max1=arr[0];
max2=arr[1];
if(max2>max1){
    temp=max1;
    max1=max2;
    max2=temp;
}
for(int i=2;i<n;i++){
    
    if(arr[i]>=max1){
        max2=max1;
        max1=arr[i];
    }
    else if(max2==max1){
        cout<<max1;
    }
    
   else if(arr[i]>max2&&arr[i]!=max1){
        max2=arr[i];
    }
}
    cout<<max1<<" "<<max2;
    return 0;
 
    
    
}
