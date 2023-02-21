#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/tim/libGalapagos_capstone/ibert_test_layernorm/kern/layer_0/kern_29/layernorm_kern29/solution1/.autopilot/db/a.g.bc ${1+"$@"}
