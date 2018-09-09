#include <ctest.h>
#include <../src/Calc.h>

CTEST(addition_two_positive_check, Addition)
{
    int result = addition(5, 5);
    
    int expected = 10;
    ASSERT_EQUAL(expected, result);
}

CTEST(addition_positive_and_negative_check, Addition)
{
	int result = addition(-5, 5);

	int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(subtraction_two_positive_check, Subtraction)
{
	int result = subtraction(5, 5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(subtraction_positive_and_negative_check, Subtraction)
{
	int result = subtractionn(-5, 5);

	int expected = -10;
	ASSERT_EQUAL(expected, result);
}

CTEST(multiplication_two_positive_check, Multiplication)
{
	int result = multiplication(5, 5);

	int expected = 25;
	ASSERT_EQUAL(expected, result);
}

CTEST(multiplication_positive_and_negative_check, Multiplication)
{
	int result = multiplication(-5, 5);

	int expected = -25;
	ASSERT_EQUAL(expected, result);
}

CTEST(divide_two_positive_check, Divide)
{
	int result = divide(5, 5);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(divide_positive_and_negative_check, Divide)
{
	int result = divide(-5, 5);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(divide_zero_check, Divide)
{
	int result = divide(5, 0);

	int expected = 5;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_two_positive_check, Exponentation)
{
	int result = exponentation(2, 5);

	int expected = 32;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_positive_by_negative_check, Exponentation)
{
	int result = exponentation(5, -5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_positive_by_negative_check, Exponentation)
{
	int result = exponentation(1, -5);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_negative_by_positive_check, Exponentation)
{
	int result = exponentation(-5, 2);

	int expected = 25;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_negative_by_positive_check, Exponentation)
{
	int result = exponentation(-1, 3);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_two_negative_check, Exponentation)
{
	int result = exponentation(-5, -5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_two_negative_check, Exponentation)
{
	int result = exponentation(-1, -5);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_by_zero_check, Exponentation)
{
	int result = exponentation(5, 0);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}
