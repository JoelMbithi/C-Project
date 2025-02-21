//Question 2
// Joel Mbithi
// EB3/61549/22
// C+


#include <iostream>
using namespace std;
int main() {
    int Number, First_Number = 0, Second_Number = 1, Next_Number;
    cout << "Enter number of your Choice : ";
    cin >> Number;

    for (int i = 0; i < Number; i++) {
        cout << First_Number << " "<<endl;
        Next_Number = First_Number + Second_Number;
        First_Number = Second_Number;
        Second_Number = Next_Number;
    }

    return 0;
}