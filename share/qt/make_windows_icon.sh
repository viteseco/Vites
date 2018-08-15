#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/vitescoin.ico

convert ../../src/qt/res/icons/vitescoin-16.png ../../src/qt/res/icons/vitescoin-32.png ../../src/qt/res/icons/vitescoin-48.png ${ICON_DST}
