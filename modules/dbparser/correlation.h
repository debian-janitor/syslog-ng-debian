/*
 * Copyright (c) 2002-2013, 2015 Balabit
 * Copyright (c) 1998-2013, 2015 Balázs Scheidler
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */
#ifndef PATTERNDB_CORRELATION_H_INCLUDED
#define PATTERNDB_CORRELATION_H_INCLUDED

#include "syslog-ng.h"
#include "correlation-key.h"

typedef struct _CorrelationState
{
  GHashTable *state;
} CorrelationState;

void correlation_state_init_instance(CorrelationState *self);
void correlation_state_deinit_instance(CorrelationState *self);
CorrelationState *correlation_state_new(void);
void correlation_state_free(CorrelationState *self);

#endif
