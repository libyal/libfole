#!/bin/sh
# Script to run tests
#
# Version: 20260714

if [ -f "${PWD}/libfole/.libs/libfole.1.dylib" ] && [ -f ./pyfole/.libs/pyfole.so ]
then
    install_name_tool -change /usr/local/lib/libfole.1.dylib "${PWD}/libfole/.libs/libfole.1.dylib" ./pyfole/.libs/pyfole.so
fi

make check-build > /dev/null

# shellcheck disable=SC2068
make check $@
RESULT=$?

if [ ${RESULT} -ne 0 ]
then
    find . -name \*.log -path \*.dir/\*/\*.log -print -exec cat {} \;
fi
exit ${RESULT}

