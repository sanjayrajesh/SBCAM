#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
    std::cout << "Inside factorial function\n";
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Recursive function to calculate Fibonacci series
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Recursive function to calculate power
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int recursiveFuncWith2FuncReturns(int n) {
    if (n <= 1) {
        return 1;
    } else if (n % 2 == 0) {
        return recursiveFuncWith2FuncReturns(n / 2);  // Recursive return
    } else {
        return recursiveFuncWith2FuncReturns(n - 1);  // Recursive return
    }
}

int main() {
    std::cout << "Inside main function\n";
    int n = 5;
    std::cout << "Factorial of " << n << ": " << factorial(n) << std::endl;
    std::cout << "Fibonacci sequence up to " << n << " terms: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;
    int base = 2, exponent = 5;
    std::cout << base << " raised to the power of " << exponent << ": " << power(base, exponent) << std::endl;

    int result = recursiveFuncWith2FuncReturns(10);
    std::cout << "Result: " << result << std::endl;
    
    int result1 = recursiveFuncWith2FuncReturns(20);
    std::cout << "Result1: " << result1 << std::endl;
    return 0;
}
