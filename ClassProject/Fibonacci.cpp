// Joel Mbithi
// EB3/61549/22

#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

// Recursive Fibonacci with memoization
int fibonacci(int Number, int stored_value[]) {
    if (Number <= 1)
        return Number;

    // Return stored value if already calculated
    if (stored_value[Number] != -1)
        return stored_value[Number];

    // Compute and store the Fibonacci value
    stored_value[Number] = fibonacci(Number - 1, stored_value) + fibonacci(Number - 2, stored_value);
    return stored_value[Number];
}

int main() {
    int Number = 10;
    int stored_value[Number + 1];

    // Initialize stored_value array with -1
    for (int i = 0; i <= Number; i++)
        stored_value[i] = -1;

    // Start time
    auto start = steady_clock::now();
    int result = fibonacci(Number, stored_value);
    auto stop = steady_clock::now();  // Stop time

    auto duration = duration_cast<microseconds>(stop - start);  // Calculate execution time

    cout << "Fibonacci(" << Number << ") = " << result << endl;
    cout << "Execution Time: " << duration.count() << " microseconds" << endl;

    return 0;
}
