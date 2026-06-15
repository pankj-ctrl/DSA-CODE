#include <bits/stdc++.h>
using namespace std;

void brute(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
            int cnt = 0;

        int temp = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == temp)
            {
                cnt++;
                if (cnt == 2)
                {
                    break;
                }
            }
            
        }
        if(cnt==1){
                cout << "value is " << arr[i] << endl;
            }
    }

}



int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Now Enter Element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    brute(arr, n);
}