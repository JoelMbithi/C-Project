// Joel Mbithi
// EB3/61549/22

#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

// Recursive Factorial with memoization
long long factorial(int Number, long long stored_value[]) {
    if (Number <= 1)
        return 1;

    // Return stored value if already calculated
    if (stored_value[Number] != -1)
        return stored_value[Number];

    // Compute and store the factorial value
    stored_value[Number] = Number * factorial(Number - 1, stored_value);
    return stored_value[Number];
}

int main() {
    int Number;

    // Get user input
    cout << "Enter a number to calculate its factorial: ";
    cin >> Number;

    if (Number < 0) {
        cout << "Factorial of negative numbers is undefined." << endl;
        return 1;
    }

    long long stored_value[Number + 1]; 

    // Initialize stored_value array with -1
    for (int i = 0; i <= Number; i++)
        stored_value[i] = -1;

// Calculate execution time
    auto start = steady_clock::now();
    long long result = factorial(Number, stored_value);
    auto stop = steady_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Factorial(" << Number << ") = " << result << endl;
    cout << "Execution Time: " << duration.count() << " microseconds" << endl;

    return 0;
}
