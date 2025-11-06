#include <iostream>
using namespace std;
void numOfCities(int nums[], int initialEnergy, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // energy becomes negative -> break the loop
        if (initialEnergy < 0)
            break;
        // if energy > 0 -> update energy level
        else
        {
            initialEnergy -= nums[i];
            if (initialEnergy >= 0)
                count++; // increment the counter
        }
    }
    if (count == n - 1)
    { // all cities were travelled successfully
        cout<<"The number of cities that can be travelled successfully : " <<n - 1<<endl;
        return;
    }
    cout<<"The number of cities that can be travelled successfully : "<<count<<endl;
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
        cin >> nums[i]; // input elements in the array
    }

    int initialEnergy;
    cout << "Enter the initial energy : ";
    cin >> initialEnergy;

    numOfCities(nums,initialEnergy,n); // function call

    return 0;
}
