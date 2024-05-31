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
			int a = 3;
			int b = 5;

			int expected = 15;//ожидаемый результат

			int actual = CalcRectangleArea(a, b);

			Assert::AreEqual(expected, actual, L"Incorrect value area");

		}
		// тест на пустые строки
		TEST_METHOD(Chek_UserInput_Empty)
		{
			string str = "";
			bool expected = false;
			bool actual = User_Inpyt(str);
			Assert::AreEqual(expected, actual, L"Incorrect value area");

		}

		// тест на нецисловые значения
		TEST_METHOD(Chek_UserInput_Letter)
		{
			string str = "a";
			bool expected = false;
			bool actual = User_Inpyt(str);
			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}
		// тест на отрицательные значения
		TEST_METHOD(Chek_UserInput_NegativeValue)
		{
			string str = "-5";
			bool expected = false;
			bool actual = User_Inpyt(str);
			Assert::AreEqual(expected, actual, L"Incorrect value area");

		}
	};
}
