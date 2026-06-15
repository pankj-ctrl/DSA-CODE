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
    int xor1=0;
   
    for(int j=0;j<n;j++){
        xor1=xor1^arr[j];
    }

    cout << "value is : "<< xor1 << endl;
    
}

 void better(int arr[] ,int n){
      int hash[(n+1)/2]={0};
      for(int i=0;i<n;i++){
        hash[arr[i]]++;
      }
      for(int i=1;i<=(n+1)/2;i++){
        if(hash[i]==1){
            cout << "value is "<< arr[i] << endl;
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