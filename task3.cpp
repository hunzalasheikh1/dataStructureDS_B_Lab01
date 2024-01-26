#include <iostream>

using namespace std;

void inputMatrix(int A[][100], int m, int n) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];
}

void displayMatrix(int A[][100], int m, int n) {
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << A[i][j] << " ";
        cout << endl;
    }
}

int sumOfElements(int A[][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            sum += A[i][j];
    return sum;
}

void displayRowSum(int A[][100], int m, int n) {
    cout << "Row-wise sum:" << endl;
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j)
            rowSum += A[i][j];
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
}

void displayColSum(int A[][100], int m, int n) {
    cout << "Column-wise sum:" << endl;
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i)
            colSum += A[i][j];
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

void transposeMatrix(int A[][100], int m, int n) {
    std::cout << "Transpose of the matrix:" << endl;
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i)
            cout << A[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int A[100][100];

    int choice;
    do {
        cout << "\nMenu:\n1. Input Matrix\n2. Display Matrix\n3. Sum of Elements\n";
        cout << "4. Display Row-wise Sum\n5. Display Column-wise Sum\n6. Transpose Matrix\n";
        cout << "0. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputMatrix(A, m, n);
                break;
            case 2:
                displayMatrix(A, m, n);
                break;
            case 3:
                cout << "Sum of elements: " << sumOfElements(A, m, n) << endl;
                break;
            case 4:
                displayRowSum(A, m, n);
                break;
            case 5:
                displayColSum(A, m, n);
                break;
            case 6:
                transposeMatrix(A, m, n);
                break;
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 0);

    return 0;
}
