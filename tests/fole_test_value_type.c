/*
 * Library value_type type test program
 *
 * Copyright (C) 2008-2023, Joachim Metz <joachim.metz@gmail.com>
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

/* Tests the libfole_value_type_get_identifier function
 * Returns 1 if successful or 0 if not
 */
int fole_test_value_type_get_identifier(
     void )
{
	/* Test invocation of function only
	 */
	libfole_value_type_get_identifier(
	 0x0001 );

	return( 1 );
}

/* Tests the libfole_value_type_get_description function
 * Returns 1 if successful or 0 if not
 */
int fole_test_value_type_get_description(
     void )
{
	/* Test invocation of function only
	 */
	libfole_value_type_get_description(
	 0x0001 );

	return( 1 );
}

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

	FOLE_TEST_RUN(
	 "libfole_value_type_get_identifier",
	 fole_test_value_type_get_identifier );

	FOLE_TEST_RUN(
	 "libfole_value_type_get_description",
	 fole_test_value_type_get_description );

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

