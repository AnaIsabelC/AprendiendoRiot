# name of your application
APPLICATION = Prueba

# If no BOARD is found in the environment, use this default:
BOARD ?= native

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/../..

# Uncomment these lines if you want to use platform support from external
# repositories:
#RIOTCPU ?= $(CURDIR)/../../../thirdparty_cpu
#EXTERNAL_BOARD_DIRS ?= $(CURDIR)/../../../thirdparty_boards

# Uncomment this to enable scheduler statistics for ps:
#CFLAGS += -DSCHEDSTATISTICS

# If you want to use native with valgrind, you should recompile native
# with the target all-valgrind instead of all:
# make -B clean all-valgrind

# Comment this out to disable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
DEVELHELP ?= 1

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 0

#USEMODULE += avr-libc
USEMODULE += cpp
USEMODULE += printf_float
USEMODULE += hd44780
USEMODULE += arduino-uno
USEMODULE += srf04
USEMODULE += periph_uart
USEMODULE += dht
USEMODULE += xtimer

# Features required
FEATURES_REQUIRED += cpp # basic C++ support

# If you want to add some extra flags when compile c++ files, add these flags
# to CXXEXFLAGS variable
CXXEXFLAGS +=




include $(RIOTBASE)/Makefile.include
