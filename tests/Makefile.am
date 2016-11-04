AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCSTRING_CPPFLAGS@ \
	@LIBCERROR_CPPFLAGS@ \
	@LIBFOLE_DLL_IMPORT@

TESTS = \
	test_api_functions.sh

check_SCRIPTS = \
	test_api_functions.sh \
	test_runner.sh

EXTRA_DIST = \
	$(check_SCRIPTS)

check_PROGRAMS = \
	fole_test_error \
	fole_test_support

fole_test_error_SOURCES = \
	fole_test_error.c \
	fole_test_libcstring.h \
	fole_test_libfole.h \
	fole_test_macros.h \
	fole_test_unused.h

fole_test_error_LDADD = \
	../libfole/libfole.la \
	@LIBCSTRING_LIBADD@

fole_test_support_SOURCES = \
	fole_test_support.c \
	fole_test_libcstring.h \
	fole_test_libfole.h \
	fole_test_macros.h \
	fole_test_unused.h

fole_test_support_LDADD = \
	../libfole/libfole.la \
	@LIBCSTRING_LIBADD@

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile

