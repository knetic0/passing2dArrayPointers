#include <iostream>

using namespace std;

void yazdir(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j];
        }
    }
}

int main () {

    int rows, columns;
    cout << "Rows, columns :";
    cin >> rows >> columns;

    int **table = new int*[rows];

    for (int i =0; i < rows; i++) {
        table[i] = new int[columns];
    }
    int deger;
    for (int i = 0; i < rows; i++){
        for (int j =0; j < columns; j++){
            cin >> deger;
            table[i][j] = deger;
        }
    }

    yazdir(table, rows, columns);

    return 0;
}