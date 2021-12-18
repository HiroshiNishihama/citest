#ifdef TEST

#include "unity.h"

#include "hoge.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_hoge_return_value_check(void)
{
    TEST_ASSERT_EQUAL(5, hoge(10));
}
#endif // TEST
