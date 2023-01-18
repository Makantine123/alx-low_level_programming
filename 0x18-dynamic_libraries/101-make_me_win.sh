#!/bin/bash
wget -P /tmp https://github.com/Makantine123/alx-low_level_programming/0x18-dynamic_libraries/hijackgame.so
export LD_PRELOAD=/tmp/hijackgame.so
