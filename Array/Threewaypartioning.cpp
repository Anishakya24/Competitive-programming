#include <iostream>
#include<vector> 
using namespace std;

vector<int> threeWayPartition(vector<int> &arr, int n, int a, int b) {
    // Vectors to store the partitions
    vector<int> ans1; // Elements less than 'a'
    vector<int> ans2; // Elements between 'a' and 'b' (inclusive)
    vector<int> ans3; // Elements greater than 'b'

    // Traverse the array and classify elements into the three partitions
    for (int i = 0; i < n; i++) {
        if (arr[i] < a) {
            ans1.push_back(arr[i]);
        } else if (arr[i] <= b) { // Include elements equal to b in ans2
            ans2.push_back(arr[i]);
        } else {
            ans3.push_back(arr[i]);
        }
    }

    // Final result vector
    vector<int> ans;
    
    // Insert elements from each partition into the final vector
    ans.insert(ans.end(), ans1.begin(), ans1.end()); // Elements less than 'a'
    ans.insert(ans.end(), ans2.begin(), ans2.end()); // Elements between 'a' and 'b'
    ans.insert(ans.end(), ans3.begin(), ans3.end()); // Elements greater than 'b'
   
    return ans; // Return the partitioned array
}

int main() {
    
    vector<int> arr = {1, 4, 2, 10, 3, 7, 5, 6};
    int a = 3, b = 6;
    
    
    vector<int> result = threeWayPartition(arr, arr.size(), a, b);
    
    
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
