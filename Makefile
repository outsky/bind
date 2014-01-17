all: test

test: bind.h bind_t.h arg_list.h

.PYONY clean:
	rm test -f
