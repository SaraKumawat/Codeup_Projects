#include <iostream>
using namespace std;
void minFlips(int nums[],int size)
{
    int n = size;
    int noofzeros = 0; // number of zeros
    int noofones = 0;  // number of ones
    for (int i = 0; i < n; i++)
    { // count number of zeros and ones
        if (nums[i] == 0)
        {
            noofzeros++;
        }
        else
            noofones++;
    }
    int flips = min(noofones, noofzeros); // the one which is less in number must be flipped
    cout<<flips<<endl;
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
    minFlips(nums,n);
    return 0;
}