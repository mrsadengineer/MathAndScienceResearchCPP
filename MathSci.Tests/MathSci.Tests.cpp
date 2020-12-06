#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MathSciTestsDefaults
{
	TEST_CLASS(MathSciTestsDefault)
	{
	public:
		
		TEST_METHOD(SimpleMuliplyTrueTestMethod)
		{
			int v = 2 * 3;
			Assert::AreEqual(v, 6);
		}	
		
		TEST_METHOD(SimpleMuliplyNotEqualTestMethod)
		{
			int v = 2 * 6;
			Assert::AreNotEqual(v, 6);
		}
	};

}
