/*********************************************************************
 * gb_SEN0169V2_ph_h
 *
 * Copyright (C)    20124   [GrowBot Open Source],
 * GitHub Link :XXXXX
 * This Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Description:Implement DFRobot Analog Industrial pH Sensor / Meter Pro Kit V2 into the growbot system
 *
 * Product Links：
 *
 * Sensor driver pin：
 * Connection:
 * VCC-5v
 * GND-GND

 *
 * author  :  GrowBot
 * version :  V1.0
 * date    :  2024-05-14
 **********************************************************************/

#ifndef gb_SEN0169V2_ph_h
#define gb_SEN0169V2_ph_h

#include <Arduino.h>
#include "DFRobot_PH.h"
#include <EEPROM.h>

class gb_SEN0169V2_ph
{
private:
    float voltage;
    float phValue;
    float temperature;
    int pH_PIN;

public:
    // init sensor object
    gb_SEN0169V2_ph(int ph_PIN);

    // get temperature
    double getPh(float temperature);
};

#endif