#!/usr/bin/env bash

die() {
	echo
	echo "$* Failed!"
	exit 1
}

DIRNAME=$(dirname "$0")
cd "$DIRNAME"

make || die "Make Failed"

FILENAME="eg/$(uname -m)__$(uname -s)__$(uname -r).txt"
echo "Writing to $FILENAME..."

printf "(uname -s) Kernel Name:           " >> "$FILENAME"
uname -s >> "$FILENAME"
printf "(uname -r) Kernel Release:        " >> "$FILENAME"
uname -r >> "$FILENAME"
printf "(uname -v) Kernel Version:        " >> "$FILENAME"
uname -v >> "$FILENAME"
printf "(uname -m) Machine Hardware Name: " >> "$FILENAME"
uname -m >> "$FILENAME"
printf "(\$HOSTTYPE) Host Type:            " >> "$FILENAME"
echo "$HOSTTYPE" >> "$FILENAME"
printf "(\$MACHTYPE) Machine Type:         " >> "$FILENAME"
echo "$MACHTYPE" >> "$FILENAME"
printf "(gcc --version) GCC Version:      " >> "$FILENAME"
gcc --version | head -n 1 >> "$FILENAME"

printf "\n\n" >> "$FILENAME"

./VarSizes >> "$FILENAME"