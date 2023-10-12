#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the size of array as row and cols:" << endl;
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter " << n * m << " elements in array :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Elements in array are :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "\t";
        }
    }

    return 0;
}