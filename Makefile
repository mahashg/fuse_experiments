T=test

all:
	gcc $(T).c -o $(T) -D_FILE_OFFSET_BITS=64 `pkg-config fuse --libs`

clean:
	rm $(T)
