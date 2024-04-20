#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;

    // Check if the number is divisible by any odd number less than its square root
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to calculate factorial
int calculateFactorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
        return -1; // Indicates error
    }

    // Compute factorial using recursion
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calculateFactorial(n - 1);
}

// Function to generate Fibonacci series
void generateFibonacciSeries(int n) {
    int a = 0, b = 1, sum;
    
    // Generate Fibonacci series up to n terms
    cout << "Fibonacci Series up to " << n << " terms: ";
    cout << a << " " << b << " ";
    for (int i = 3; i <= n; ++i) {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    cout << endl;
}

int main() {
    int choice;
    cout << "Select an option:\n";
    cout << "1. Check prime number\n";
    cout << "2. Calculate factorial\n";
    cout << "3. Generate Fibonacci series\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            int num;
            cout << "Enter a number to check prime: ";
            cin >> num;
            if (isPrime(num))
                cout << num << " is a prime number.\n";
            else
                cout << num << " is not a prime number.\n";
            break;
        }
        case 2: {
            int num;
            cout << "Enter a number to calculate factorial: ";
            cin >> num;
            int fact = calculateFactorial(num);
            if (fact != -1)
                cout << "Factorial of " << num << " is " << fact << endl;
            break;
        }
        case 3: {
            int terms;
            cout << "Enter the number of terms for Fibonacci series: ";
            cin >> terms;
            if (terms > 0)
                generateFibonacciSeries(terms);
            else
                cout << "Number of terms should be greater than zero.\n";
            break;
        }
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
