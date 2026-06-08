    #include <bits/stdc++.h>
    using namespace std;

    bool isPalindrome(int x) {
        int rev=0;
        int temp=x;
        if(x<0){
            return false;
        }else{
        while(x>0){
            int pop=x%10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
        if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev=(rev*10)+pop;
            x/=10;
        }}
        if(rev==temp){
            return true;
        }else { return false;}
    }

    int main(){
         cout << isPalindrome(121);
        return 0;
    }