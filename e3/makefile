CC=clang
CFLAGS=-g

tgts = e1t e2t e3t 

$(tgts) : %t: %
	./$<

.PHONY: $(tgts) clean
clean:
		find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
		rm -f *.o *.d

