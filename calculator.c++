#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double a, double b);
double squareRoot(double a);
int main()
{
    int choice;
    double num1, num2, result;
    cout << "=====================================\n";
    cout << "        SIMPLE CALCULATOR IN C++      \n";
    cout << "=====================================\n";
    do
    {
        cout << "\nChoose an operation to perform:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Power\n";
        cout << "7. Square Root\n";
        cout << "8. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "wrong number! Please enter a number.\n";
            continue;
        }
        switch (choice)
        {
            case 1:
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                result = add(num1, num2);
                cout << "Result = " << result << endl;
                break;
            case 2:
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                result = subtract(num1, num2);
                cout << "Result = " << result << endl;
                break;
            case 3:
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                result = multiply(num1, num2);
                cout << "Result = " << result << endl;
                break;
            case 4:
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                if (num2 == 0)
                {
                    cout << "Error! Division by zero is not allowed.\n";
                }
                else
                {
                    result = divide(num1, num2);
                    cout << "Result = " << result << endl;
                }
                break;

            case 5:
            {
                int a, b;
                cout << "Enter the first integer: ";
                cin >> a;
                cout << "Enter the second integer: ";
                cin >> b;
                if (b == 0)
                {
                    cout << "Error! Modulus by zero is not allowed.\n";
                }
                else
                {
                    cout << "Result = " << a % b << endl;
                }
                break;
            }
            case 6:
                cout << "Enter the base number: ";
                cin >> num1;
                cout << "Enter the exponent: ";
                cin >> num2;
                result = power(num1, num2);
                cout << "Result = " << result << endl;
                break;
            case 7:
                cout << "Enter the number: ";
                cin >> num1;
                if (num1 < 0)
                {
                    cout << "Error! Square root of a negative number is not possible.\n";
                }
                else
                {
                    result = squareRoot(num1);
                    cout << "Result = " << result << endl;
                }
                break;
            case 8:
                cout << "\nThank you for using the calculator!\n";
                break;
            default:
                cout << "Wrong choice! Please try again.\n";
        }

    } while (choice != 8);
    return 0;
}
double add(double a, double b)
{
    return a + b;
}
double subtract(double a, double b)
{
    return a - b;
}
double multiply(double a, double b)
{
    return a * b;
}
double divide(double a, double b)
{
    return a / b;
}
double power(double a, double b)
{
    return pow(a, b);
}
double squareRoot(double a)
{
    return sqrt(a);
}