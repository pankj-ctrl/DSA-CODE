#include<bits/stdc++.h>
using namespace std;
int main (){
    int num,count=0;
    cout << "Enter a number : ";
    cin >> num;
    for(int i=1; i*i<=num;i++){
        if(num%i==0){
            count++;
        }
        if((num/i) != i){
            count++;
        }
    }
    if(count==2)cout<< true; 
    else cout << false;

    return 0;
}