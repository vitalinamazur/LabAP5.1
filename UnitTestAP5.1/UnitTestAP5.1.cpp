#include "pch.h"
#include "CppUnitTest.h"
#include "../LabAP5.1/LabAP5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAP51
{
	TEST_CLASS(UnitTestAP51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);
		}
	};
}
