/**
 * @file unit_test.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"
#include "header.h"
void setUp()
{

}
void teardown()
{

}
void test_main(void)
{
    char playerScore, compScore;
    TEST_ASSERT_EQUAL(greater(playerScore,compScore),1);
    TEST_ASSERT_EQUAL(greater(playerScore,compScore),-1);
    TEST_ASSERT_EQUAL(greater(playerScore,compScore),0);
}
int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_main);

    return UNITY_END();
}
