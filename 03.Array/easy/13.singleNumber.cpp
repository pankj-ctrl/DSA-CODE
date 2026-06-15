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

void optimal(int arr[],int n){
    int xor1=0,j=0;
    int xor2=1;
    for(int j=0;j<n;j++){
        xor1 =xor1^arr[j];
        xor1=xor1^arr[j];
        if((xor1 ^ xor2) !=0){
            cout << "Value is : " << arr[j];
            break;
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

    optimal(arr, n);
}