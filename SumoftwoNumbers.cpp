/*Problem statement
You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, 
where each array element represents a digit. You need to find the sum of these two numbers and return this sum in
the form of an array.

Note:

1. The length of each array is greater than zero.

2. The first index of each array is the most significant digit of the number. For example, if the array A[] = {4, 5, 1}, 
then the integer represented by this array is 451 and array B[] = {3, 4, 5} so the sum will be 451 + 345 = 796. 
So you need to return {7, 9, 6}.

3. Both numbers do not have any leading zeros in them. And subsequently, the sum should not contain any leading zeros.*/


#include <iostream>
#include<vector> 
using namespace std;

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int sum1 = 0, sum2 = 0;
    vector<int> ans;

    
    for(int i = 0; i < n; i++) {
        sum1 = sum1 * 10 + a[i];
    }

  
    for(int j = 0; j < m; j++) {
        sum2 = sum2 * 10 + b[j];
    }

    
    int sum = sum1 + sum2;

    
    if(sum == 0) {
        ans.push_back(0);
        return ans;
    }

    
    while(sum > 0) {
        int rem = sum % 10;
        ans.push_back(rem);
        sum = sum / 10;
    }

    
    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    // Example usage
    vector<int> a = {1, 2, 3}; // Represents the number 123
    vector<int> b = {9, 7};    // Represents the number 97

    // Call the function to find the sum of the arrays
    vector<int> result = findArraySum(a, a.size(), b, b.size());

    // Print the result
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

