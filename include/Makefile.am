include_HEADERS = \
	libfole.h

pkginclude_HEADERS = \
	libfole/definitions.h \
	libfole/error.h \
	libfole/extern.h \
	libfole/features.h \
	libfole/types.h

EXTRA_DIST = \
	libfole.h.in \
	libfole/definitions.h.in \
	libfole/features.h.in \
	libfole/types.h.in

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	-rm -f libfole.h
	-rm -f libfole/definitions.h
	-rm -f libfole/features.h
	-rm -f libfole/types.h
	-rm -f Makefile

