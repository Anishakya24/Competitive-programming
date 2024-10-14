#include<iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    int max_num = INT_MIN;
    int second_max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max_num) {
            second_max = max_num;
            max_num = arr[i];
        } else if (arr[i] > second_max && arr[i] != max_num) {
            second_max = arr[i];
        }
    }
    return second_max;
}

int main() {
    int arr[] = {10, 30, 20, 50, 40};
    int size = sizeof(arr) / sizeof(arr[0]);  
    int secondLargest = findSecondLargest(arr, size);
    cout << "The second largest element in the array is: " << secondLargest << endl;
    return 0;
}
