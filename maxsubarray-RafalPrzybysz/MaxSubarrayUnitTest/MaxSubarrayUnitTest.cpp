#include <vector>
#include "CppUnitTest.h"
#include "../MaxSubarrayLib/MaxSubarray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MaxSubarrayUnitTest
{
	TEST_CLASS(MaxSubarrayUnitTest)
	{
	public:
		
		TEST_METHOD(Empty)
		{
			std::vector<int> v = {};
			Assert::AreEqual(0, maxSubarray(v.begin(), v.end()));
		}

		TEST_METHOD(OneElement)
		{
			std::vector<int> v = { 3 };
			Assert::AreEqual(3, maxSubarray(v.begin(), v.end()));
		}
		TEST_METHOD(test1)
		{
			std::vector<int> v = { -1, 3, 4, -5, 9, -2 };
			Assert::AreEqual(11, maxSubarray(v.begin(), v.end()));
		}
		TEST_METHOD(test2)
		{
			std::vector<int> v = { 3, 4, -2, 3, 1 };
			Assert::AreEqual(9, maxSubarray(v.begin(), v.end()));
		}
		TEST_METHOD(test3)
		{
			std::vector<int> v = { -12, 3, 32, -4 };
			Assert::AreEqual(35, maxSubarray(v.begin(), v.end()));
		}
		TEST_METHOD(test4)
		{
			std::vector<int> v = { 4, -10, 3, 29, 3, 12, -5, 4 };
			Assert::AreEqual(47, maxSubarray(v.begin(), v.end()));
		}
		TEST_METHOD(test5)
		{
			std::vector<int> v = { 12, -10, 3, 29, 3, 12, -5, 4 };
			Assert::AreEqual(49, maxSubarray(v.begin(), v.end()));
		}
	};
}
