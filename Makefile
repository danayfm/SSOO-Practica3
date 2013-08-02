#--------------------------
# Variables
#--------------------------
#
MAKE         = make -s
CC           = gcc
SOURCE_PATH  = ./
OBJECTS      = production

INCLUDE_BASE = ./include/

MYFLAGS      = -Wall -g

MYHEADERS    =  -I${INCLUDE_BASE}
MYLIBS       =  -lpthread


#--------------------------
# Compilation rules
#--------------------------
#
#
all:  $(OBJECTS)

production: production.c
	$(CC) $(MYFLAGS) $(MYHEADERS) $(MYLIBS) production.c -o production

clean:
	rm -f *.o $(OBJECTS)
