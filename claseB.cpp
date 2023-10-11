#include "claseB.hpp"
#include <stdio.h>
#include "periph/gpio.h"
#include "xtimer.h"

claseB::claseB()
{
    printf("Instantiating Object B [constructor called]\n");
    greet();
}

claseB::~claseB()
{
    printf("Destroying Object B [destructor called]\n");
    printf("Im shutting down!\n");
}

void claseB::suma(double n,double m)
{
    double x;
    x=n+m;
    printf("El resultado de la suma es: %f]\n", x);
}

void claseB::hola(float m)
{
    printf("Hello B![float: %g]\n", m);
}

void claseB::greet(void)
{
    printf("Im starting B!\n");
}

void claseB::encenderled(void)
{
    gpio_t pin_red = GPIO_PIN(PORT_D, 5); // Definir el pin del LED rojo
    gpio_t pin_blue = GPIO_PIN(PORT_D, 7); // Definir el pin del LED azul

    gpio_init(pin_red, GPIO_OUT); // Inicializar el pin del LED rojo como salida
    gpio_init(pin_blue, GPIO_OUT); // Inicializar el pin del LED azul como salida

    for(int i = 0; i < 4; i++) {
        gpio_toggle(pin_red); // Cambiar el estado del pin del LED rojo
        xtimer_usleep(500000); // Esperar medio segundo
        printf("Holi led rojo\n");
        gpio_toggle(pin_blue); // Cambiar el estado del pin del LED azul
        xtimer_usleep(500000); // Esperar medio segundo
        printf("Holi led azul\n");

    }

}
