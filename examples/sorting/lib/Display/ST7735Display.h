/*
 * File:      ST7735Display.h
 * Authors:   Luke de Munk
 * Class:     ST7735Display
 * Version:   1.0
 *
 * Test utility test arrays.
*/
#ifndef ST7735Display_H
#define ST7735Display_H
#include <Adafruit_GFX.h>                               //Core graphics library
#include <Adafruit_ST7735.h>                            //Hardware-specific library for ST7735
#include <SPI.h>

#define SCLK_PIN        18                              //SPI clock (D18) Don't change
#define SDA_PIN         23                              //SPI data (D23) Don't change
#define DC_PIN          2                               //Register select (stands for Data Control perhaps!) (0 = command, 1 = display) (D2)
#define CS_PIN          5                               //Display enable (Chip select), if not enabled will not talk on SPI bus (D5)

#define RST_PIN         15                              //Display reset pin (D15)
#define BLK_PIN         4                               //Backlight control pin (0 = off, 1 = on) (D4)

#define SCREEN_WIDTH    160
#define SCREEN_HEIGHT   80

class ST7735Display
{
  public:
    ST7735Display();
    void drawList(int32_t list[], uint32_t n);
  
  private:
    Adafruit_ST7735 _tft;
    uint16_t _color;
};
#endif