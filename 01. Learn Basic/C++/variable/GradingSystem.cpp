#include<bits/stdc++.h>
using namespace std;
int main(){
     int marks;
     cout<< "Enter your marks\n";
     cin>> marks;
     if(marks>=80 && marks<=100){
        cout << "You got grade A\n";
    }else if(marks>=60 && marks<=100){
       cout << "You got grade B\n";
    }else if(marks>=50 && marks<=100){
        cout << "You got grade C\n";
    }else if(marks>=45 && marks<=100){
        cout << "You got grade D\n";
    }else if(marks>=25 && marks<=100){
        cout << "You got grade E\n";
    }else if(marks<25 && marks<=100){
        cout << "You got grade F\n";
    }else{
        cout << "Write valide marks\n";
    }
        return 0;
}