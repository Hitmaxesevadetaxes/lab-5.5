#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 11;
			double result = 1 + count1(n & (n - 1));
			double expected = 3;
			Assert::AreEqual(expected, result, 0.001);
		}
	};
}
