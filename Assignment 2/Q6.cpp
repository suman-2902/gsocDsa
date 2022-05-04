         
#include <bits/stdc++.h>
#define MAX_SIZE 1000 

int main()
{
    int arr[MAX_SIZE], size, i;
    int max1, max2;

    cout<<"Enter size of the array (1-1000): \n";
    cin>>size;
 
    cout<<"Enter elements in the array: \n";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    max1 = max2 = INT_MIN;
 
    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    cout<<"First largest =\n"<<max1<<endl;
    cout<<"Second largest =\n"<<max2;

    return 0;
}

