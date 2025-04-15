#include <stdio.h>
#include <inttypes.h>
#include "Lexer.h"
#include "esp_log.h"
#include "freertos/idf_additions.h"
#include "led_strip.h"
#include "sdkconfig.h"

extern "C" {
    void app_main();
}

led_strip_handle_t led_strip;

/* LED strip initialization with the GPIO and pixels number*/
led_strip_config_t strip_config = {
	.strip_gpio_num = 48, // The GPIO that connected to the LED strip's data line
	.max_leds = 1, // The number of LEDs in the strip,
};

led_strip_rmt_config_t rmt_config = {
    .resolution_hz = 10 * 1000 * 1000, // 10MHz
};

void app_main(void)
{
    Lexer lexer("Hello, ESP-IDF!");
    lexer.printInput();
    rmt_config.flags.with_dma = false;
    ESP_ERROR_CHECK(led_strip_new_rmt_device(&strip_config, &rmt_config, &led_strip));
    
    
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    led_strip_set_pixel(led_strip, 0, 16, 16, 16);
    led_strip_refresh(led_strip);
    vTaskDelay(50 / portTICK_PERIOD_MS);
    led_strip_clear(led_strip);
    
}
 