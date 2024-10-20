CC=gcc
SOURCE=cora_test.c
OBJ=$(SOURCE:.c=.o)
EXE=cora_test

all: $(EXE) clean execute

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $@ -lX11

.o: .c
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJ)

execute:
	./$(EXE)