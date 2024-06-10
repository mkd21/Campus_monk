#include<iostream>
#include<vector>
using namespace std;

int BinarySearchRecursive(vector<int> nums , int left , int right , int target)
{
    if(left > right){
        return -1;
    }

    int mid = left + ((right - left) / 2);
    if(target == nums[mid])
        return mid;

    else if(target > nums[mid]){
        return BinarySearchRecursive(nums , mid + 1 , right , target);
    }
    else{
        return BinarySearchRecursive(nums , left , mid - 1, target);
    }
}

int BinarySearch(vector<int> arr , int target)
{
   int left = 0;
   int right = arr.size() - 1;

   return BinarySearchRecursive(arr , left , right , target);
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(12);
    arr.push_back(18);
    arr.push_back(24);
    arr.push_back(30);

    // for(int &i : arr)
    // {
    //     cin>>i;
    // }
    
    int target;
    cin>>target;

    cout<< BinarySearch(arr , target);

    return 0;
}