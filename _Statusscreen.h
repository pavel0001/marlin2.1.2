/**
 * Marlin 3D Printer FirmwareM250
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#pragma once

//
// Status Screen Logo bitmap
//
#if ENABLED(KAD_SKR_BED)
  #define STATUS_LOGO_X 0
#endif

#if HOTENDS < 2
#define STATUS_LOGO_WIDTH 48

const unsigned char status_logo_bmp[] PROGMEM = {
  
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ................................................
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ................................................
  B11110011,B10000000,B00000000,B00011111,B10000000,B00000000, // ####..###..................######...............
  B01110111,B00000000,B00000000,B00011001,B10000000,B00000000, // .###.###...................##..##...............
  B01011011,B00011100,B11110110,B00010011,B00011101,B10101110, // .#.##.##...###..####.##....#..##...###.##.#.###.
  B01011011,B00110101,B10101011,B00000110,B00110101,B11111011, // .#.##.##..##.#.##.#.#.##.....##...##.#.######.##
  B01011011,B00111101,B10100111,B00001100,B10111101,B10011011, // .#.##.##..####.##.#..###....##..#.####.##..##.##
  B01001011,B00110000,B11101011,B00011001,B10110001,B10011011, // .#..#.##..##....###.#.##...##..##.##...##..##.##
  B11100011,B10011101,B10001110,B10011111,B10011101,B10001110, // ###...###..###.##...###.#..######..###.##...###.
  B00000000,B00000001,B11100000,B00000000,B00000000,B00000000, // ...............####.............................
  B00000000,B00000001,B00100000,B00000000,B00000000,B00000000, // ...............#..#.............................
  B00000000,B00000001,B11100000,B00000000,B00000000,B00000000  // ...............####.............................
};
#else
#define STATUS_LOGO_WIDTH 25

const unsigned char status_logo_bmp[] PROGMEM = {
 
  B00000000,B00000000,B00000000,B00000000, // ................................
  B11110011,B10000000,B00000000,B00000000, // ####..###.......................
  B01110111,B00000000,B00000000,B00000000, // .###.###........................
  B01011011,B00011100,B11110110,B00000000, // .#.##.##...###..####.##.........
  B01011011,B00110101,B10101011,B00000000, // .#.##.##..##.#.##.#.#.##........
  B01011011,B00111101,B10100111,B00000000, // .#.##.##..####.##.#..###........
  B01001011,B00110000,B11101011,B00000000, // .#..#.##..##....###.#.##........
  B11100011,B10011101,B10001110,B10000000, // ###...###..###.##...###.#.......
  B00000000,B00000001,B11100000,B00000000, // ...............####.............
  B00000000,B00000001,B00100000,B00000000, // ...............#..#.............
  B00000000,B00000001,B11100000,B00000000, // ...............####.............
  B00111111,B00000000,B00000000,B00000000, // ..######........................
  B00110011,B00000000,B00000000,B00000000, // ..##..##........................
  B00100110,B00111011,B01001110,B00000000, // ..#..##...###.##.#..###.........
  B00001100,B01101011,B11011011,B00000000, // ....##...##.#.####.##.##........
  B00011001,B01111011,B00011011,B00000000, // ...##..#.####.##...##.##........
  B00110011,B01100011,B00011011,B00000000, // ..##..##.##...##...##.##........
  B00111111,B00111011,B00001110,B00000000  // ..######..###.##....###.........
};
#endif
