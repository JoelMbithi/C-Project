# C-Project
# Factorial and Fibonacci Calculator

## Author
Joel Mbithi  
EB3/61549/22

## Description
This C++ program calculates the factorial and Fibonacci sequence of a given number using recursion with memoization to optimize performance. It also measures execution time using the `chrono` library.

## Features
- Computes the factorial of a user-inputted number.
- Computes the Fibonacci sequence of a predefined number.
- Uses memoization to store previously computed values for efficiency.
- Measures execution time in microseconds.

## Requirements
- C++ Compiler (e.g., g++)

## Compilation
To compile the program, use the following command:
```bash
 g++ Factorial.cpp -o Factorial
 g++ Fibonacci.cpp -o Fibonacci
```

## Usage
To run the factorial program:
```bash
 ./Factorial
```
Then enter a number when prompted.

To run the Fibonacci program:
```bash
 ./Fibonacci
```
The Fibonacci sequence is pre-set to compute for `Number = 10`, but you can modify it in the source code.

## Example Output
### Factorial
```
Enter a number to calculate its factorial: 5
Factorial(5) = 120
Execution Time: 3 microseconds
```

### Fibonacci
```
Fibonacci(10) = 55
Execution Time: 5 microseconds
```




