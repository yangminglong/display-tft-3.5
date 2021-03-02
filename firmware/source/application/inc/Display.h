/********************************************************************************
 * class        TFT display library                                             *
 *                                                                              *
 * file         Display.h                                                       *
 * author       @RedCommissary                                                  *
 * date         01.03.2021                                                      *
 *                                                                              *
 ********************************************************************************/

#pragma once

/********************************************************************************
 * Include 
 ********************************************************************************/
#include "Delay.h"

#include "ili9488.h"
#include "Color.h"

/********************************************************************************
 * Class Display
 ********************************************************************************/
class Display {
    public:
        void Init();
        void DrawPixel(uint16_t x, uint16_t y, uint16_t color);
        void DrawLine (uint16_t xStart, uint16_t yStart, uint16_t length, uint16_t color);
        void DrawFill (uint16_t xStart, uint16_t yStart, uint16_t xEnd, uint16_t yEnd, uint16_t color);
        void Background (uint16_t color);
    
    private:
        static constexpr uint16_t width = 480;
        static constexpr uint16_t height = 320;
};