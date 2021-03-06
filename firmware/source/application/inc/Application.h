/********************************************************************************
 * class        Application HMI with TFT ILI9488 controller                     *
 *                                                                              *
 * file         Application.h                                                   *
 * author       @RedCommissary                                                  *
 * date         13.02.2021                                                      *
 *                                                                              *
 ********************************************************************************/

#pragma once

/********************************************************************************
 * Include 
 ********************************************************************************/

#include "startupF401.h"

#include "Clock.h"
#include "Delay.h"

#include "Led.h"
#include "Buzzer.h"
#include "Button.h"
#include "Display.h"

/********************************************************************************
 * Class Application
 ********************************************************************************/
class Application {
    public:
        static void Init();
};