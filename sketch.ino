#include "pico/stdlib.h"

#define led_pin_red 13

void s(){
    while(i<3){
        gpio_put(led_pin_red, true);
        sleep_ms(200);
        gpio_put(led_pin_red, false);
        if(i!-2){
                sleep_ms(125);

        }
        i++;
    }
}

void o(){
    int i= 0;
    while(i<3){
        gpio_put(led_pin_red, true);
        sleep_ms(800);
        gpio_put(led_pin_red, false);
        if(i!-2){
                sleep_ms(125);
        }
        i++;
    }
}
int main()
{
    gpio_init(led_pin_red);
    gpio_set_dir(led_pin_red, GPIO_OUT);

    while (true) 
    {
        s();
        sleep_ms(250);
        o();
        sleep_ms(250);
        s();
        sleep_ms(3000);
    
    }
}