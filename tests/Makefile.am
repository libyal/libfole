AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCERROR_CPPFLAGS@ \
	@LIBFOLE_DLL_IMPORT@

TESTS = \
	test_library.sh

check_SCRIPTS = \
	test_library.sh \
	test_runner.sh

EXTRA_DIST = \
	$(check_SCRIPTS)

check_PROGRAMS = \
	fole_test_error \
	fole_test_support \
	fole_test_value_type

fole_test_error_SOURCES = \
	fole_test_error.c \
	fole_test_libcerror.h \
	fole_test_libfole.h \
	fole_test_macros.h \
	fole_test_unused.h

fole_test_error_LDADD = \
	../libfole/libfole.la

fole_test_support_SOURCES = \
	fole_test_libfole.h \
	fole_test_macros.h \
	fole_test_support.c \
	fole_test_unused.h

fole_test_support_LDADD = \
	../libfole/libfole.la

fole_test_value_type_SOURCES = \
	fole_test_libcerror.h \
	fole_test_libfole.h \
	fole_test_macros.h \
	fole_test_memory.c fole_test_memory.h \
	fole_test_unused.h \
	fole_test_value_type.c

fole_test_value_type_LDADD = \
	../libfole/libfole.la

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile

