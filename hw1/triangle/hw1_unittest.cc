#include "hw1.h"
#include "gtest/gtest.h"

TEST(BoundaryValue, Normal)
{
	EXPECT_EQ("ISOSCELES", IsTriangle(1, 100, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 100, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 100, 100));
	EXPECT_EQ("INVALID", IsTriangle(200, 100, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 1, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 2, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 199, 100));
	EXPECT_EQ("INVALID", IsTriangle(100, 200, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 100, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 100, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 100, 199));
	EXPECT_EQ("INVALID", IsTriangle(100, 100, 200));
	EXPECT_EQ("EQUILATERAL", IsTriangle(100, 100, 100));
}

TEST(BoundaryValue, Robust)
{
	EXPECT_EQ("INVALID", IsTriangle(0, 100, 100));
	EXPECT_EQ("INVALID", IsTriangle(201, 100, 100));
	EXPECT_EQ("INVALID", IsTriangle(100, 0, 100));
	EXPECT_EQ("INVALID", IsTriangle(100, 201, 100));
	EXPECT_EQ("INVALID", IsTriangle(100, 100, 0));
	EXPECT_EQ("INVALID", IsTriangle(100, 100, 201));
}

TEST(BoundaryValue, Normal_Worst_Case)
{
	EXPECT_EQ("EQUILATERAL", IsTriangle(1, 1, 1));
	EXPECT_EQ("INVALID", IsTriangle(1, 1, 2));
	EXPECT_EQ("INVALID", IsTriangle(1, 1, 100));
	EXPECT_EQ("INVALID", IsTriangle(1, 1, 199));
	EXPECT_EQ("INVALID", IsTriangle(1, 1, 200));
	EXPECT_EQ("INVALID", IsTriangle(1, 2, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(1, 2, 2));
	EXPECT_EQ("INVALID", IsTriangle(1, 2, 100));
	EXPECT_EQ("INVALID", IsTriangle(1, 2, 199));
	EXPECT_EQ("INVALID", IsTriangle(1, 2, 200));
	EXPECT_EQ("INVALID", IsTriangle(1, 100, 1));
	EXPECT_EQ("INVALID", IsTriangle(1, 100, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(1, 100, 100));
	EXPECT_EQ("INVALID", IsTriangle(1, 100, 199));
	EXPECT_EQ("INVALID", IsTriangle(1, 100, 200));
	EXPECT_EQ("INVALID", IsTriangle(1, 199, 1));
	EXPECT_EQ("INVALID", IsTriangle(1, 199, 2));
	EXPECT_EQ("INVALID", IsTriangle(1, 199, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(1, 199, 199));
	EXPECT_EQ("INVALID", IsTriangle(1, 199, 200));
	EXPECT_EQ("INVALID", IsTriangle(1, 200, 1));
	EXPECT_EQ("INVALID", IsTriangle(1, 200, 2));
	EXPECT_EQ("INVALID", IsTriangle(1, 200, 100));
	EXPECT_EQ("INVALID", IsTriangle(1, 200, 199));
	EXPECT_EQ("ISOSCELES", IsTriangle(1, 200, 200));
	EXPECT_EQ("INVALID", IsTriangle(2, 1, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 1, 2));
	EXPECT_EQ("INVALID", IsTriangle(2, 1, 100));
	EXPECT_EQ("INVALID", IsTriangle(2, 1, 199));
	EXPECT_EQ("INVALID", IsTriangle(2, 1, 200));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 2, 1));
	EXPECT_EQ("EQUILATERAL", IsTriangle(2, 2, 2));
	EXPECT_EQ("INVALID", IsTriangle(2, 2, 100));
	EXPECT_EQ("INVALID", IsTriangle(2, 2, 199));
	EXPECT_EQ("INVALID", IsTriangle(2, 2, 200));
	EXPECT_EQ("INVALID", IsTriangle(2, 100, 1));
	EXPECT_EQ("INVALID", IsTriangle(2, 100, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 100, 100));
	EXPECT_EQ("INVALID", IsTriangle(2, 100, 199));
	EXPECT_EQ("INVALID", IsTriangle(2, 100, 200));
	EXPECT_EQ("INVALID", IsTriangle(2, 199, 1));
	EXPECT_EQ("INVALID", IsTriangle(2, 199, 2));
	EXPECT_EQ("INVALID", IsTriangle(2, 199, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 199, 199));
	EXPECT_EQ("SCALENE", IsTriangle(2, 199, 200));
	EXPECT_EQ("INVALID", IsTriangle(2, 200, 1));
	EXPECT_EQ("INVALID", IsTriangle(2, 200, 2));
	EXPECT_EQ("INVALID", IsTriangle(2, 200, 100));
	EXPECT_EQ("SCALENE", IsTriangle(2, 200, 199));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 200, 200));
	EXPECT_EQ("INVALID", IsTriangle(100, 1, 1));
	EXPECT_EQ("INVALID", IsTriangle(100, 1, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 1, 100));
	EXPECT_EQ("INVALID", IsTriangle(100, 1, 199));
	EXPECT_EQ("INVALID", IsTriangle(100, 1, 200));
	EXPECT_EQ("INVALID", IsTriangle(100, 2, 1));
	EXPECT_EQ("INVALID", IsTriangle(100, 2, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 2, 100));
	EXPECT_EQ("INVALID", IsTriangle(100, 2, 199));
	EXPECT_EQ("INVALID", IsTriangle(100, 2, 200));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 100, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 100, 2));
	EXPECT_EQ("EQUILATERAL", IsTriangle(100, 100, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 100, 199));
	EXPECT_EQ("INVALID", IsTriangle(100, 100, 200));
	EXPECT_EQ("INVALID", IsTriangle(100, 199, 1));
	EXPECT_EQ("INVALID", IsTriangle(100, 199, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 199, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 199, 199));
	EXPECT_EQ("SCALENE", IsTriangle(100, 199, 200));
	EXPECT_EQ("INVALID", IsTriangle(100, 200, 1));
	EXPECT_EQ("INVALID", IsTriangle(100, 200, 2));
	EXPECT_EQ("INVALID", IsTriangle(100, 200, 100));
	EXPECT_EQ("SCALENE", IsTriangle(100, 200, 199));
	EXPECT_EQ("ISOSCELES", IsTriangle(100, 200, 200));
	EXPECT_EQ("INVALID", IsTriangle(199, 1, 1));
	EXPECT_EQ("INVALID", IsTriangle(199, 1, 2));
	EXPECT_EQ("INVALID", IsTriangle(199, 1, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 1, 199));
	EXPECT_EQ("INVALID", IsTriangle(199, 1, 200));
	EXPECT_EQ("INVALID", IsTriangle(199, 2, 1));
	EXPECT_EQ("INVALID", IsTriangle(199, 2, 2));
	EXPECT_EQ("INVALID", IsTriangle(199, 2, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 2, 199));
	EXPECT_EQ("SCALENE", IsTriangle(199, 2, 200));
	EXPECT_EQ("INVALID", IsTriangle(199, 100, 1));
	EXPECT_EQ("INVALID", IsTriangle(199, 100, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 100, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 100, 199));
	EXPECT_EQ("SCALENE", IsTriangle(199, 100, 200));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 199, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 199, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 199, 100));
	EXPECT_EQ("EQUILATERAL", IsTriangle(199, 199, 199));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 199, 200));
	EXPECT_EQ("INVALID", IsTriangle(199, 200, 1));
	EXPECT_EQ("SCALENE", IsTriangle(199, 200, 2));
	EXPECT_EQ("SCALENE", IsTriangle(199, 200, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 200, 199));
	EXPECT_EQ("ISOSCELES", IsTriangle(199, 200, 200));
	EXPECT_EQ("INVALID", IsTriangle(200, 1, 1));
	EXPECT_EQ("INVALID", IsTriangle(200, 1, 2));
	EXPECT_EQ("INVALID", IsTriangle(200, 1, 100));
	EXPECT_EQ("INVALID", IsTriangle(200, 1, 199));
	EXPECT_EQ("ISOSCELES", IsTriangle(200, 1, 200));
	EXPECT_EQ("INVALID", IsTriangle(200, 2, 1));
	EXPECT_EQ("INVALID", IsTriangle(200, 2, 2));
	EXPECT_EQ("INVALID", IsTriangle(200, 2, 100));
	EXPECT_EQ("SCALENE", IsTriangle(200, 2, 199));
	EXPECT_EQ("ISOSCELES", IsTriangle(200, 2, 200));
	EXPECT_EQ("INVALID", IsTriangle(200, 100, 1));
	EXPECT_EQ("INVALID", IsTriangle(200, 100, 2));
	EXPECT_EQ("INVALID", IsTriangle(200, 100, 100));
	EXPECT_EQ("SCALENE", IsTriangle(200, 100, 199));
	EXPECT_EQ("ISOSCELES", IsTriangle(200, 100, 200));
	EXPECT_EQ("INVALID", IsTriangle(200, 199, 1));
	EXPECT_EQ("SCALENE", IsTriangle(200, 199, 2));
	EXPECT_EQ("SCALENE", IsTriangle(200, 199, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(200, 199, 199));
	EXPECT_EQ("ISOSCELES", IsTriangle(200, 199, 200));
	EXPECT_EQ("ISOSCELES", IsTriangle(200, 200, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(200, 200, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(200, 200, 100));
	EXPECT_EQ("ISOSCELES", IsTriangle(200, 200, 199));
	EXPECT_EQ("EQUILATERAL", IsTriangle(200, 200, 200));
}

TEST(BoundaryValue, Robust_Worst_Case)
{
	EXPECT_EQ("INVALID", IsTriangle(0, 0, 0));
	EXPECT_EQ("INVALID", IsTriangle(0, 0, 100));
	EXPECT_EQ("INVALID", IsTriangle(0, 0, 201));
	EXPECT_EQ("INVALID", IsTriangle(0, 100, 0));
	EXPECT_EQ("INVALID", IsTriangle(0, 100, 100));
	EXPECT_EQ("INVALID", IsTriangle(0, 100, 201));
	EXPECT_EQ("INVALID", IsTriangle(0, 201, 0));
	EXPECT_EQ("INVALID", IsTriangle(0, 201, 100));
	EXPECT_EQ("INVALID", IsTriangle(0, 201, 201));
	EXPECT_EQ("INVALID", IsTriangle(100, 0, 0));
	EXPECT_EQ("INVALID", IsTriangle(100, 0, 100));
	EXPECT_EQ("INVALID", IsTriangle(100, 0, 201));
	EXPECT_EQ("INVALID", IsTriangle(100, 100, 0));
	EXPECT_EQ("EQUILATERAL", IsTriangle(100, 100, 100));
	EXPECT_EQ("INVALID", IsTriangle(100, 100, 201));
	EXPECT_EQ("INVALID", IsTriangle(100, 201, 0));
	EXPECT_EQ("INVALID", IsTriangle(100, 201, 100));
	EXPECT_EQ("INVALID", IsTriangle(100, 201, 201));
	EXPECT_EQ("INVALID", IsTriangle(201, 0, 0));
	EXPECT_EQ("INVALID", IsTriangle(201, 0, 100));
	EXPECT_EQ("INVALID", IsTriangle(201, 0, 201));
	EXPECT_EQ("INVALID", IsTriangle(201, 100, 0));
	EXPECT_EQ("INVALID", IsTriangle(201, 100, 100));
	EXPECT_EQ("INVALID", IsTriangle(201, 100, 201));
	EXPECT_EQ("INVALID", IsTriangle(201, 201, 0));
	EXPECT_EQ("INVALID", IsTriangle(201, 201, 100));
	EXPECT_EQ("INVALID", IsTriangle(201, 201, 201));
}

TEST(EquivalenceClass, Weak_Normal)
{
	EXPECT_EQ("EQUILATERAL", IsTriangle(5, 5, 5));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 2, 3));
	EXPECT_EQ("SCALENE", IsTriangle(3, 4, 5));
	EXPECT_EQ("INVALID", IsTriangle(4, 1, 2));
}

