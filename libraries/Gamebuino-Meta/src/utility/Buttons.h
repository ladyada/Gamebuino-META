/*
 * (C) Copyright 2014 Aurélien Rodot. All rights reserved.
 *
 * This file is part of the Gamebuino Library (http://gamebuino.com)
 *
 * The Gamebuino Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef GAMEBUINO_META_BUTTONS_H
#define	GAMEBUINO_META_BUTTONS_H

#include <Arduino.h>
#include <SPI.h>

#define NUM_BTN		8
#define BTN_CS		PIN_LED_RXL

#define BTN_DOWN	(0)
#define BTN_LEFT	(1)
#define BTN_RIGHT	(2)
#define BTN_UP		(3)

#define BTN_A		(4)
#define BTN_B		(5)
#define BTN_C		(6)
#define BTN_D		(7)

namespace Gamebuino_Meta {

class Buttons {
public:
    void begin();
    void update();
    boolean pressed(uint8_t button);
    boolean released(uint8_t button);
    boolean held(uint8_t button, uint8_t time);
    boolean repeat(uint8_t button, uint8_t period);
    uint8_t timeHeld(uint8_t button);
    uint8_t states[NUM_BTN];

};

} // Gamebuino_Meta

#endif	/* GAMEBUINO_META_BUTTONS_H */