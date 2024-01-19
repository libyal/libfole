/*
 * Value type functions
 *
 * Copyright (C) 2008-2024, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFOLE_VALUE_TYPE_H )
#define _LIBFOLE_VALUE_TYPE_H

#include <common.h>
#include <types.h>

#include "libfole_extern.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfole_value_type libfole_value_type_t;

struct libfole_value_type
{
	/* The value type
	 */
	uint32_t value_type;

	/* The identifier
	 */
	const char *identifier;

	/* The description
	 */
	const char *description;
};

LIBFOLE_EXTERN \
const char *libfole_value_type_get_identifier(
             uint32_t value_type );

LIBFOLE_EXTERN \
const char *libfole_value_type_get_description(
             uint32_t value_type );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFOLE_VALUE_TYPE_H ) */

