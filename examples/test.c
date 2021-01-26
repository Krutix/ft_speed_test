#include "ftst.h"

void support_function(int a, int b)
{
    EQ(a * 2, b / 2);
}

TEST(equal_test)
{
    EQ(1llu, 1);
    EQ(43, 43);
    EQ(43, 43, i, ASSERT);
    EQ(0., 0., g);
    support_function(20, 80);
    LESS(15, 30);
    MORE(30, 15);
}

TEST(boolean_test)
{
    IS_TRUE(true);
    IS_FALSE(false);
    IS_TRUE(15 == 0);
    IS_FALSE(15 == 0);
    IS_FALSE(-1u, u, ASSERT);
    IS_TRUE(true);
}

TEST(string_cmp)
{
    STR_EQ("hello world", "hello world");
    STR_NE("hello worlb", "hello world");
}

TEST(error_test)
{
    EQ(-1, 1);
    support_function(40, 80);
    EQ(-1llu, -1llu, llu);
    LESS(-1llu, 1llu, llu);
    LESSEQ(-1llu, 1llu, llu);
    EQ(-1llu, 1llu, llu, ASSERT);
    EQ(-1, 1);
}

int main()
{
    FTST_INIT(stdout);

    RUNTEST(equal_test);
    RUNTEST(boolean_test);
    RUNTEST(string_cmp);
    RUNTEST(error_test);

    FTST_EXIT();
}