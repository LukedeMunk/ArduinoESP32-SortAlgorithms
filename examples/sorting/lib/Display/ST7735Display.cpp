/*
 * File:      TestUtility.h
 * Authors:   Luke de Munk
 * Class:     TestUtility
 * Version:   1.0
 *
 * Test utility test arrays.
*/
#ifdef DISPLAY_SORTING
#include "./ST7735Display.h"


ST7735Display::ST7735Display() {
  _tft = Adafruit_ST7735(CS_PIN, DC_PIN, RST_PIN);
  _color = 0xFF;

  _tft.initR(INITR_MINI160x80);                                             //Init ST7735S mini display
  
  /* SPI speed defaults to SPI_DEFAULT_FREQ defined in the library, you can override it here
    Note that speed allowable depends on chip and quality of wiring, if you go too fast, you
    may end up with a black screen some times, or all the time. */
  //_tft.setSPISpeed(40000000);
  
  _tft.setColRowStart(26, 1);                                           //For my specific display I had to adjust it
  _tft.setRotation(3);
  _tft.invertDisplay(true);
}

/**************************************************************************/
/*!
    @brief  Shows a list of elements on a display.
    @param  list    Array of elements to be sorted
    @param  n       Length of the array
*/
/**************************************************************************/
void ST7735Display::drawList(int32_t list[], uint32_t n) {
    uint16_t height = 0;

    if (n > SCREEN_WIDTH)
        n = SCREEN_WIDTH;
    for (uint16_t x = 0; x < n; x++) {
        if (list[x] > SCREEN_HEIGHT) {
            height = SCREEN_HEIGHT;
        } else {
            height = list[x];
        }
        for (uint16_t y = 0; y < height; y++) {
            _tft.drawPixel(x, y, _color);
        }
    }
}
#endif