#include <iostream>
using namespace std;
void checkpair(int nums[], int target,int n)
{
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                flag = true;
                break;
            }
        }
    }
    cout<<flag<<endl;
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