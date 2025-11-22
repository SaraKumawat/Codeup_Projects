#include <iostream>
#include <unordered_map>
using namespace std;
void unique(int nums[], int n)
{
    unordered_map<int,int>mp;// Map -> (element,frequency)
    for(int i=0;i<n;i++){ // fill the map with frequency of each element
        mp[nums[i]]++;
    }
    for(auto ele : mp){
        if(ele.second == 1){ // if frequency is 1 -> num is unique 
            cout<<ele.first<<endl; // we have founded our result -> print it
            break;
        }
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int nums[n]; // array of size n

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];  // input array elements
    }
    unique(nums,n); // function calling
    return 0;
}
