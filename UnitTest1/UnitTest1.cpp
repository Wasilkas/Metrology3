#include "pch.h"
#include "CppUnitTest.h"
#include "../Metrology3/mymethods.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(getMaxAA)
		{
			// arrange
			int a = 3;
			int b = 2;
			int c = 1;
			int expected = 3;

			// act
			int actual = Metrology3::MyMethods::getMax(a, b, c);

			// assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(getMaxAC)
		{
			// arrange
			int a = 2;
			int b = 1;
			int c = 3;
			int expected = 3;

			// act
			int actual = Metrology3::MyMethods::getMax(a, b, c);

			// assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(getMaxBB)
		{
			// arrange
			int a = 1;
			int b = 3;
			int c = 2;
			int expected = 3;

			// act
			int actual = Metrology3::MyMethods::getMax(a, b, c);

			// assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(getMaxBC)
		{
			// arrange
			int a = 1;
			int b = 2;
			int c = 3;
			int expected = 3;

			// act
			int actual = Metrology3::MyMethods::getMax(a, b, c);

			// assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(getEvenIndexDigitsLessThan10)
		{
			// arrange
			int a = 9;
			int expected = -1;

			// act
			int actual = Metrology3::MyMethods::getEvenIndexDigitsReverse(a);

			// assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(getMinDigit)
		{
			// arrange
			int a = 12345;
			int expected = 42;

			// act
			int actual = Metrology3::MyMethods::getEvenIndexDigitsReverse(a);

			// assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(getEvenIndexDigitsMoreThan10)
		{
			// arrange
			int a = 12345;
			int expected = 42;

			// act
			int actual = Metrology3::MyMethods::getEvenIndexDigitsReverse(a);

			// assert
			Assert::AreEqual(expected, actual);
		}
	};
}
