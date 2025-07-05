#include "ui.hpp"

void Screen::init(LGFX* lcd_copy) {
    lcd = lcd_copy;
    lcd->init();

    top_buffer = new LGFX_Sprite(lcd_copy);
    top_buffer->createSprite(320, 20);
    top_buffer->fillSprite(lgfx::v1::color565(0x36, 0x36, 0x36));
    top_buffer->setTextColor(lgfx::v1::color565(0, 0, 0x96));
    top_buffer->setCursor(2, 2);
    top_buffer->setTextSize(2);
    top_buffer->print("amogus");
    top_buffer->fillEllipse(308, 10, 2, 5, lgfx::v1::color565(0xaf, 0, 0));
    top_buffer->fillEllipse(300, 6, 8, 4, lgfx::v1::color565(0xFF, 0, 0));
    top_buffer->fillEllipse(295, 15, 3, 3, lgfx::v1::color565(0xFF, 0, 0));
    top_buffer->fillEllipse(305, 15, 3, 3, lgfx::v1::color565(0xFF, 0, 0));
    top_buffer->fillRect(292, 6, 17, 9, lgfx::v1::color565(0xFF, 0, 0)); // amogus?? why not 16??
    top_buffer->fillEllipse(294, 8, 5, 3, lgfx::v1::color565(0, 0xf0, 0xff));
    user_buffer = new LGFX_Sprite(lcd_copy);
}

void Screen::clear() {
    lcd->clear(lgfx::v1::color565(0x18, 0x18, 0x18));
    top_buffer->pushSprite(0, 0);
}
