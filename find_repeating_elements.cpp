#include<iostream>
#include<climits>
using namespace std;

int main(){

    // int arr1[5] = {2 , 1 , 2 , 3 , 3};
    // int size1 = 5;

    int arr1[7] = {10 , 2 , 8 , 8  , 1 , 1 , 1};
    int size1 = 7;

    for(int i = 0; i < size1; i++)
    {
        int count = 0;
        if(arr1[i] == INT_MIN)
        {
            continue;
        }

        for(int j = i; j < size1; j++)
        {
            if(arr1[i] == arr1[j])
            {
                count++;
            }
        }
        if(count > 1)
        {
            cout<<arr1[i]<<" ";
            int target = arr1[i];
            for(int k = i; k <size1; k++)
            {
                if(arr1[k] == target)
                {
                    arr1[k] = INT_MIN;
                }
            }
        }
    }

    // for(int i = 0; i < size1; i++)
    // {
    //     cout<<arr1[i]<<" ";
    // }

    return 0;
}