#include "claseA.hpp"
#include <stdio.h>

claseA::claseA()
{
    printf("Instantiating Object [constructor called]\n");
    greet();
}

claseA::~claseA()
{
    printf("Destroying Object [destructor called]\n");
    printf("Im shutting down!\n");
}

void claseA::say_hello(void)
{
    printf("Hello clase A!\n");
}

void claseA::say_hello(int n)
{
    printf("Hello A![int: %d]\n", n);
}

void claseA::say_hello(float f)
{
    printf("Hello A![float: %f]\n", f);
}

void claseA::greet(void)
{
    printf("Im starting soy A!\n");
}
