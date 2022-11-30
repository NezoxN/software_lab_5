#include "pch.h"
#include "CppUnitTest.h"
#include "F:\University\Base_Homework\1 Курс\1 Семестр\Інженерія ПЗ\Лаби\ЛБ 3\Lab_3\Soft_Lab_3\Soft_Lab_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest_true)
	{
	public:

		TEST_METHOD(TestMethod1_true)
		{
			int n = 3;
			int x = 1;
			int expected = 240;

			int actual = calc(x, n);

			Assert::AreEqual(expected, actual);
		}

	public:

		TEST_METHOD(TestMethod2_true)
		{
			double n = 3;
			double x = 2;
			double expected = 420;

			double actual = calc(x, n);

			Assert::AreEqual(expected, actual);
		}

	public:

		TEST_METHOD(TestMethod3_true)
		{
			double n = 3;
			double x = 3;
			double expected = 684;

			double actual = calc(x, n);

			Assert::AreEqual(expected, actual);
		}

	public:

		TEST_METHOD(TestMethod4_true)
		{
			double n = 4;
			double x = -1;
			double expected = 4;

			double actual = calc(x, n);

			Assert::AreEqual(expected, actual);
		}

	public:

		TEST_METHOD(TestMethod5_true)
		{
			double n = 4;
			double x = 5;
			double expected = 73704;

			double actual = calc(x, n);

			Assert::AreEqual(expected, actual);
		}
	};
	TEST_CLASS(checkValidParams_Tests_true)
	{
	public:

		TEST_METHOD(TestMethod6_true)
		{
			double h = 2;

			try
			{
				checkValidParams_h(h);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

	public:
		TEST_METHOD(TestMethod7_true)
		{
			double h = -5;

			try
			{
				checkValidParams_h(h);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}

	public:
		TEST_METHOD(TestMethod8_true)
		{
			double n = 1;

			try
			{
				checkValidParams_n(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};
	TEST_CLASS(UnitTest_false) {

	public:

		TEST_METHOD(TestMethod9_false)
		{
			double n = 6;
			double x = 2;
			double expected = 18984;

			double actual = calc(x, n);

			Assert::AreEqual(expected, actual);
		}
	public:

		TEST_METHOD(TestMethod10_false)
		{
			double n = 4;
			double x = 1;
			double expected = 84;

			double actual = calc(x, n);

			Assert::AreEqual(expected, actual);
		}
	public:

		TEST_METHOD(TestMethod11_false)
		{
			double n = 1;
			double x = 2;
			double expected = 1989;

			double actual = calc(x, n);

			Assert::AreEqual(expected, actual);
		}

	};
	TEST_CLASS(checkValidParams_Tests_false) {
	public:
		TEST_METHOD(TestMethod12_false)
		{
			double h = 12;

			try
			{
				checkValidParams_h(h);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}

	public:
		TEST_METHOD(TestMethod13_false)
		{
			double n = 3;

			try
			{
				checkValidParams_n(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	};
}