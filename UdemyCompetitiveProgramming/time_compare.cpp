#include <bits/stdc++.h>
#include <ctime>
using namespace std;

void bubbleSort(vector<int> &arr,int n);

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n,0);

    for(int i=0;i<n;i++)
        arr[i] = n-i;

    auto start_time = clock(); // timestamp current date and time
    cout << start_time <<endl;
   // sort(arr.begin(),arr.end());
    bubbleSort(arr,arr.size());
    auto end_time = clock();
    cout << end_time << endl;

    cout << end_time - start_time << endl;
} 

void bubbleSort(vector<int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]> arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}