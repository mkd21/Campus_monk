#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr;

    // cout<<arr.size();         // vector of size 0

    // int size = 12;
    // vector<int> arr(size);      // vector of size 12
    // cout<<arr.size();


    // vector<int> arr(size , 0);
    // cout<<arr.size();


    // vector<int> arr = {1 , 4 , 3 , 8 , 9};

    // cout<<arr.size()<< endl;

    // arr.push_back(10);

    // cout<<arr.size()<<endl;


    // for loop new thing 

    // for(int iter : arr)           // iter variable me saara value aa jyega
    // {
    //     cout<<iter<< " ";
    // }

    // for(auto iter : arr)            // auto likh skte hai. will replace with the data type that is being used 
    // {
    //     cout<<iter<< " ";
    // }


    vector<int> Arr(5);

    // for(int iter : Arr)     // avi input lene se vector me jyag hi nhi value cause iter variable ka copy baan gaya hai. actual input ke liye (&) bhejo
    // {
    //     cin>>iter;
    // }

    for(int &iter : Arr)     // avi input lene se vector me jyag hi nhi value cause iter variable ka copy baan gaya hai. actual input ke liye (&) bhejo
    {
        cin>>iter;
    }

    for(auto i : Arr)
    {
        cout<<i<<" ";
    }

    return 0;
}