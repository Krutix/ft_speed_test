#include "ft_speed_test.h"

FTST_TEST(equal_test)
{
    FTST_EXPECT_EQ(1, 1);
    FTST_ASSERT_EQ(2, 2);
    FTST_EXPECT_EQ(1, 1);
}

FTST_TEST(error_test)
{
    FTST_EXPECT_EQ(15, 1);
    FTST_ASSERT_EQ(2, 42);
    FTST_EXPECT_EQ(1, 3);
}

int main()
{
    ftst_init(stderr);

    FTST_RUNTEST(equal_test);
    FTST_RUNTEST(error_test);

    ftst_exit();
}
