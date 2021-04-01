#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3.A/LongLong.h"
#include "../3.3.A/LongLong.cpp"
#include "../3.3.A/LongLong_Public.h"
#include "../3.3.A/LongLong_Public.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong_Public A(5, 5), B(8, 8);
			Assert::AreEqual(A < B, true);

		}
	};
}
