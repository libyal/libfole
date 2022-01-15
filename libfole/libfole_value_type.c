/*
 * Value type functions
 *
 * Copyright (C) 2008-2022, Joachim Metz <joachim.metz@gmail.com>
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
#include <types.h>

#include "libfole_value_type.h"

libfole_value_type_t libfole_value_types[ ] = {
	{ 0x0000, "VT_EMPTY",			"Empty" },
	{ 0x0001, "VT_NULL",			"NULL" },
	{ 0x0002, "VT_I2",			"Integer 16-bit signed" },
	{ 0x0003, "VT_I4",			"Integer 32-bit signed" },
	{ 0x0004, "VT_R4",			"Floating point single precision (32-bit)" },
	{ 0x0005, "VT_R8",			"Floating point double precision (64-bit)" },
	{ 0x0006, "VT_CY",			"Currency (64-bit)" },
	{ 0x0007, "VT_DATE",			"Application time (64-bit)" },
	{ 0x0008, "VT_BSTR",			"OLE automation string" },
	{ 0x0009, "VT_DISPATCH",		"IDispatch reference" },
	{ 0x000a, "VT_ERROR",			"Error value (32-bit)" },
	{ 0x000b, "VT_BOOLEAN",			"Boolean" },
	{ 0x000c, "VT_VARIANT",			"VARIANT reference" },
	{ 0x000d, "VT_UNKNOWN",			"IUnknown reference" },

	{ 0x0010, "VT_I1",			"Integer 8-bit signed" },
	{ 0x0011, "VT_UI1",			"Integer 8-bit unsigned" },
	{ 0x0012, "VT_UI2",			"Integer 16-bit unsigned" },
	{ 0x0013, "VT_UI4",			"Integer 32-bit unsigned" },
	{ 0x0014, "VT_I8",			"Integer 64-bit signed" },
	{ 0x0015, "VT_UI8",			"Integer 64-bit unsigned" },
	{ 0x0016, "VT_INT",			"Integer signed" },
	{ 0x0017, "VT_UINT",			"Integer unsigned" },
	{ 0x0018, "VT_VOID",			"Void reference" },
	{ 0x0019, "VT_HRESULT",			"HRESULT reference" },
	{ 0x001a, "VT_PTR",			"pointer reference" },
	{ 0x001b, "VT_SAFEARRAY",		"safe array" },
	{ 0x001c, "VT_CARRAY",			"C-type array" },
	{ 0x001d, "VT_USERDEFINED",		"user defined" },
	{ 0x001e, "VT_LPSTR",			"Extended ASCII string" },
	{ 0x001f, "VT_LPWSTR",			"UTF-16 Unicode string" },

	{ 0x0040, "VT_FILETIME",		"Windows Filetime (64-bit)" },
	{ 0x0041, "VT_BLOB",			"Binary large object" },
	{ 0x0042, "VT_STREAM",			"OLE stream" },
	{ 0x0043, "VT_STORAGE",			"OLE storage" },
	{ 0x0044, "VT_STREAMED_OBJECT",		"OLE streamed object" },
	{ 0x0045, "VT_STORED_OBJECT",		"OLE stored object" },
	{ 0x0046, "VT_BLOB_OBJECT",		"Binary large object" },
	{ 0x0047, "VT_CF",			"Clipboard format" },

	{ 0x0048, "VT_CLSID",			"GUID (128-bit)" },
	{ 0x0049, "VT_VERSIONED_STREAM",	"OLE versioned stream" },

	{ (uint32_t) -1, "_UNKNOWN_", "Unknown" } };

/* Retrieves a string containing the value type identifier
 */
const char *libfole_value_type_get_identifier(
             uint32_t value_type )
{
	int iterator = 0;

	while( ( libfole_value_types[ iterator ] ).value_type != (uint32_t) -1 )
	{
		if( ( libfole_value_types[ iterator ] ).value_type == value_type )
		{
			break;
		}
		iterator++;
	}
	return(
	 ( libfole_value_types[ iterator ] ).identifier );
}

/* Retrieves a string containing the value type description
 */
const char *libfole_value_type_get_description(
             uint32_t value_type )
{
	int iterator = 0;

	while( ( libfole_value_types[ iterator ] ).value_type != (uint32_t) -1 )
	{
		if( ( libfole_value_types[ iterator ] ).value_type == value_type )
		{
			break;
		}
		iterator++;
	}
	return(
	 ( libfole_value_types[ iterator ] ).description );
}

