#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/yugao/Research/Kern/kern/layer_0/kern_4/hls_project/solution_1/.autopilot/db/a.g.bc ${1+"$@"}