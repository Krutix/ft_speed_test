# FTST unit test framework
FTST is a small header-only unit test framework for C compatible with C89 standart, developed for using in school21(42) projects

FTST это маленький header-only unit test framework для C совместимый с C89 стандартом, разработанный для использования в проектах школы 21(42)

## Tips
- [x] Compatible with C89
- [x] Compare integer types
- [x] Compare boolean
- [x] ASSERT and EXCEPT
- [x] Less, More, LessEqual, etc
- [x] Unreadeble source on macro magic
- [ ] Compare string
- [ ] Compare with specific accuracy
- [ ] Launch block of tests
- [ ] Error custom comments
- [ ] Allocation fail check

**More about FTST functionality on [wiki](https://github.com/Krutix/ft_speed_test/wiki)**

## Getting started
**More about getting started with FTST on [wiki](https://github.com/Krutix/ft_speed_test/wiki/Start-with-FTST)**

FTST is header-only framework, all nead to do it's create .c file and include ftst.h. Then create test with TEST(*test name*) macro. For run tests create main function whick run ftst_init, RUN_TEST(*test name*) and ftst_exit when all tests are finished. Its may be look like this:

FTST это header-only framework, все что нужно это создать .с файл и подключить ftst.h. Затем создать тест с помощью TEST(*название теста*) макро. Для запуска тестов необходимо создать функцию main, котора запускает ftst_init, RUN_TEST(*название теста*) и ftst_exit когда все тесты завершены. Это может выглядеть вот так:
```c
#include "ftst.h"
TEST(my_test)
{
    EQ(1, 1);
}

int main()
{
    ftst_init(stdout, NULL);

    RUN_TEST(my_test);

    ftst_exit();
}
```
