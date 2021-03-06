/* main.h
 *
 * Copyright 2013 Ikey Doherty <ikey@solusos.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#pragma once

#define COL "\x1B["
#define COLOR(x) COL"3"#x"m"

#define C_RESET "\033[0m"
#define C_RED COLOR(1)
#define C_GREEN COLOR(2)
#define C_YELLOW COLOR(3)
#define C_BLUE COLOR(4)
#define C_MAGENTA COLOR(5)
#define C_CYAN COLOR(6)
#define C_WHITE COLOR(7)
