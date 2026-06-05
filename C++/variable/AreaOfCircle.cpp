#include <iostream>
using namespace std;
int main(){
    float pi=3.14,r;
    cout << "Enter the Redius of Circle : ";
    cin >> r;

    float area = pi*r*r;
    
    cout << "Area of circle is " << area << "\n";
    return 0;
}