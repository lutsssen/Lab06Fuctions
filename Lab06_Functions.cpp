﻿/***************************************
*Автор: Луцаев Владислав Николаевич    *
*Функции                               *
*Группа: ПИ-261                        *
*Вариант: 14                           *
***************************************/

#include <iostream>
#include <vector>

using namespace std;

bool averagePositive(const vector<double>& values, double& average) {
  double sum = 0;
  int positiveCount = 0;

  for (int elementIndex = 0; elementIndex < values.size(); elementIndex++) {
    if (values[elementIndex] > 0) {
      sum += values[elementIndex];
      positiveCount++;
    }
  }

  if (positiveCount == 0) {
    return false;
  }

  average = sum / positiveCount;
  return true;
}

int main() {
  int k;
  int n;

  cout << "Enter size of array R: ";
  cin >> k;

  if (k < 1 || k > 100) {
    cout << "INVALID" << endl;
    return 0;
  }

  vector<double> R(k);

  cout << "Enter elements of R:" << endl;

  for (int elementIndex = 0; elementIndex < k; elementIndex++) {
    cin >> R[elementIndex];

    if (R[elementIndex] < -1000 || R[elementIndex] > 1000) {
      cout << "INVALID" << endl;
      return 0;
    }
  }

  cout << "Enter size of array L: ";
  cin >> n;

  if (n < 1 || n > 100) {
    cout << "INVALID" << endl;
    return 0;
  }

  vector<double> L(n);

  cout << "Enter elements of L:" << endl;

  for (int elementIndex = 0; elementIndex < n; elementIndex++) {
    cin >> L[elementIndex];

    if (L[elementIndex] < -1000 || L[elementIndex] > 1000) {
      cout << "INVALID" << endl;
      return 0;
    }
  }

  double averageR;
  double averageL;

  if (averagePositive(R, averageR)) {
    cout << "Average of positive elements in R: "
    << averageR << endl;
  } else {
    cout << "No positive elements in R" << endl;
  }

  if (averagePositive(L, averageL)) {
    cout << "Average of positive elements in L: "
    << averageL << endl;
  } else {
    cout << "No positive elements in L" << endl;
  }

  return 0;
}