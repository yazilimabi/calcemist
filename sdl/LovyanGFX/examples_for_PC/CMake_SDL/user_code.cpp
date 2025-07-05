#define LGFX_USE_V1
#include <LovyanGFX.hpp>
#include <LGFX_AUTODETECT.hpp>
#include "ui.hpp"

LGFX lcd(320, 240);
Screen screen;

void setup()
{
    screen.init(&lcd);
}

void loop()
{
    //if(lgfx::gpio_in(31))
    //    screen.lcd.fillCircle(current_x >> 8, current_y >> 8, 5, i);
    screen.clear();
    lgfx::touch_point_t new_tp;
    if (screen.lcd->getTouch(&new_tp))
    {
        screen.lcd->drawCircle(new_tp.x, new_tp.y, 5, TFT_WHITE);
    }
    lgfx::delay(10);
}
