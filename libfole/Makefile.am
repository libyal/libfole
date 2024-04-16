AM_CPPFLAGS = \
	-I../include -I$(top_srcdir)/include \
	-I../common -I$(top_srcdir)/common \
	@LIBCERROR_CPPFLAGS@ \
	@LIBFOLE_DLL_EXPORT@

lib_LTLIBRARIES = libfole.la

libfole_la_SOURCES = \
	libfole.c \
	libfole_definitions.h \
	libfole_extern.h \
	libfole_error.c libfole_error.h \
	libfole_libcerror.h \
	libfole_support.c libfole_support.h \
	libfole_types.h \
	libfole_unused.h \
	libfole_value_type.c libfole_value_type.h

libfole_la_LIBADD = \
	@LIBCERROR_LIBADD@

libfole_la_LDFLAGS = -no-undefined -version-info 1:0:0

EXTRA_DIST = \
	libfole_definitions.h.in \
	libfole.rc \
	libfole.rc.in

DISTCLEANFILES = \
	libfole_definitions.h \
	libfole.rc \
	Makefile \
	Makefile.in

sources-local: $(BUILT_SOURCES)

splint-local:
	@echo "Running splint on libfole ..."
	-splint -preproc -redef $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(libfole_la_SOURCES)

