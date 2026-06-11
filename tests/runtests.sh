#!/bin/sh
# Script to run tests
#
# Version: 20260609

if test -f ${PWD}/libfole/.libs/libfole.1.dylib && test -f ./pyfole/.libs/pyfole.so
then
	install_name_tool -change /usr/local/lib/libfole.1.dylib ${PWD}/libfole/.libs/libfole.1.dylib ./pyfole/.libs/pyfole.so
fi

make check-build > /dev/null

make check $@
RESULT=$?

if test ${RESULT} -ne 0
then
	find . -name \*.log -path \*.dir/\*/\*.log -print -exec cat {} \;
fi
exit ${RESULT}

