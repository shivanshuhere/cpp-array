#include <iostream>
using namespace std;

int main()
{
    int n, arr[n];
    cout << "Enter the size of array :" << endl;
    cin >> n;
    cout << "Enter " << n << " elements in array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements in array are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}