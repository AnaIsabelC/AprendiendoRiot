#include "Proximidad.hpp"
#include <stdio.h>
#include "srf04.h"
#include "xtimer.h"
#include "srf04_params.h"

using namespace std;

Proximidad::Proximidad()
{
    printf("Instantiating Object Sensor[constructor called]\n");
}

Proximidad::~Proximidad()
{
    printf("Destroying Object sensor [destructor called]\n");
    printf("Im shutting down!\n");
}

void Proximidad::say_hello(void)
{
    printf("Hello soy proximidad!\n");
}

void Proximidad::funcionproxi(void)
{
    // Inicializa la comunicación serial

    srf04_t misrf04;
    srf04_params_t misrf04parametros;
    
    misrf04parametros.trigger=gpio_t(2);
    misrf04parametros.echo=gpio_t(3);

    srf04_read(&misrf04);
    srf04_get_distance(&misrf04);

    srf04_init(&misrf04,&misrf04parametros); 
    printf("\n-= Test overloading functions =-\n");
    printf("La distancia es: %d\n", srf04_read);
    printf("La distancia es: %d\n", srf04_get_distance);
}
