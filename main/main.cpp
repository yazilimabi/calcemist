#include <stdio.h>
#include <inttypes.h>
#include "Lexer.h"
#include "esp_log.h"

extern "C" {
    void app_main();
}

void app_main(void)
{
    Lexer lexer("Hello, ESP-IDF!");
    lexer.printInput();
}
 