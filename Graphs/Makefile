CC = gcc
#CC = clang

LD = $(CC)

CFLAGS =
CFLAGS += -g
CFLAGS += -std=gnu99 
CFLAGS += -Wall 
#CFLAGS += -pedantic 
CFLAGS += -Wno-unused-function
CFLAGS += -Werror

OBJECTS =
OBJECTS += main.o
OBJECTS += student_test.o
OBJECTS += ta_test.o
OBJECTS += graph.o

EXE = ./test

.PHONY: all
all: $(EXE)

main.o: graph.h test.h
graph.o: graph.h

$(EXE): $(OBJECTS)
	$(LD) $^ -o $@

.PHONY: run
run: all
	$(EXE)

.PHONY: clean
clean: 
	$(RM) $(OBJECTS)
	$(RM) $(EXE)
	$(RM) test.dot

.PHONY: force
force: clean
force: $(EXE)
