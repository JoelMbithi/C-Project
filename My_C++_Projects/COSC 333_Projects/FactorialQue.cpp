//Question 1
// Joel Mbithi
// EB3/61549/22
// C++

#include <iostream>
using namespace std;
int main() {
    int Number, factorial = 1;
    cout << "Enter  Number of your Choice : ";
    cin >> Number;

    for (int i = 1; i <= Number; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << Number << " is " << factorial << endl;
    return 0;
}