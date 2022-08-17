#include <iostream>
using namespace std;
void swap(long long arr[], long long i, long long j)
{
    long long temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void wavesort(long long arr[], long long n)
{
    for (long long i = 1; i < n - 1; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr, i, i - 1);
        }
        if (i < n - 1 && arr[i] > arr[i + 1])
        {
            swap(arr, i, i + 1);
        }
    }
}

int main(void)
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    wavesort(arr, n);
    for (long long i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}