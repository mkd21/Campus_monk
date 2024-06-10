#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr , int target)
{
    int startIndex = 0;
    int endIndex = arr.size() - 1;


    while (startIndex <= endIndex)
    {
        int mid = startIndex + ((endIndex - startIndex) / 2);

        if(target == arr[mid])
            return mid;
        else if(target > arr[mid])
            startIndex = mid + 1;
        else
            endIndex = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> arr(7);
    for(int &i : arr)
    {
        cin>>i;
    }
    
    int target;
    cin>>target;

    cout<< BinarySearch(arr , target);

    return 0;
}