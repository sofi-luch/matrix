/********************************
* ФИ: Лучникова София           *
* Название: Обработка массивов  *
* Вариант: 13                   *
********************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double arithmeticMean;
	const int maxSize = 20;
	int matrix[maxSize][maxSize];
	int rowCount;
	int columnCount;
	int width = 5;
	int numberOfDigitsAfterPoint = 2;

	cout << "rowCount = ";
	cin >> rowCount;

	cout << "columnCout = ";
	cin >> columnCount;

	if (rowCount < 1 || rowCount > maxSize || columnCount < 1 || columnCount > maxSize) {
		cout << "INVALID\n";
		return 1;
	}

	cout << "Enter matrix-P elements:" << endl;
	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < columnCount; ++j) {
			cin >> matrix[i][j];
		}
	}

	for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
		for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
			if (matrix[rowIndex][columnIndex] < -1000 || matrix[rowIndex][columnIndex] > 1000) {
				cout << "INVALID\n";
				return 1;
			}
		}
	}

	cout << "Obtained matrix-P" << endl;
	for (int i = 0; i < rowCount; ++i) {
		for (int j = 0; j < columnCount; ++j) {
			cout << setw(width) << matrix[i][j];
		}
		cout << endl;
	}

	for (int j = 0; j < columnCount; ++j) {
		double sum = 0.0;
		for (int i = 0; i < rowCount; ++i) {
			sum += matrix[i][j];
		}
		arithmeticMean = sum / rowCount;

		cout << fixed << setprecision(numberOfDigitsAfterPoint);
		cout << "row number-" << j + 1 << ":  " << arithmeticMean << endl;
	}

	return 0;
}
