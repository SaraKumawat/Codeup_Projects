#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
void paint(int time[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    { // time taken to paint all walls
        sum += time[i];
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    { // total time taken to paint except the ith idx wall
        arr[i] = sum - time[i];
    }
    int min1 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        min1 = min(min1, arr[i]);
    }
    cout<<min1<<endl;
}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int time[n];
    for (int i = 0; i < n; i++)
    {
        cin >> time[i];
    }

    paint(time,n);
    return 0;
}