#include<iostream>
using namespace std;

// Function to find and print the minimum and maximum values in the array
void minandmax(int* a, int size)
{
    int min = a[0];
    int max = a[0];
    
    for(int i = 1; i < size; i++) {
        if(a[i] < min) {
            min = a[i];
        }
        if(a[i] > max) {
            max = a[i];
        }
    }
    
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
}

int main()
{
    int a[5];
    
    // Correct the loop to avoid accessing out-of-bounds of the array
    for(int i = 0; i < 5; i++) {
        a[i] = i;
    }
    
    // Call the minandmax function with the array and its size
    minandmax(a, 5);

    return 0;
}

