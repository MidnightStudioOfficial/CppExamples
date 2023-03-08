#include <iostream>
using namespace std;
 
// A function to implement binary sort
void binarySort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
           greater than temp, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
 
// Driver code
int main()
{
    int arr[] = { 3, 5, 2, 1, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    binarySort(arr, n);
 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}