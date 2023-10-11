#include "SensorTemp.hpp"
#include <stdio.h>
#include "dht.h"
#include "xtimer.h"
#include "periph/gpio.h"

using namespace std;

int16_t temperature;
int16_t humidity;

SensorTemp::SensorTemp()
{
    printf("Instantiating Object Sensor[constructor called]\n");
}

SensorTemp::~SensorTemp()
{
    printf("Destroying Object sensor [destructor called]\n");
    printf("Im shutting down!\n");
}

void SensorTemp::say_hello()
{
    printf("Hello soy sensor temp!\n");
}

int SensorTemp::funcionlcd()
{
    printf("Hello PRUEBA DE SENSOR TEMPERATURA!\n");

    dht_t dht;
    dht_params_t params;

    params.pin = GPIO_PIN(PORT_D, 2);

    if(dht_init(&dht, &params) != DHT_OK)
    {
        printf("Error al inicializar el sensor DHT11\n");
        return 1;
    }

    while (1)
    {
        if (dht_read(&dht, &temperature, &humidity) == DHT_OK)
        {
            printf("Temperatura: %d\n", temperature);
            printf("Humedad: %d\n", humidity);
        } 
        else 
        {
            printf("Error al leer el sensor DHT11\n");
        }
        xtimer_sleep(5);
    }
    return 0;
}
