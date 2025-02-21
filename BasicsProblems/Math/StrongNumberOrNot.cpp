#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 145;
    int temp = num;
    int sum = 0;

    // Compute sum of factorials of digits
    while (temp > 0) {
        int root = temp % 10; // Extract last digit
        int fact = 1;

        // Calculate factorial of the digit
        for (int i = 1; i <= root; i++) {
            fact *= i;
        }

        sum += fact; // Add factorial to sum
        temp /= 10;  // Remove last digit
    }

    cout << "Factorial Sum is: " << sum << endl;

    // Check if Strong Number
    if (num == sum) {
        cout << "It's a Strong Number";
    } else {
        cout << "It's not a Strong Number";
    }

    return 0;
}
