#include "unity.h"
#include <project.h>

#define PROJECT_NAME    "R Calculator"
void setUp()
{
}
void tearDown()
{
}

void test_Factorial(void)
{
  TEST_ASSERT_EQUAL(120, Project(5));
  TEST_ASSERT_EQUAL(720, Project(6));
}
void test_Zero_One(void)
{
  TEST_ASSERT_EQUAL(1, Project(0));
  TEST_ASSERT_EQUAL(1, Project(1));
}
void test_Negative(void)
{
  TEST_ASSERT_EQUAL(-1, Project(-5));
  TEST_ASSERT_EQUAL(-1, Project(-10));
}
int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_Zero_One);
  RUN_TEST(test_Negative);
  return UNITY_END();
}