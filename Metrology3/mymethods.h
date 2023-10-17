#include <vector>
#pragma once

using namespace std;

namespace Metrology3
{
	class MyMethods
	{
    public:
        static int getMax(int a, int b, int c);

        static int getEvenIndexDigitsReverse(int a);

        static int getMinDigit(int a);

        static double getLowerTriangleSum(vector<vector<double>> arr);
	};
}