#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 6.3-1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[6] = { 1, 1, 1, 1, 1, 1 };

			int S = Sum(t, 6);

			Assert::AreEqual(S, 6);
		}
	};
}
