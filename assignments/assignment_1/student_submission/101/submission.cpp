#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to calculate factorial
int factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
        return -1; // Indicates error
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to generate Fibonacci series
void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci Series up to " << n << " terms: ";
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
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
            int fact = factorial(num);
            if (fact != -1)
                cout << "Factorial of " << num << " is " << fact << endl;
            break;
        }
        case 3: {
            int terms;
            cout << "Enter the number of terms for Fibonacci series: ";
            cin >> terms;
            if (terms > 0)
                fibonacci(terms);
            else
                cout << "Number of terms should be greater than zero.\n";
            break;
        }
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
