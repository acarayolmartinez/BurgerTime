# BurgerTime para ZX Spectrum - z88dk

ZCC ?= zcc
TARGET ?= +zx
CFLAGS ?= -vn -O2 -clib=sdcc_iy -startup=31

SOURCES = src/main.c src/input.c src/player.c src/enemies.c src/burgers.c src/levels.c src/graphics.c src/sound.c
OUTPUT = build/burgertime

.PHONY: all clean

all: $(OUTPUT).tap

$(OUTPUT).tap: $(SOURCES) src/game.h | build
	$(ZCC) $(TARGET) $(CFLAGS) -o $(OUTPUT) $(SOURCES) -create-app

build:
	mkdir -p build

clean:
	rm -rf build
