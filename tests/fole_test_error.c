/*
 * Library error functions test program
 *
 * Copyright (C) 2008-2021, Joachim Metz <joachim.metz@gmail.com>
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

#include "fole_test_libfole.h"
#include "fole_test_macros.h"
#include "fole_test_unused.h"

/* Tests the libfole_error_free function
 * Returns 1 if successful or 0 if not
 */
int fole_test_error_free(
     void )
{
	/* Test invocation of function only
	 */
	libfole_error_free(
	 NULL );

	return( 1 );
}

/* Tests the libfole_error_fprint function
 * Returns 1 if successful or 0 if not
 */
int fole_test_error_fprint(
     void )
{
	/* Test invocation of function only
	 */
	libfole_error_fprint(
	 NULL,
	 NULL );

	return( 1 );
}

/* Tests the libfole_error_sprint function
 * Returns 1 if successful or 0 if not
 */
int fole_test_error_sprint(
     void )
{
	/* Test invocation of function only
	 */
	libfole_error_sprint(
	 NULL,
	 NULL,
	 0 );

	return( 1 );
}

/* Tests the libfole_error_backtrace_fprint function
 * Returns 1 if successful or 0 if not
 */
int fole_test_error_backtrace_fprint(
     void )
{
	/* Test invocation of function only
	 */
	libfole_error_backtrace_fprint(
	 NULL,
	 NULL );

	return( 1 );
}

/* Tests the libfole_error_backtrace_sprint function
 * Returns 1 if successful or 0 if not
 */
int fole_test_error_backtrace_sprint(
     void )
{
	/* Test invocation of function only
	 */
	libfole_error_backtrace_sprint(
	 NULL,
	 NULL,
	 0 );

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
	 "libfole_error_free",
	 fole_test_error_free );

	FOLE_TEST_RUN(
	 "libfole_error_fprint",
	 fole_test_error_fprint );

	FOLE_TEST_RUN(
	 "libfole_error_sprint",
	 fole_test_error_sprint );

	FOLE_TEST_RUN(
	 "libfole_error_backtrace_fprint",
	 fole_test_error_backtrace_fprint );

	FOLE_TEST_RUN(
	 "libfole_error_backtrace_sprint",
	 fole_test_error_backtrace_sprint );

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

