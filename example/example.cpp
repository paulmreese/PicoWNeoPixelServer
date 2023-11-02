#include "picow_neopixel_server.h"
#include "pico/multicore.h"

int main () {
    // while (true) {
    //     multicore_launch_core1(launch_server);
    // }
    launch_server();
}