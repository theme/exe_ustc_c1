CC=clang
CFLAGS=-g

tgts = exe1.1t exe1.2t exe1.3t

$(tgts) : %t: %
	./$<

.PHONY: $(tgts) clean
clean:
		find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
		rm -f *.o *.d

