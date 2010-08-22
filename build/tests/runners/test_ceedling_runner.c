/* AUTOGENERATED FILE. DO NOT EDIT. */
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"
#include "mock_bar.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

char MessageBuffer[50];

extern void setUp(void);
extern void tearDown(void);

extern void Testassert_false(void);
extern void test_assert_true(void);
extern void test_1(void);
extern void test_2(void);
extern void test_3(void);

static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_bar_Init();
}

static void CMock_Verify(void)
{
  mock_bar_Verify();
}

static void CMock_Destroy(void)
{
  mock_bar_Destroy();
}

void CMock_VerifyAndReset(void)
{
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
}


static void runTest(UnityTestFunction test)
{
  if (TEST_PROTECT())
  {
    CEXCEPTION_T e;
    Try {
      CMock_Init();
      setUp();
      test();
      CMock_Verify();
    } Catch(e) { TEST_FAIL_MESSAGE("Unhandled Exception!"); }
  }
  CMock_Destroy();
  if (TEST_PROTECT())
  {
    tearDown();
  }
}

int main(void)
{
  UnityBegin();
  Unity.TestFile = "test_ceedling.c";

  // RUN_TEST calls runTest
  RUN_TEST(Testassert_false, 12);
  RUN_TEST(test_assert_true, 18);
  RUN_TEST(test_1, 25);
  RUN_TEST(test_2, 30);
  RUN_TEST(test_3, 35);

  UnityEnd();
  return 0;
}

