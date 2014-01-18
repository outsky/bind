all: test

test: bind.h bind_t.h arg_list.h placeholder.h fn_wrapper.h

.PYONY clean:
	rm test -f
