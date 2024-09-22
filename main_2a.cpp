#include <iostream>
using namespace std;

// (i) Function example: Add two numbers
int add(int a, int b) {
    return a + b;
}

// (ii) Single-dimensional array and loop example
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// (ii) Multi-dimensional array example
void printMatrix(int matrix[2][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// (iii) Loop example: Print numbers from 1 to 5
void loopExample() {
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration " << i << endl;
    }
}

// (iv) Control statement example: Check if number is positive or negative
void checkNumber(int num) {
    if (num > 0) {
        cout << "Positive number" << endl;
    } else if (num < 0) {
        cout << "Negative number" << endl;
    } else {
        cout << "Zero" << endl;
    }
}

int main() {
    // Function
    cout << "Sum of 3 and 5: " << add(3, 5) << endl;

    // Single-dimensional array
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Array elements: ";
    printArray(arr, 5);

    // Multi-dimensional array
    int matrix[2][2] = {{1, 2}, {3, 4}};
    cout << "Matrix elements: " << endl;
    printMatrix(matrix, 2, 2);

    // Loop
    cout << "Loop example:" << endl;
    loopExample();

    // Control statement
    int number;
    cout << "Enter a number: ";
    cin >> number;
    checkNumber(number);

    return 0;
}
