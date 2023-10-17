#include "mymethods.h"

namespace Metrology3
{
    int MyMethods::getMax(int a, int b, int c) {
        int max = a;

        if (b > max) {
            max = b;
        }
        if (c > max) {
            max = c;
        }

        return max;
    }

    int MyMethods::getEvenIndexDigitsReverse(int a) {
        int result = 0;
        a = abs(a);

        if (a < 10) {
            return -1;
        }

        a /= 10;

        while (a > 0) {
            result = result * 10 + a % 10;
            a /= 100;
        }

        return result;
    }

    int MyMethods::getMinDigit(int a) {
        int minDigit = 9;
        a = abs(a);

        while (a > 0) {
            if (a % 10 < minDigit) {
                minDigit = a % 10;
            }
            a /= 10;
        }
        return minDigit;
    }

    double MyMethods::getLowerTriangleSum(vector<vector<double>> arr) {
        double sum = 0;
        auto n = arr.size();

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (i % 2 != 0) {
                    sum += arr[i][j];
                }
            }
        }
        return sum;
    }
}