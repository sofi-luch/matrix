/********************************
* ФИ: Лучникова София           *
* Название: Обработка массивов  *
* Вариант: 13                   *
********************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  constexpr int maxSize = 20;
  double arithmeticMean, sum;
  int rowCount, columnCount;
  int matrix[maxSize][maxSize];
  int widthForOutput = 5;
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
  for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
	for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
	  cin >> matrix[rowIndex][columnIndex];
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
  for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
	for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
	  cout << setw(widthForOutput) << matrix[rowIndex][columnIndex];
	}
	cout << "\n";
  }

  for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
	sum = 0.0;
	for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
	  sum += matrix[rowIndex][columnIndex];
	}
    arithmeticMean = sum / columnCount;

	cout << fixed << setprecision(numberOfDigitsAfterPoint);
	cout << "column number-" << columnIndex + 1 << ":  " << arithmeticMean << endl;
  }

  return 0;
}
