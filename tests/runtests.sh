#!/bin/sh
# Script to run tests
#
# Version: 20201121

if test -f ${PWD}/libfole/.libs/libfole.1.dylib && test -f ./pyfole/.libs/pyfole.so;
then
	install_name_tool -change /usr/local/lib/libfole.1.dylib ${PWD}/libfole/.libs/libfole.1.dylib ./pyfole/.libs/pyfole.so;
fi

make check CHECK_WITH_STDERR=1;
RESULT=$?;

if test ${RESULT} -ne 0 && test -f tests/test-suite.log;
then
	cat tests/test-suite.log;
fi
exit ${RESULT};

