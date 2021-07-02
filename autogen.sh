#!/bin/sh

sed s#ROOTSYS#$ROOTSYS#g scripts/setup.sh.org > tmp.txt
mv tmp.txt setup.sh


sed s#PPWWDD#$PWD#g setup.sh > tmp.txt
mv tmp.txt setup.sh


srcdir=`dirname $0`
test -z "$srcdir" && srcdir=.

#(cd $srcdir; aclocal -I ${OFFLINE_MAIN}/share;\
#libtoolize --force; automake -a --add-missing; autoconf)

(cd $srcdir; aclocal;\
libtoolize --force; automake -a --add-missing; autoconf)

$srcdir/configure "$@"

