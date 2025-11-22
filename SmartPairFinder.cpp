#include <iostream>
using namespace std;
void checkpair(int nums[], int target,int n)
{
    bool flag = false; // set the flag as false
    for (int i = 0; i < n; i++)  // compare ith element with every j element 
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)  // if ith element + jth element = target 
            {
                flag = true; // we found a pair -> set flag to true
                break;
            }
        }
    }
    cout<<flag<<endl; // output the flag
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
    int target;
    cout << "Enter the target number : ";
    cin >> target;

    checkpair(nums,target,n);

    return 0;
}

