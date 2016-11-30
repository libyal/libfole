/*
 * Library value_type type testing program
 *
 * Copyright (C) 2008-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <file_stream.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "fole_test_libcerror.h"
#include "fole_test_libfole.h"
#include "fole_test_macros.h"
#include "fole_test_memory.h"
#include "fole_test_unused.h"

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc FOLE_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] FOLE_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc FOLE_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] FOLE_TEST_ATTRIBUTE_UNUSED )
#endif
{
	FOLE_TEST_UNREFERENCED_PARAMETER( argc )
	FOLE_TEST_UNREFERENCED_PARAMETER( argv )

	/* TODO: add tests for libfole_value_type_get_identifier */

	/* TODO: add tests for libfole_value_type_get_description */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

