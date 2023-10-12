#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/display/cfb.h>
#include "include/main.h"



void main(void){

    if(display == NULL){
        return;
    }

    if(!device_is_ready(display)){
        return;
    }

    display_set_pixel_format(display, PIXEL_FORMAT_MONO10);
    cfb_framebuffer_init(display);
    cfb_print(display, "UMIDADE", 0, 0);
    cfb_print(display, "50%", 0, 30);
    cfb_framebuffer_finalize(display);

}