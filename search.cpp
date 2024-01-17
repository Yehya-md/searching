#include <iostream>
using namespace std;

//linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}

//binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  
        } else if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    return -1;
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers in ascending order: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the number to search: ";
    cin >> target;
    int linearIndex = linearSearch(arr, SIZE, target);
    if (linearIndex != -1) {
        cout << target << " found at index " << linearIndex << " using linear search." << endl;
    } else {
        cout << target << " not found using linear search." << endl;
    }

    //binary search
    int binaryIndex = binarySearch(arr, SIZE, target);
    if (binaryIndex != -1) {
        cout << target << " found at index " << binaryIndex << " using binary search." << endl;
    } else {
        cout << target << " not found using binary search." << endl;
    }

    return 0;
}