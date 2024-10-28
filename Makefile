CC=gcc

SRC = task1_partA.c task1_partB.c task2.c task3.c task4.c task5.c

EXEC = $(SRC:.c=)

all: $(EXEC)

%: %.c
	$(CC) -o $@ $<

clean:
	rm -f $(EXEC)

