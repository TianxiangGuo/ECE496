#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/andy/Desktop/feb7_kern4/kern_4_pe8/kern_4/solution1/.autopilot/db/a.g.bc ${1+"$@"}