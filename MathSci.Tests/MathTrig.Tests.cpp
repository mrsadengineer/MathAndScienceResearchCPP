#include "pch.h"
#include "CppUnitTest.h"



//#include <iomanip>
#include "../DoMathInteractiveConsoleApp/Trigonometry.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MathTrigIntegratingTests
{
	TEST_CLASS(MathTriTests)
	{
	public:
		TEST_METHOD(trig_returnThetaFromRightAnglePrecisionThousandth)
		{

			double expected = 36.869898;
			double retp = returnAngleThetaOfARightTriange(0.6);
			///double param, result;
			//param = 0.6;
			//result = asin(param) * 180.0 / PI;
			Assert::AreEqual(expected, retp, 0.001);

		}
		TEST_METHOD(trig_returnThetaFromRightAnglePrecisiontesting)
		{
			double expected = 36.869898;
			double retp = returnAngleThetaOfARightTriange(0.6);
			Assert::AreEqual(expected, retp, 0.000001);//6
		
		}

		TEST_METHOD(faillingtrig_returnThetaFromRightAnglePrecisiontesting)
		{
		double expected = 36.869898;
			double retp = returnAngleThetaOfARightTriange(0.6);
			Assert::AreNotEqual(expected, retp, 0.0000001);//7
		}
		TEST_METHOD(simpletrigTestMethod)
		{
			//long double expected = 36.869898L;
			//solveForAngleThetaOfARightTriangle()
			double expected = 36.869898;
			///setprecision(12) << 
			//std::setprecision(12);// << expected;
			float retp = returnAngleThetaOfARightTriange(0.6);
			//int v = 2 * 3;
			//Assert::AreEqual(v, 6);
			double param, result;

			param = 0.6;
			result = asin(param) * 180.0 / PI;
			Assert::AreEqual(expected, result,0.001);
	
		}
		TEST_METHOD(simpletruetest)
		{
			int v = 2 * 3;
			Assert::AreEqual(v, 6);
		}
	};

}
