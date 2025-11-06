#include <iostream>
#include <unordered_map>
using namespace std;
void unique(int nums[], int n)
{
    unordered_map<int,int>mp;// Map -> (element,frequency)
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    for(auto ele : mp){
        if(ele.second == 1){
            cout<<ele.first<<endl;
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
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    unique(nums,n);
    return 0;
}