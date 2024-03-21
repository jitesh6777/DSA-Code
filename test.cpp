// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void fibo(int arr[], int n, int giv)
{
    int str = 0;
    int end = n - 1;

    while (str < end)
    {
        if (arr[str] + arr[end] == giv)
        {
            cout << str << " " << end;
            break;
        }
        else if (arr[str] + arr[end] > giv)
            str++;
        else
            end--;
    }
}

int main()
{
    // Write C++ code here
    int n;
    int arr[] = {0, 1, 1, 2, 4, 6, 8, 9, 10, 11};

    fibo(arr, 10, 10);
    return 0;
}