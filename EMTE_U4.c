#include "pico/stdlib.h"

#define led_pin_red 13
//dinição do pino referente ao led que será ligado na placa

void s(){
    int i= 0;
    while(i<3){
        gpio_put(led_pin_red, true);
        sleep_ms(200);
        gpio_put(led_pin_red, false);
        if(i-2){
                sleep_ms(125);

        }
        i++;
    }
}
//função para chamar a letra s

void o(){
    int i= 0;
    while(i<3){
        gpio_put(led_pin_red, true);
        sleep_ms(800);
        gpio_put(led_pin_red, false);
        if(i-2){
                sleep_ms(125);
        }
        i++;
    }
}
//função para chamar a letra o

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
    //codigo SOS em código morse marcado por intervalos de 250ms entre as letras e 3s entre o reinício do loop
    }
}
