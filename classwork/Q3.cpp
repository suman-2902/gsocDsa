//merge sorted array


#include<bits/stdc++.h>
using namespace std;

vector<int>merge_sorted_array(vector<int>A,vector<int>B){
    vector<int>C;
    
    int i=0;
    int j=0;
    while(i<A.size()&&j<B.size()){
        
        if(A[i]<=B[j]){    
            C.push_back(A[i]);
            i++;
        
        }
        else{
            C.push_back(B[j]);
            j++;
        }
        while(i<A.size()){
            C.push_back(A[i]);
            i++;
        }
        while(j<B.size()){
            C.push_back(B[j]);
            j++;
        }

    }
            return C;
}
int main(){
    int n;
    int m;
     vector<int> A, B, C;

	cout << "Enter Size of Vector 1: ";
	cin >> n;
	A = vector<int>(n);
	cout << "Enter Elements of Vector1: ";
	for (int i = 0; i < n; ++i) {
		cin >> A[i];
    }
	cout << "\nEnter Size of Vector 2: ";
	cin >> m;
	B = vector<int>(m);
	cout << "Enter Elements of Vector 2: \n";
	for (int i = 0; i < m; ++i) {
		cin >> B[i];
	}
    C=merge_sorted_array(A,B);
    for(int i=0;i<C.size(); i++){
        cout<<C[i]<<"\n";
    }
    
    return 0;
}

