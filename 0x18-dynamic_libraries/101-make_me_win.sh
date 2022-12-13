#!/bin/bash
wget -P .. https://github.com/Thermiprettie/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD="$PWD/../libwin.so"
