#include <bits/stdc++.h>
using namespace std;

int main(){
    int input;
    int largest=0;
    int smallest=INT_MAX;
    unsigned sum=0;
    for(int i=0;i<5;i++){
        cin>>input;
        sum+=input;
        if(input>largest)
        largest=input;
        if(input<smallest)
        smallest=input;
        
    }
    cout<<sum-largest<<" "<<sum-smallest;
    return 0;
}
