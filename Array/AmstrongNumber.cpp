#include <iostream>
using namespace std;

bool isArmstrong(int num) {
    int k = to_string(num).length(); 
    int newnum = num; 
    int sum = 0;
    
    // Calculate the sum of the digits raised to the power k
    while (num > 0) {
        int ld = num % 10; // Get the last digit
        sum += pow(ld, k); // Add the last digit raised to power k
        num = num / 10; // Remove the last digit
    }
    
   
    return sum == newnum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    
    return 0;
}