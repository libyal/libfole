MSVSCPP_FILES = \
	fole_test_error/fole_test_error.vcproj \
	fole_test_get_version/fole_test_get_version.vcproj \
	libcerror/libcerror.vcproj \
	libcstring/libcstring.vcproj \
	libfole/libfole.vcproj \
	libfole.sln

SCRIPT_FILES = \
	scripts/vs2008_x64.sh \
	scripts/vs2008_x64_sln.sed \
	scripts/vs2008_x64_vcproj.sed \
	scripts/vs2010_x64.sh \
	scripts/vs2010_x64_sln.sed \
	scripts/vs2010_x64_vcxproj.sed

EXTRA_DIST = \
	$(MSVSCPP_FILES) \
	$(SCRIPT_FILES)

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile

