// #include <cstdio>
// #include <vector>
#include "claseA.hpp"
#include "claseB.hpp"
#include "SensorTemp.hpp"
#include "Proximidad.hpp"
#include <stdio.h>

using namespace std;

int main()
{
    printf("\n************ RIOT and C++ demo program ***********\n");
    printf("\n************** con más de una clase ***********\n");
    printf("\n");

    claseA cpp_obj;
    claseB obj;
    SensorTemp objSen;
    Proximidad objprox;
    
    printf("\n-= Test overloading functions =-\n");
    cpp_obj.say_hello();
    cpp_obj.say_hello(42);
    cpp_obj.say_hello(3.1415f);
    obj.suma(35.45,18.23);
    obj.hola(2.3456);
    obj.encenderled();
    printf("\n-= fin del main =-\n");
    //objSen.say_hello();
    objSen.funcionlcd();
    //objprox.say_hello();
    //objprox.funcionproxi();



}
