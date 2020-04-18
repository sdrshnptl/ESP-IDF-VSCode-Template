#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


void app_main(void)
{
    int i = 0;
    while (1) {
        printf("[%d] Hello world!, Enjoy Working With ESP32 And VS-Code\n", i);
        i++;
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}
