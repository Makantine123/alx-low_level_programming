#!/bin/bash
wget -qO /tmp/jackpot.so https://github.com/Makantine123/alx-low_level_programming/raw/master/0x18-dynamic_libraries/hijackgame.so
export LD_PRELOAD=/tmp/hijackgame.so
