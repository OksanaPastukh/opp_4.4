#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_opp_4.2/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp44
{
	TEST_CLASS(UnitTestopp44)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			Complex a(2, 5);
			c = a.GetRe();
			Assert::AreEqual(c, 2.0);
		}
	};
}
