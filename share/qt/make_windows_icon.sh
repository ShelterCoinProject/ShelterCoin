#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/ShelterCoin.ico

convert ../../src/qt/res/icons/ShelterCoin-16.png ../../src/qt/res/icons/ShelterCoin-32.png ../../src/qt/res/icons/ShelterCoin-48.png ${ICON_DST}
