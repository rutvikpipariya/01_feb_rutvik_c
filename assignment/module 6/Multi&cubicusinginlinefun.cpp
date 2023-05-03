#include <iostream>
using namespace std;
class MathOperations {
public:
    inline int multiply(int a, int b) {
        return a * b;
    }
    inline int cubic(int a) {
        return a * a * a;
    }
};
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    MathOperations math_operations;
    int mul_result = math_operations.multiply(num1, num2);
    cout << "Multiplication: " << mul_result <<endl;
    int cubic_num1 = math_operations.cubic(num1);
    int cubic_num2 = math_operations.cubic(num2);
    cout << "Cubic values: " << num1 << "^3 = " << cubic_num1 << ", " << num2 << "^3 = " << cubic_num2 <<endl;
    return 0;
}
