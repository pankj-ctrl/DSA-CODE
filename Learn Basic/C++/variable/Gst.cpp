#include <iostream>
using namespace std;
int main (){
    float pencil,pen,eraser;

    // Pencil cost
    cout << "Enter pencil cost: ";
    cin >> pencil;

    // Pen cost
    cout << "Enter Pen cost: ";
    cin >> pen;

    // Eraser cost
    cout << "Enter eraser cost : ";
    cin >> eraser;

    float totalCost = pencil+pen+eraser;

    // Calculate gst here
    float Gst = (totalCost*18)/100;
    float Cost = totalCost+Gst;

    // Print Total cost with and without gst

    cout << "Total cost without gst " << totalCost << "\n";
    cout << "Total cost with gst " << Cost << "\n";

    return 0;
}