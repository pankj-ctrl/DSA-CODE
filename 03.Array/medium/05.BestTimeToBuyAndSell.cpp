#include <bits/stdc++.h>
using namespace std;

void optimal(int arr[],int n){
    int mini=arr[0];
    int profit =0;
    for(int i=0;i<n;i++){
        int cost = arr[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,arr[i]);
    }
    cout << "Profit is : " << profit<< endl;
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Now enter the element : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    optimal(arr,n);

    return 0;
}