TEST(EquivalenceClass, Weak_Robust)
{
	EXPECT_EQ("INVALID", IsTriangle(-1, 5, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, -1, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, 5, -1));
	EXPECT_EQ("INVALID", IsTriangle(201, 5, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, 201, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, 5, 201));
}

TEST(EquivalenceClass, Strong_Normal)
{

	EXPECT_EQ("EQUILATERAL", IsTriangle(1, 1, 1));
	EXPECT_EQ("INVALID", IsTriangle(1, 1, 2));
	EXPECT_EQ("INVALID", IsTriangle(1, 1, 3));
	EXPECT_EQ("INVALID", IsTriangle(1, 1, 4));
	EXPECT_EQ("INVALID", IsTriangle(1, 1, 5));
	EXPECT_EQ("INVALID", IsTriangle(1, 2, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(1, 2, 2));
	EXPECT_EQ("INVALID", IsTriangle(1, 2, 3));
	EXPECT_EQ("INVALID", IsTriangle(1, 2, 4));
	EXPECT_EQ("INVALID", IsTriangle(1, 2, 5));
	EXPECT_EQ("INVALID", IsTriangle(1, 3, 1));
	EXPECT_EQ("INVALID", IsTriangle(1, 3, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(1, 3, 3));
	EXPECT_EQ("INVALID", IsTriangle(1, 3, 4));
	EXPECT_EQ("INVALID", IsTriangle(1, 3, 5));
	EXPECT_EQ("INVALID", IsTriangle(1, 4, 1));
	EXPECT_EQ("INVALID", IsTriangle(1, 4, 2));
	EXPECT_EQ("INVALID", IsTriangle(1, 4, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(1, 4, 4));
	EXPECT_EQ("INVALID", IsTriangle(1, 4, 5));
	EXPECT_EQ("INVALID", IsTriangle(1, 5, 1));
	EXPECT_EQ("INVALID", IsTriangle(1, 5, 2));
	EXPECT_EQ("INVALID", IsTriangle(1, 5, 3));
	EXPECT_EQ("INVALID", IsTriangle(1, 5, 4));
	EXPECT_EQ("ISOSCELES", IsTriangle(1, 5, 5));
	EXPECT_EQ("INVALID", IsTriangle(2, 1, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 1, 2));
	EXPECT_EQ("INVALID", IsTriangle(2, 1, 3));
	EXPECT_EQ("INVALID", IsTriangle(2, 1, 4));
	EXPECT_EQ("INVALID", IsTriangle(2, 1, 5));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 2, 1));
	EXPECT_EQ("EQUILATERAL", IsTriangle(2, 2, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 2, 3));
	EXPECT_EQ("INVALID", IsTriangle(2, 2, 4));
	EXPECT_EQ("INVALID", IsTriangle(2, 2, 5));
	EXPECT_EQ("INVALID", IsTriangle(2, 3, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 3, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 3, 3));
	EXPECT_EQ("SCALENE", IsTriangle(2, 3, 4));
	EXPECT_EQ("INVALID", IsTriangle(2, 3, 5));
	EXPECT_EQ("INVALID", IsTriangle(2, 4, 1));
	EXPECT_EQ("INVALID", IsTriangle(2, 4, 2));
	EXPECT_EQ("SCALENE", IsTriangle(2, 4, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 4, 4));
	EXPECT_EQ("SCALENE", IsTriangle(2, 4, 5));
	EXPECT_EQ("INVALID", IsTriangle(2, 5, 1));
	EXPECT_EQ("INVALID", IsTriangle(2, 5, 2));
	EXPECT_EQ("INVALID", IsTriangle(2, 5, 3));
	EXPECT_EQ("SCALENE", IsTriangle(2, 5, 4));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 5, 5));
	EXPECT_EQ("INVALID", IsTriangle(3, 1, 1));
	EXPECT_EQ("INVALID", IsTriangle(3, 1, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 1, 3));
	EXPECT_EQ("INVALID", IsTriangle(3, 1, 4));
	EXPECT_EQ("INVALID", IsTriangle(3, 1, 5));
	EXPECT_EQ("INVALID", IsTriangle(3, 2, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 2, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 2, 3));
	EXPECT_EQ("SCALENE", IsTriangle(3, 2, 4));
	EXPECT_EQ("INVALID", IsTriangle(3, 2, 5));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 3, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 3, 2));
	EXPECT_EQ("EQUILATERAL", IsTriangle(3, 3, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 3, 4));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 3, 5));
	EXPECT_EQ("INVALID", IsTriangle(3, 4, 1));
	EXPECT_EQ("SCALENE", IsTriangle(3, 4, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 4, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 4, 4));
	EXPECT_EQ("SCALENE", IsTriangle(3, 4, 5));
	EXPECT_EQ("INVALID", IsTriangle(3, 5, 1));
	EXPECT_EQ("INVALID", IsTriangle(3, 5, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 5, 3));
	EXPECT_EQ("SCALENE", IsTriangle(3, 5, 4));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 5, 5));
	EXPECT_EQ("INVALID", IsTriangle(4, 1, 1));
	EXPECT_EQ("INVALID", IsTriangle(4, 1, 2));
	EXPECT_EQ("INVALID", IsTriangle(4, 1, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(4, 1, 4));
	EXPECT_EQ("INVALID", IsTriangle(4, 1, 5));
	EXPECT_EQ("INVALID", IsTriangle(4, 2, 1));
	EXPECT_EQ("INVALID", IsTriangle(4, 2, 2));
	EXPECT_EQ("SCALENE", IsTriangle(4, 2, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(4, 2, 4));
	EXPECT_EQ("SCALENE", IsTriangle(4, 2, 5));
	EXPECT_EQ("INVALID", IsTriangle(4, 3, 1));
	EXPECT_EQ("SCALENE", IsTriangle(4, 3, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(4, 3, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(4, 3, 4));
	EXPECT_EQ("SCALENE", IsTriangle(4, 3, 5));
	EXPECT_EQ("ISOSCELES", IsTriangle(4, 4, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(4, 4, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(4, 4, 3));
	EXPECT_EQ("EQUILATERAL", IsTriangle(4, 4, 4));
	EXPECT_EQ("ISOSCELES", IsTriangle(4, 4, 5));
	EXPECT_EQ("INVALID", IsTriangle(4, 5, 1));
	EXPECT_EQ("SCALENE", IsTriangle(4, 5, 2));
	EXPECT_EQ("SCALENE", IsTriangle(4, 5, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(4, 5, 4));
	EXPECT_EQ("ISOSCELES", IsTriangle(4, 5, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, 1, 1));
	EXPECT_EQ("INVALID", IsTriangle(5, 1, 2));
	EXPECT_EQ("INVALID", IsTriangle(5, 1, 3));
	EXPECT_EQ("INVALID", IsTriangle(5, 1, 4));
	EXPECT_EQ("ISOSCELES", IsTriangle(5, 1, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, 2, 1));
	EXPECT_EQ("INVALID", IsTriangle(5, 2, 2));
	EXPECT_EQ("INVALID", IsTriangle(5, 2, 3));
	EXPECT_EQ("SCALENE", IsTriangle(5, 2, 4));
	EXPECT_EQ("ISOSCELES", IsTriangle(5, 2, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, 3, 1));
	EXPECT_EQ("INVALID", IsTriangle(5, 3, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(5, 3, 3));
	EXPECT_EQ("SCALENE", IsTriangle(5, 3, 4));
	EXPECT_EQ("ISOSCELES", IsTriangle(5, 3, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, 4, 1));
	EXPECT_EQ("SCALENE", IsTriangle(5, 4, 2));
	EXPECT_EQ("SCALENE", IsTriangle(5, 4, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(5, 4, 4));
	EXPECT_EQ("ISOSCELES", IsTriangle(5, 4, 5));
	EXPECT_EQ("ISOSCELES", IsTriangle(5, 5, 1));
	EXPECT_EQ("ISOSCELES", IsTriangle(5, 5, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(5, 5, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(5, 5, 4));
	EXPECT_EQ("EQUILATERAL", IsTriangle(5, 5, 5));
}

TEST(EquivalenceClass, Strong_Robust)
{
	EXPECT_EQ("INVALID", IsTriangle(-1, -1, -1));
	EXPECT_EQ("INVALID", IsTriangle(-1, -1, 5));
	EXPECT_EQ("INVALID", IsTriangle(-1, 5, -1));
	EXPECT_EQ("INVALID", IsTriangle(-1, 5, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, -1, -1));
	EXPECT_EQ("INVALID", IsTriangle(5, -1, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, 5, -1));
	EXPECT_EQ("INVALID", IsTriangle(201, 201, 201));
	EXPECT_EQ("INVALID", IsTriangle(201, 201, 5));
	EXPECT_EQ("INVALID", IsTriangle(201, 5, 201));
	EXPECT_EQ("INVALID", IsTriangle(201, 5, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, 201, 201));
	EXPECT_EQ("INVALID", IsTriangle(5, 201, 5));
	EXPECT_EQ("INVALID", IsTriangle(5, 5, 201));
}

TEST(DecisionTable, Normal)
{
	EXPECT_EQ("INVALID", IsTriangle(4, 1, 2));
	EXPECT_EQ("INVALID", IsTriangle(1, 4, 2));
	EXPECT_EQ("INVALID", IsTriangle(1, 2, 4));
	EXPECT_EQ("EQUILATERAL", IsTriangle(5, 5, 5));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 2, 3));
	EXPECT_EQ("ISOSCELES", IsTriangle(2, 3, 2));
	EXPECT_EQ("ISOSCELES", IsTriangle(3, 2, 2));
	EXPECT_EQ("SCALENE", IsTriangle(3, 4, 5));
}
