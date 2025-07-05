#pragma once

#define LGFX_USE_V1
#include <LovyanGFX.hpp>
#include <LGFX_AUTODETECT.hpp>

class Screen {
public:
    Screen() = default;
    void init(LGFX* lcd_copy);
    void clear();

    LGFX* lcd;
private:
};