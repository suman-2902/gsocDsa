#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> matrixmultiplication(vector<vector<int>>A, vector<vector<int>>B){
    vector<vector<int>> C;
    int x=0,i,j,k;
    for(i=0;i<A.size();i++)
    {
        vector<int>r;
        for(j=0;j<B[0].size();j++)
        { x=0;
            for(k=0;k<B.size();k++)
            {
                x += A[i][k]*B[k][j];
            }
            r.push_back(x);
        }
        C.push_back(r);
    }
    return C;
}
int main()
{
    vector<vector<int>>A , B, C;
    int M,N,P;
    cout<<"Enter size in M,N.P\n";
    cin>>M>>N>>P;
    cout<<"Enter elements in matrix1\n";
    for(int i=0;i<M;i++)
    {
        vector<int>v;
        int num;
        for(int j=0;j<N;j++)
        {   cin>>num;
            v.push_back(num);
        }
        A.push_back(v);
    }
        cout<<"Enter elements in matrix2\n";
    for(int i=0;i<N;i++)
    {
        vector<int>v;
        int num;
        for(int j=0;j<P;j++)
        {   cin>>num;
            v.push_back(num);
        }
        B.push_back(v);
    }
    cout<<"product of arrays\n";
    C=matrixmultiplication(A,B);
    for(int i=0;i<C.size();i++)
    {
        for(int j=0;j<C[i].size();j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
