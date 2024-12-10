.PHONY:all
all:test1 test1_load

test1:test1.c
	gcc -o $@ $^

test1_load:test1_load.c
	gcc -o $@ $^ -std=c99

.PHONY:clean
clean:
	rm -f test1 test1_load