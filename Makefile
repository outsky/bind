all: test

test: test.cpp bind.h bind_t.h arg_list.h placeholder.h fn_wrapper.h
	c++ -g -Wall -o$@ test.cpp

.PYONY clean:
	rm test -f
