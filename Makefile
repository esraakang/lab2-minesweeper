CC = gcc
CFLAGS = $(pkg-config --cflags --libs gtk4)
OBJ = main.o model.o view.o controller.o

all: msweeper

msweeper: $(OBJ)
	$(CC) -o msweeper $(OBJ) $(CFLAGS)

%.o: %.c
	$(CC) -c $< $(CFLAGS)

clean:
	rm -f *.o msweeper
