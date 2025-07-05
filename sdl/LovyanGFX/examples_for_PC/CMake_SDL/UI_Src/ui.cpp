#include "ui.hpp"

void Screen::init(LGFX* lcd_copy) {
    lcd = lcd_copy;
    lcd->init();
}

void Screen::clear() {
    lcd->clear(lgfx::v1::color565(0x18, 0x18, 0x18));
}