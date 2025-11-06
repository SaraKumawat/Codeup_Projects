#include <iostream>
using namespace std;
void sos(int nums[],int n)
{
    int pref[n];
    int suff[n];
    pref[0] = nums[0];
    for (int i = 1; i<n; i++)
    { // filling the prefix array
        pref[i] = nums[i] + pref[i - 1];
    }
    suff[n - 1] = nums[n - 1];
    for (int j = n - 2; j >= 0; j--)
    { // filling the suffix array
        suff[j] = nums[j] + suff[j + 1];
    }
    int a = 0;
    int idx = -1;
    while (a < n)
    { // comparing prefix and suffix array elements one by one
        if (pref[a] == suff[a])
        {
            idx = a;
            break;
        }
        a++;
    }
    cout<<idx<<" ";
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
    sos(nums,n);

    return 0;
}