/*
 * Copyright (C) 2014 Red Hat
 *
 * This file is part of qconnect.
 *
 * Qconnect is free software: you can redistribute it and/or modify
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COMMON_H
#define COMMON_H

#include <iostream>

#define VERSION "0.1"
#define APP_NAME "Qconnect"
#define APP_STRING APP_NAME" "VERSION

#define toAscii toLatin1

/* undef on normal builds */
#define DEVEL 1

#define TMP_CERT_PREFIX "tmp-certXXXXXX"
#define TMP_KEY_PREFIX "tmp-keyXXXXXX"

#endif // COMMON_H