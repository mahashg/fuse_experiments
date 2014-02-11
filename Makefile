T=test
CC=gcc
CPP=g++
all:
	$(CC) $(T).c -o $(T) -D_FILE_OFFSET_BITS=64 `pkg-config fuse --libs`

clean:
	rm $(T)
