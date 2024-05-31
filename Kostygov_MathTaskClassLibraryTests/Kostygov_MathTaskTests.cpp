#include "pch.h"
#include "CppUnitTest.h"
#include "../Kostygov_MathTask/Kostygov_MathTask.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KostygovMathTaskClassLibraryTests
{
	TEST_CLASS(KostygovMathTaskTests)
	{
	public:
		
		TEST_METHOD(TestMetRectangleArea_3and5_15returnedhod1)
		{
			int a;
			int b;

			int expected = 15;//ожидаемый результат

			int actual = CalcRectangleArea(a, b);

			Assert::AreEqual(expected, actual, L"Incorrect value area");

		}
	};
}
